////
////  boj14391.cpp
////  boj2437
////
////  Created by 강명진 on 2021/06/06.
////
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int n,m;
//
//int board[5][5];
//int visited[5][5];
//int dx[4]={1,0};
//int dy[4]={0,1};
//int answer=-1;
//bool Check(int sx,int sy,int Size,int lr){
//    int x=sx;
//    int y=sy;
//    for (int index=0;index<Size;index++){
//        int nx=x+dx[lr];
//        int ny=y+dy[lr];
//        if (nx<0||nx>=n||ny<0||ny>=m)return false;
//        if (visited[nx][ny])return false;
//        x=nx;
//        y=ny;
//    }
//    return true;
//}
//int FillBoard(int sx,int sy,int Size,int lr,int mod){
//   
//    int x=sx;
//    int y=sy;
//    int Sum=board[sx][sy];
//    for (int index=0;index<Size;index++){
//        int nx=x+dx[lr];
//        int ny=y+dy[lr];
//        Sum*=10;
//        Sum+=board[nx][ny];
//        if (mod==0)visited[nx][ny]=1;
//        else visited[nx][ny]=0;
//        x=nx;
//        y=ny;
//    }
//    return Sum;
//}
//
//void go(int x,int y,int sum){
//    if (x==n-1&&y==m){
//        if (answer<sum){
//            answer=sum;
//        }
//        return;
//    }
//    if (y==m){
//        go(x+1,0,sum);
//        return;
//    }
//    if (visited[x][y]==true){
//        go(x,y+1,sum);
//        return;
//    }
//    for (int l =0;l<m;l++){
//        if (!Check(x,y,l,1))break;
//        int tmp=FillBoard(x,y,l,1,0);
//        go(x,y+1,sum+tmp);
//        FillBoard(x,y,l,1,1);
//    }
//    for (int l =0;l<n;l++){
//        if (!Check(x,y,l,0))break;
//        int tmp=FillBoard(x,y,l,0,0);
//        go(x,y+1,sum+tmp);
//        FillBoard(x,y,l,0,1);
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>m;
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j <m;j++){
//            char tmp;
//            cin>>tmp;
//            board[i][j]=tmp-'0';
//        }
//    }
//    go(0,0,0);
//    cout<<answer<<'\n';
//}
