////
////  bitMaskStable.cpp
////  boj2437
////
////  Created by 강명진 on 2021/06/06.
////
//
//#include <iostream>
//using namespace std;
//
//int n;
//const int MAXN=10000;
//int explodes[MAXN];
//
//bool isStable(int set){
//    for (int i = 0;i<n;++i){
//        if ((set&(1<<i))&&(set&explodes[i]))
//            return false;
//    }
//    return true;
//}
//
//int countStableSet(){
//    int ret=0;
//    for (int set=1;set<(1<<n);++set){
//        if (!isStable(set))continue;
//
//        bool canExtend=false;
//        for (int add=0;add<n;++add){
//            if ((set&(1<<add))==0&&(explodes[add]&set)==0){
//                canExtend=true;
//                break;
//            }
//        }
//        if (!canExtend){
//            ++ret;
//        }
//    }
//    return ret;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//}
