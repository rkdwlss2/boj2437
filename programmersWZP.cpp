////
////  programmersWZP.cpp
////  boj2437
////
////  Created by 강명진 on 2021/08/14.
////
//
//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <iostream>
//using namespace std;
//
//unordered_map<string,int> Map;
//vector<int> solution(string msg) {
//    vector<int> answer;
//    int mapIndex=1;
//    for (int i = 0 ; i <26;i++){
//        string tmp="";
//        char now=i+'A';
//        tmp+=now;
//        Map[tmp]=mapIndex;
//        mapIndex++;
//    }
//    int msgN=msg.size();
//    for (int i = 0 ; i<msgN;i++){
//        bool Print=false;
//        int Plus=1;
//        string tmp(1,msg[i]);
//        while(true){
//            string tmp2=tmp;
//            tmp+=msg[i+Plus];
//            if (Map.count(tmp)>0){
//                Plus++;
//                continue;
//            }else{
//                Map.insert({tmp,mapIndex++});
//                answer.push_back(Map[tmp2]);
//                Print=true;
//                break;
//            }
//        }
//        i+=(Plus-1);
//    }
//    return answer;
//}
//
//int main(){
//    string test="ABABABABABABABAB";
//    vector<int> answer=solution(test);
//    for (auto i : answer){
//        cout<<i<<' ';
//    }
//}
