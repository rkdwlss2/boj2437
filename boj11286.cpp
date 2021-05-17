////
////  boj11286.cpp
////  boj2437
////
////  Created by 강명진 on 2021/05/16.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    priority_queue<pair<int,int>> pq;
//    while(n--){
//        int tmp;
//        cin>>tmp;
//        if (tmp==0){
//            if (pq.empty()){
//                cout<<0<<'\n';
//            }else{
//                cout<<-pq.top().second<<'\n';
//                pq.pop();
//            }
//        }else{
//            int absolute=tmp;
//            if (tmp<0)absolute=-tmp;
//            pq.push({-absolute,-tmp});
//        }
//        
//    }
//}
