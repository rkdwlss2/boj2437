////
////  boj1068.cpp
////  boj2437
////
////  Created by 강명진 on 2021/08/30.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> graph[60];
//int n,Count=0,Erase,Root;
//int arr[60];
//bool visited[60];
//
//void dfs(int now){
//    if (visited[now])return;
//    visited[now]=true;
//    int cnt=0;
//    for (int i = 0 ; i<graph[now].size();i++){
//        int next=graph[now][i];
//        if (next==Erase)continue;
//        cnt++;
//        dfs(next);
//    }
//    if (cnt==0)Count++;
//}
//
//int main(){
//    ios::sync_with_stdio();
//    cin.tie(0);
//    cin>>n;
//    for (int i=0;i<n;i++){
//        int tmp;
//        cin>>tmp;
//        if (tmp==-1){
//            Root=i;
//            continue;
//        }
//        graph[tmp].push_back(i);
//    }
//    cin>>Erase;
//    if (Erase==Root){
//        cout<<0<<'\n';
//        exit(0);
//    }
//    dfs(Root);
//    cout<<Count<<'\n';
//}
//
