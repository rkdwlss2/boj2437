////
////  boj2636.cpp
////  boj2437
////
////  Created by 강명진 on 2021/05/22.
////
//
//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//int n,m;
//int sum=0;
//int tSum=0;
//int board[101][101];
//int tboard[101][101];
//bool visited[101][101];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//void bfs(){
//    queue<pair<int,int>> q;
//    q.push({0,0});
//    visited[0][0]=true;
//    while(!q.empty()){
//        auto now=q.front();
//        q.pop();
//        int x=now.first;
//        int y=now.second;
//        for (int dir=0;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=m)continue;
//            if (visited[nx][ny]==true)continue;
//            visited[nx][ny]=true;
//            if (board[nx][ny]==1){
//                tSum++;
//                tboard[nx][ny]=0;
//            }else{
//                q.push({nx,ny});
//            }
//        }
//    }
//}
//
//void save(int mod){
//    for (int i=0;i<n;i++){
//        for (int j = 0 ; j<m;j++){
//            if (mod==0){
//                board[i][j]=tboard[i][j];
//            }else{
//                tboard[i][j]=board[i][j];
//            }
//        }
//    }
//}
//
//void makeTboard(){
//    for (int i =0 ; i<n;i++){
//        for (int j = 0 ;j<m;j++){
//            if (visited[i][j]==false&&tboard[i][j]==1)tboard[i][j]=1;
//            else tboard[i][j]=0;
//        }
//    }
//}
//void printV(){
//    for (int i=0;i<n;i++){
//        for (int j = 0 ; j<m;j++){
//            cout<<visited[i][j]<<' ';
//        }
//        cout<<'\n';
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//
//    for (int i = 0 ; i<n;i++){
//        for (int j = 0 ; j<m;j++){
//            cin>>board[i][j];
//            tboard[i][j]=board[i][j];
//            if (board[i][j]==1)sum++;
//        }
//    }
//    int answer2=0;
//    int answer=0;
//    while(true){
//        save(0);
//        answer++;
//        memset(visited,false,sizeof(visited));
//        tSum=0;
//        bfs();
//        sum-=tSum;
////        printV();
//        if (sum==0){
//            answer2=tSum;
//            break;
//        }
//        tSum=0;
//        save(1);
//        makeTboard();
//    }
//    cout<<answer<<'\n';
//    cout<<answer2<<'\n';
//}
//
