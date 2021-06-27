//
//  boj2638.cpp
//  boj2437
//
//  Created by 강명진 on 2021/06/27.
//

#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int n,m;
int board[101][101];
int tBoard[101][101];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

bool visited[101][101];

void bfs(){
    queue<pair<int,int>> q;
    q.push({0,0});
    visited[0][0]=true;
    while(!q.empty()){
        auto now=q.front();
        q.pop();
        int x=now.first;
        int y=now.second;
        for (int dir=0;dir<4;dir++){
            int nx=x+dx[dir];
            int ny=y+dy[dir];
            if (nx<0||nx>=n||ny<0||ny>=m)continue;
            if (board[nx][ny]==1||visited[nx][ny])continue;
            visited[nx][ny]=true;
            q.push({nx,ny});
        }
    }
}
bool check(){
    bool ch=false;
    for (int i = 0 ; i <n;i++){
        for (int j = 0 ;j<m;j++){
            if (board[i][j]==1)return ch;
        }
    }
    return true;
}

bool chTwo(int x,int y){
    int cnt=0;
    for (int dir = 0 ; dir<4;dir++){
        int nx=x+dx[dir];
        int ny=y+dy[dir];
        if (nx<0||nx>=n||ny<0||ny>=m)continue;
        if (board[nx][ny]==0&&visited[nx][ny]==true)cnt++;
    }
    if (cnt>=2)return true;
    else return false;
}
void SaveBoard(int mod){
    for (int i = 0 ; i <n;i++){
        for (int j = 0 ; j <m;j++){
            if (mod==0){
                tBoard[i][j]=board[i][j];
            }else if (mod==1){
                board[i][j]=tBoard[i][j];
            }else if (mod==2){
                board[i][j]=0;
            }else{
                tBoard[i][j]=0;
            }
        }
    }
}

void checkAll(){
    for (int i= 0;i<n;i++){
        for (int j = 0 ;j<m;j++){
            if (!chTwo(i,j)&&board[i][j]==1){
                tBoard[i][j]=board[i][j];
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for (int i = 0 ; i<n;i++){
        for (int j = 0; j<m;j++){
            cin>>board[i][j];
        }
    }
    int index=0;
    while(true){
        memset(visited,false,sizeof(visited));
        bfs();
        SaveBoard(3);
        checkAll();
        if (check())break;
        SaveBoard(2);
        SaveBoard(1);
        index++;
    }
    cout<<index<<'\n';
}
