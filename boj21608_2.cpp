////
////  boj21608_2.cpp
////  boj2437
////
////  Created by 강명진 on 2021/05/30.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//int n;
//int board[21][21];
//
//bool Like[401][401];
//int Like2[401][4];
//priority_queue<pair<pair<pair<int,int>,pair<int,int>>,int>> pq;
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//int score[5]={0,1,10,100,1000};
//pair<int,int> Check1(int x,int y,int nm){
//    int cnt=0;
//    int cnt2=0;
//    for (int dir=0;dir<4;dir++){
//        int nx=x+dx[dir];
//        int ny=y+dy[dir];
//        if (nx<0||nx>=n||ny<0||ny>=n)continue;
//        int next=board[nx][ny];
//        if (Like[nm][next])cnt++;
//        if (next==0)cnt2++;
//    }
//    return {cnt,cnt2};
//}
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin>>n;
//    for (int i = 0;i<n*n;i++){
//        int num=0;
//        cin>>num;
//        for (int j=0;j<4;j++){
//            int a;
//            cin>>a;
//            Like[num][a]=true;
//            Like2[num][j]=a;
//        }
//    }
//    for (int index=0;index<n*n;index++){
//        for (int i = 0;i<n;i++){
//            for (int j = 0 ; j<n;j++){
//                for (int k = 0 ;k<n*n;k++){
//                    pair<int,int> aa=Check1(i,j,k);
//                    pq.push({{{aa.first,aa.second},{-i,-j}},k});
//                }
//            }
//        }
//        auto pqTop=pq.top();
//        int pqNum=pqTop.second;
//        int pqX=-pqTop.first.second.first;
//        int pqY=-pqTop.first.second.second;
//        board[pqX][pqY]=pqNum;
//        while(!pq.empty()){
//            pq.pop();
//        }
//    }
//    int sum=0;
//    for (int i = 0;i<n;i++){
//        for (int j = 0 ; j <n;j++){
//            int now=board[i][j];
//            int sum1=0;
//            for (int k = 0 ; k<4;k++){
//                int nx=i+dx[k];
//                int ny=j+dy[k];
//                if (nx<0||nx>=n||ny<0||ny>=n)continue;
//                int next=board[nx][ny];
//                if (next==Like2[now][k])sum1++;
//            }
//            sum+=score[sum1];
//        }
//    }
//    cout<<sum<<'\n';
//}
