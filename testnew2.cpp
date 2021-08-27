////
////  testnew2.cpp
////  boj2437
////
////  Created by 강명진 on 2021/08/14.
////
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//bool isOk(string str){
//    bool Ok=true;
//    for (int i = 0 ; i<str.size();i++){
//        if ((str[i]>='0'&&str[i]<='9')||str[i]==','){
//            continue;
//        }else{
//            Ok=false;
//            return Ok;
//        }
//    }
//    return Ok;
//}
//bool findZero(string str){
//    if (str.size()==1&&str[0]=='0')return true;
//    if (str[0]=='0')return false;
//    return true;
//}
//bool findComma(string str){
//    bool Ok=true;
//    for (int i = 0 ; i<str.size();i++){
//        if (str[i]==',')return false;
//    }
//    return Ok;
//}
//bool isNum(char a){
//    return a>='0'&&a<='9';
//}
//bool isComma(char a){
//    return a==',';
//}
//
//bool isReal(string str){
//    int strN=str.size();
//    int index=1;
//    
//    while(strN-index>=0){
//        char now=str[strN-index];
//        if (index%4==0){
//            if (!isComma(now))return false;
//        }
//        else{
//            if (!isNum(now))return false;
//        }
//        index++;
//    }
//    return true;
//}
//
//bool isLeftRight(string str){
//    if (str[0]==','||str[str.size()-1]==',')return false;
//    return true;
//}
//
//bool solution(string amountText) {
//    bool answer = true;
//    if (!isOk(amountText))return false;
//    if (!findZero(amountText))return false;
//    if (findComma(amountText))return true;
//    if (!isReal(amountText))return false;
//    if (!isLeftRight(amountText))return false;
//    return answer;
//}
//
//int main(){
//    string test="24,999,99";
//    if (solution(test)){
//        cout<<"true"<<'\n';
//    }else{
//        cout<<"false"<<'\n';
//    }
//}
//
