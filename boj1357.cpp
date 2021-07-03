////
////  boj1357.cpp
////  boj2437
////
////  Created by 강명진 on 2021/06/29.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//string Reverse(string tmp){
//    string tt;
//    for (int i = tmp.size()-1 ; i>=0;i--){
//        tt+=tmp[i];
//    }
//    return tt;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    string a,b;
//    cin>>a>>b;
//    a=Reverse(a);
//    b=Reverse(b);
//    int a1=atoi(a.c_str());
//    int b1=atoi(b.c_str());
//    a1=a1+b1;
//    string answer;
//    while(a1>0){
//        answer+=(a1%10+'0');
//        a1/=10;
//    }
//    cout<<atoi(answer.c_str())<<'\n';
//}
