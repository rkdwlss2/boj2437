////
////  boj16932.cpp
////  boj2437
////
////  Created by 강명진 on 2021/06/04.
////
//
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//int n,m;
//int answer=-1;
//int board[1001][1001];
//int boardColor[1001][1001];
//int boardSize[10000001];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//int visited[1001][1001];
//bool BC[10000001];
//int bfs(int sx,int sy,int color){
//    queue<pair<int,int>> q;
//    q.push({sx,sy});
//    int cnt=1;
//    visited[sx][sy]=1;
//    boardColor[sx][sy]=color;
//    while(!q.empty()){
//        auto now=q.front();q.pop();
//        int x=now.first;
//        int y=now.second;
//        for (int dir=0;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=n||ny<0||ny>=m)continue;
//            if (visited[nx][ny]>0||board[nx][ny]==0)continue;
//            visited[nx][ny]=visited[x][y]+1;
//            boardColor[nx][ny]=color;
//            cnt++;
//            q.push({nx,ny});
//        }
//    }
//    return cnt;
//}
//
////void Choice(int x,int y,bool choi){
////    if (x>=n-1&&y>=m){
////        return;
////    }
////    if (y==m){
////        Choice(x+1,0,choi);
////        return;
////    }
////    int& now=board[x][y];
////    if(now==0&&choi==false){
////        now=1;
////        choi=true;
////
////        fill(BC,BC+1000001,false);
////        int Sum=0;
////        for (int dir=0;dir<4;dir++){
////            int nx=x+dx[dir];
////            int ny=y+dy[dir];
////            int nowColor=boardColor[nx][ny];
////            if (BC[nowColor]==true)continue;
////            BC[nowColor]=true;
////            Sum+=boardSize[nowColor];
////        }
////        Sum++;
////        if (answer<Sum)answer=Sum;
////        choi=false;
////        now=0;
////    }
////    Choice(x,y+1,choi);
////}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i = 0 ; i <n;i++){
//        for (int j = 0 ; j<m;j++){
//            cin>>board[i][j];
//        }
//    }
//    int cc=0;
//    for (int i = 0 ; i <n;i++){
//        for (int j = 0 ; j<m;j++){
//            if (board[i][j]==1&&visited[i][j]==0){
//                int tmp=bfs(i,j,++cc);
//                boardSize[cc]=tmp;
//            }
//        }
//    }
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j <m;j++){
//            if (board[i][j]==0){
//                board[i][j]=1;
//
//                int save[4];
//                int Sum=0;
//                for (int dir=0;dir<4;dir++){
//                    int nx=i+dx[dir];
//                    int ny=j+dy[dir];
//                    int nowColor=boardColor[nx][ny];
//                    if (BC[nowColor]==true)continue;
//                    BC[nowColor]=true;
//                    save[dir]=nowColor;
//                    Sum+=boardSize[nowColor];
//                }
//                for (int dir=0;dir<4;dir++){
//                    BC[save[dir]]=false;
//                }
//                Sum++;
//                if (answer<Sum)answer=Sum;
//
//                board[i][j]=0;
//            }
//        }
//    }
//
////    Choice(0,0,false);
//    cout<<answer<<'\n';
//}
