////
////  boj11723.cpp
////  boj2437
////
////  Created by 강명진 on 2021/05/22.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    int s=0;
//    while (tc--){
//        string tmp;
//        cin>>tmp;
//        if (tmp=="add"){
//            int num;
//            cin>>num;
//            s|=(1<<num);
//        }
//        else if (tmp=="remove"){
//            int num;
//            cin>>num;
//            s&=~(1<<num);
//        }else if(tmp=="check"){
//            int num;
//            cin>>num;
//            if (s&(1<<num))cout<<1<<'\n';
//            else cout<<0<<'\n';
//        }else if (tmp=="toggle"){
//            int num;
//            cin>>num;
//            s^=(1<<num);
//        }else if (tmp=="all"){
//            s=(1<<21)-1;
//        }else if (tmp=="empty"){
//            s=0;
//        }
//    }
//}
