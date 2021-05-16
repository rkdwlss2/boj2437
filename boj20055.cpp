////
////  boj20055.cpp
////  boj2437
////
////  Created by 강명진 on 2021/05/16.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//int arr[101];
//int arr2[101];
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n,k;
//    cin>>n>>k;
//    for (int i = 0 ; i <n;i++){
//        cin>>arr[i];
//    }
//    for (int i = n-1 ; i>=0;i--){
//        cin>>arr2[i];
//    }
//    int num=0;
//    queue<int> q;
//    while(true){
//        num++;
//        int cnt=0;
//        for (int i = 0 ; i < n;i++){
//            if (arr[i]==0)cnt++;
//            if (arr2[i]==0)cnt++;
//        }
//        if (cnt==k){
//            cout<<num<<'\n';
//            break;
//        }
//        q.push(0);
//        
//    }
//}
