////
////  boj21608.cpp
////  boj2437
////
////  Created by 강명진 on 2021/05/11.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//int fLike[401][4];
//int n;
//int board[21][21];
//int dx[4]={0,0,1,-1};
//int dy[4]={1,-1,0,0};
//priority_queue<pair<int,pair<int,int>>> pq[5];
//bool NumCheck[401];
//int score[5]={0,1,10,100,1000};
//void Check(int x,int y){
//    bool arr[401];
//    for (int dir = 0 ; dir<4;dir++){
//        int nx=x+dx[dir];
//        int ny=y+dy[dir];
//        arr[board[nx][ny]]=true;
//    }
//    int big=0;
//    for (int i = 0 ; i<n*n;i++){
//        int sum=0;
//        for (int j = 0 ; j<4;j++){
//            if (arr[fLike[i][j]]==true){
//                sum++;
//            }
//        }
//        if (big<sum)big=sum;
//    }
//    for (int i = 0 ; i<n*n;i++){
//        int sum=0;
//        for (int j = 0 ; j<4;j++){
//            if (arr[fLike[i][j]]==true){
//                sum++;
//            }
//        }
//        if (big==sum&&NumCheck[i]==false)pq[big].push({-x,{-y,i}});
//    }
//   
//}
//void Find(){
//    for (int k = 0 ; k <5;k++){
//        while (!pq[k].empty())pq[k].pop();
//    }
//    for (int i = 0 ; i < n;i++){
//        for (int j = 0 ; j <n;j++){
//            if (board[i][j]==0){
//                Check(i, j);
//            }
//        }
//    }
//    for (int i = 4;i>=0;i--){
//        if (pq[i].size()>0){
//            auto now=pq[i].top();
//            int x=now.first;
//            int y=now.second.first;
//            int num=now.second.second;
//            board[x][y]=num;
//            NumCheck[num]=true;
//            break;
//        }
//    }
//    
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i<n*n;i++){
//        int a;
//        cin>>a;
//        for (int j = 0 ; j<4;j++){
//            cin>>fLike[a][j];
//        }
//    }
//    for (int i = 0 ; i<n*n;i++){
//        Find();
//    }
//    int answer=0;
//    for (int i = 0 ; i <n;i++){
//        for (int j = 0 ; j<n;j++){
//            int num=board[i][j];
//            int sum=0;
//            for (int dir = 0 ; dir<4;dir++){
//                int nx=i+dx[dir];
//                int ny=j+dy[dir];
//                int nNum=board[nx][ny];
//                for (int k =0;k<4;k++){
//                    if (fLike[num][k]==nNum)sum++;
//                }
//                
//            }
//            for (int k = 0 ; k<5;k++){
//                if (sum==k)answer+=score[k];
//            }
//        }
//    }
//    cout<<answer<<'\n';
//}
