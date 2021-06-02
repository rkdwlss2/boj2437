////
////  boj20040.cpp
////  boj2437
////
////  Created by 강명진 on 2021/05/30.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> graph[500001];
//int n,m;
//int Parent[500001];
//bool visited[500001];
//int Find(int x){
//    if (x==Parent[x])return x;
//    return Parent[x]=Find(Parent[x]);
//}
//bool Union(int a,int b){
//    a=Find(a);
//    b=Find(b);
//    if (a==b) return true;
//    if (a>b)Parent[a]=b;
//    else Parent[b]=a;
//    return false;
//}
//
////bool dfs(int now,int first){
////    for (int i = 0 ; i < graph[now].size();i++){
////        int next=graph[now][i];
////        if (visited[next]==true&&now==first)return true;
////        if (visited[next]==true)continue;
////        visited[next]=true;
////        bool ok=dfs(next,first);
////        if (ok==true)return true;
////    }
////    return false;
////}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i =0;i<n;i++){
//        Parent[i]=i;
//    }
//    
//    for (int i = 0 ; i <m;i++){
//        int a,b;
//        cin>>a>>b;
//        graph[a].push_back(b);
//        graph[b].push_back(a);
//        if (Union(a,b)){
//            cout<<i+1<<'\n';
//            return 0;
//        }
////        fill(visited,visited+n+1,false);
////        visited[a]=true;
////        if (dfs(a,a)){
////            cout<<i+1<<'\n';
////            return 0;
////        }
//    }
//    cout<<0<<'\n';
//}
