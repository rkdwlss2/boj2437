////
////  boj11559.cpp
////  boj2437
////
////  Created by 강명진 on 2021/06/02.
////
//
//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//int board[12][6];
//char color[6]={'.','R','G','B','P','Y'};
//
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//int visited[12][6];
//bool bfs(int sx,int sy,int mod){
//    queue<pair<int,int>> q;
//    int fcolor=board[sx][sy];
//    bool CheckNum=false;
//    q.push({sx,sy});
//    visited[sx][sy]=1;
//    int Count=0;
//    while(!q.empty()){
//        auto now=q.front();
//        q.pop();
//        int x=now.first;
//        int y=now.second;
//        if (mod>0)board[x][y]=0;
//        Count++;
//        for (int dir=0;dir<4;dir++){
//            int nx=x+dx[dir];
//            int ny=y+dy[dir];
//            if (nx<0||nx>=12||ny<0||ny>=6)continue;
//            if (visited[nx][ny]>=1||fcolor!=board[nx][ny])continue;
//            visited[nx][ny]=visited[x][y]+1;
//            q.push({nx,ny});
//        }
//    }
//    if (Count>=4)CheckNum=true;
//    return CheckNum;
//}
//
//void Down(int col){
//    queue<int> q;
//    for (int i=11;i>=0;i--){
//        int now=board[i][col];
//        if (now!=0){
//            q.push(now);
//            board[i][col]=0;
//        }
//    }
//    for (int i=11;i>=0;i--){
//        if (q.empty())break;
//        int now=q.front();
//        q.pop();
//        board[i][col]=now;
//    }
//}
//
//void allDown(){
//    for (int i = 0;i<6;i++){
//        Down(i);
//    }
//}
//
//bool oneStep(){
//    bool CheckDown=false;
//    for (int i = 0 ; i<12;i++){
//        for (int j = 0 ; j<6;j++){
//            if (board[i][j]==0)continue;
//            memset(visited,0,sizeof(visited));
//            if (bfs(i,j,0)){
//                memset(visited,0,sizeof(visited));
//                bfs(i,j,board[i][j]);
//                CheckDown=true;
//            }
//        }
//    }
//    if (CheckDown)allDown();
//    return CheckDown;
//}
//
//void Solve(){
//    int cnt=0;
//    while(true){
//        if (oneStep())cnt++;
//        else break;
//    }
//    cout<<cnt<<'\n';
//}
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    for (int i = 0 ; i <12;i++){
//        for (int j = 0 ; j <6;j++){
//            char tmp;
//            cin>>tmp;
//            for (int k = 0 ; k <6;k++){
//                if (tmp==color[k])board[i][j]=k;
//            }
//        }
//    }
//    Solve();
//}
