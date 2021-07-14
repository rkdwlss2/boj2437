////
////  boj9375.cpp
////  boj2437
////
////  Created by 강명진 on 2021/07/13.
////
//
//#include <iostream>
//#include <unordered_map>
//#include <string>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while(tc--){
//        int n;
//        cin>>n;
//        if (n==0){
//            cout<<0<<'\n';
//            continue;
//        }
//        unordered_map<string,int> um;
//        for (int i = 0 ; i <n;i++){
//            string a,b;
//            cin>>a>>b;
//            if (um.count(b)>0){
//                um[b]++;
//            }
//            else{
//                um.insert({b,1});
//            }
//        }
//        int Sum=1;
//        for (auto i : um){
//            Sum*=(i.second+1);
//        }
//        cout<<Sum-1<<'\n';
//    }
//}
