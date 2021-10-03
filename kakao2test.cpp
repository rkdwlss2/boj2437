////
////  kakao2test.cpp
////  boj2437
////
////  Created by 강명진 on 2021/09/24.
////
//#include <iostream>
//#include <cpprest/http_client.h>
//#include <cpprest/filestream.h>
//#include <cpprest/uri.h>
//#include <cpprest/json.h>
// 
// 
// //#include <json/json.h>
// 
//using namespace utility;
//using namespace web;
//using namespace web::http;
//using namespace web::http::client;
//using namespace concurrency::streams;
// 
//auto GET_print_to_json() {
//    // Create a file stream to write the received file into it.
//    auto fileStream = std::make_shared<ostream>();
// 
//    // Open stream to output file.
//    pplx::task<void> requestTask = fstream::open_ostream(U("users.json"))
// 
//        // Make a GET request.
//        .then([=](ostream outFile) {
//        *fileStream = outFile;
// 
//        // Create http_client to send the request.
//        http_client client(U("https://reqres.in"));
// 
//        // Build request URI and start the request.
//        return client.request(methods::GET, uri_builder(U("api")).append_path(U("users")).to_string());
//    })
// 
//        // Get the response.
//        .then([=](http_response response) {
//        // Check the status code.
//        if (response.status_code() != 200) {
//            throw std::runtime_error("Returned " + std::to_string(response.status_code()));
//        }
// 
//        // Write the response body to file stream.
//        response.body().read_to_end(fileStream->streambuf()).wait();
//        std::wcout << "\n\n========json 출력 완료=========\n\n"
//            << response.body() << std::endl;
//        // Close the file.
//        return fileStream->close();
//    });
// 
//    return requestTask;
//}
// 
//auto GET_request() {
//    // Make a GET request.
//    auto requestJson = http_client(U("https://reqres.in"))
//        .request(methods::GET,
//            uri_builder(U("api")).append_path(U("users")).append_query(U("id"), 1).to_string())
// 
//        // Get the response.
//        .then([](http_response response) {
//        // Check the status code.
//        if (response.status_code() != 200) {
//            throw std::runtime_error("Returned " + std::to_string(response.status_code()));
//        }
// 
//        // Convert the response body to JSON object.
//        return response.extract_json();
//    })
// 
//        // Get the data field.
//        .then([](json::value jsonObject) {
//        return jsonObject[U("data")];
//    })
//        // Parse the user details.
//        .then([](json::value jsonObject) {
// 
//        std::wcout << "그냥 테스트  " << uri_builder(U("api")).append_path(U("users")).append_path(U("hi")).append_query(U("id"), 1).append_query(U("name"), 2).to_string() << std::endl
//            << "\n==Get request 확인==\n"
//            << "first_name:" << jsonObject[U("first_name")].as_string()
//            << "    last_name:" << jsonObject[U("last_name")].as_string()
//            << "    id:" << jsonObject[U("id")].as_integer() << std::endl;
//    });
// 
//    return requestJson;
//}
// 
//auto POST_request() {
//    // Create user data as JSON object and make POST request.
//    auto postJson = pplx::create_task([]() {
//        json::value jsonObject;
//        jsonObject[U("first_name")] = json::value::string(U("atakan"));
//        jsonObject[U("last_name")] = json::value::string(U("sarioglu"));
// 
//        return http_client(U("https://reqres.in"))
//            .request(methods::POST,
//                uri_builder(U("api")).append_path(U("users")).to_string(),
//                jsonObject.serialize(), U("application/json"));
//    })
// 
//        // Get the response.
//        .then([](http_response response) {
//        // Check the status code.
//        if (response.status_code() != 201) {
//            throw std::runtime_error("Returned " + std::to_string(response.status_code()));
//        }
// 
//        // Convert the response body to JSON object.
//        return response.extract_json();
//    })
// 
//        // Parse the user details.
//        .then([](json::value jsonObject) {
//        std::wcout << "\n==POST request 확인==\n"
//            << jsonObject[U("first_name")].as_string()
//            << " " << jsonObject[U("last_name")].as_string()
//            << " (" << jsonObject[U("id")].as_string() << ") \n"
//            << jsonObject.to_string()
//            << std::endl;
//    });
// 
//    return postJson;
//}
// 
//auto PUT_request() {
//    // Make PUT request with {"name": "atakan", "location": "istanbul"} data.
//    auto putJson = http_client(U("https://reqres.in"))
//        .request(methods::PUT,
//            uri_builder(U("api")).append_path(U("users")).append_path(U("1")).to_string(),
//            U("{\"name\": \"atakan\", \"location\": \"istanbul\"}"),
//            U("application/json"))
// 
//        // Get the response.
//        .then([](http_response response) {
//        if (response.status_code() != 200) {
//            throw std::runtime_error("Returned " + std::to_string(response.status_code()));
//        }
// 
//        // Convert the response body to JSON object.
//        return response.extract_json();
//    })
// 
//        // Parse the user details.
//        .then([](json::value jsonObject) {
//        std::wcout << "\n==PUT request 확인==\n"
//            << jsonObject[U("name")].as_string()
//            << "    " << jsonObject[U("location")].as_string() << "  \n"
//            << jsonObject.to_string()
//            << std::endl;
//    });
// 
//    return putJson;
//}
// 
//auto PATCH_request() {
//    // Make PATCH request with {"name": "sarioglu"} data.
//    auto patchJson = http_client(U("https://reqres.in"))
//        .request(methods::PATCH,
//            uri_builder(U("api")).append_path(U("users")).append_path(U("1")).to_string(),
//            U("{\"name\": \"sarioglu\"}"),
//            U("application/json"))
// 
//        // Get the response.
//        .then([](http_response response) {
//        if (response.status_code() != 200) {
//            throw std::runtime_error("Returned " + std::to_string(response.status_code()));
//        }
// 
//        // Print the response body.
//        std::wcout << "\n==PATCH request 확인==\n"
//            << response.extract_json().get().serialize() << "  1 \n"
//            //<< response.extract_json().get().to_string() << "  2 \n"
//            << response.to_string()
//            << std::endl;
//    });
// 
//    return patchJson;
//}
// 
//auto DEL_request() {
//    // Make DEL request.
//    auto deleteJson = http_client(U("https://reqres.in"))
//        .request(methods::DEL,
//            uri_builder(U("api")).append_path(U("users")).append_path(U("1")).to_string())
//        // Get the response.
//        .then([](http_response response) {
//        std::wcout << "\n==DEL request 확인==\n"
//            << "Deleted: " << std::boolalpha << (response.status_code() == 204) << "\n"
//            << response.to_string()
//            << std::endl;
//    });
// 
//    return deleteJson;
//}
// 
//int main() {
//    auto requestTask = GET_print_to_json();
//    auto requestJson = GET_request();
//    auto postJson = POST_request();
//    auto putJson = PUT_request();
//    auto patchJson = PATCH_request();
//    auto deleteJson = DEL_request();
// 
//    // Wait for the concurrent tasks to finish.
//    try {
//        requestJson.wait();
//        postJson.wait();
//        putJson.wait();
//        patchJson.wait();
//        deleteJson.wait();
//        while (!requestTask.is_done()) { std::cout << "."; }
//    }
//    catch (const std::exception &e) {
//        printf("Error exception:%s\n", e.what());
//    }
// 
//    return 0;
//}
//
