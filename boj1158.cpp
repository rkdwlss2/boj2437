////
////  boj1158.cpp
////  boj2437
////
////  Created by 강명진 on 2021/06/06.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//int n,k;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>k;
//    queue<int> q;
//    for (int i = 1 ; i <=n;i++){
//        q.push(i);
//    }
//    cout<<'<';
//    for (int i = 0;i<n;i++){
//        int tmp=k;
//        int now=0;
//        while(tmp--){
//            now=q.front();
//            q.pop();
//            if (tmp!=0){
//                q.push(now);
//            }
//        }
//        cout<<now;
//        if (i!=n-1)cout<<", ";
//    }
//    cout<<'>';
//}
