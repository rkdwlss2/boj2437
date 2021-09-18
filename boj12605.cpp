////
////  boj12605.cpp
////  boj2437
////
////  Created by 강명진 on 2021/08/27.
////
//
//#include <string>
//#include <sstream>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(){
//    int n;
//    cin>>n;
//    for (int i = 0 ; i<=n;i++){
//        string str;
//        getline(cin,str);
//        if (i==0)continue;
//        vector<string> v;
//        string tmp="";
//        for (int i = 0 ;i<str.size();i++){
//            if (str[i]==' '){
//                v.push_back(tmp);
//                tmp="";
//            }else{
//                tmp+=str[i];
//            }
//        }
//        if (tmp!=""){
//            v.push_back(tmp);
//        }
//        cout<<"Case #"<<i<<": ";
//        for (int i =v.size()-1;i>=0;i--){
//            cout<<v[i]<<' ';
//        }
//        cout<<'\n';
//    }
//}
