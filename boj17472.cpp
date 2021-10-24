////
////  boj17472.cpp
////  boj2437
////
////  Created by 강명진 on 2021/10/23.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//int n,m;
//int board[11][11];
//
//int color[11][11];
//
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//
//void bfs(int sx,int sy,int num){
//    queue<pair<int,int>> q;
//    q.push({sx,sy});
//    if (color[sx][sy]!=0&&color[sx][sy]!=num){
//        return;
//    }
//    color[sx][sy]=num;
//    while(!q.empty()){
//        auto now = q.front();
//        int x=now.first;
//        int y=now.second;
//        for (int dir = 0 ;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=m)continue;
//            if (color[nx][ny]==0)continue;
//            color[nx][ny]=num;
//            q.push({nx,ny});
//        }
//    }
//}
//
//int main(){
//    cin>>n>>m;
//    for (int i = 0 ; i<n;i++){
//        for (int j = 0 ; j<m;j++){
//            cin>>board[i][j];
//        }
//    }
//    int num=0;
//    for (int i = 0 ; i<n;i++){
//        for (int j = 0 ; j <m;j++){
//            if (color[i][j]>0||board[i][j]==0)continue;
//            bfs(i,j,++num);
//        }
//    }
//    for (int i = 0 ; i<n;i++){
//        for (int j = 0 ; j<m;j++){
//            cout<<color[i][j]<<' ';
//        }
//        cout<<'\n';
//    }
//}
