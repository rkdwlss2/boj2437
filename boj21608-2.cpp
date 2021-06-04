//
//  boj21608-2.cpp
//  boj2437
//
//  Created by 강명진 on 2021/06/04.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int board[401][401];
int Like[401][401];
vector<int> v;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int score[5]={0,1,10,100,1000};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for (int i = 0 ; i<n*n;i++){
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
        for (int j=0;j<4;j++){
            int tmp2;
            cin>>tmp2;
            Like[tmp][tmp2]=1;
        }
    }
    for (int i = 0 ;i<n*n;i++){
        int now=v[i];
        priority_queue<pair<pair<int,int>,pair<int,int>>> pq;
        for (int j = 0 ; j<n;j++){
            for (int k = 0 ; k<n;k++){
                int x=j;
                int y=k;
                int cnt=0;
                int cnt2=0;
                for (int dir=0;dir<4;dir++){
                    int nx=x+dx[dir];
                    int ny=y+dy[dir];
                    int next=board[nx][ny];
                    if (nx<0||nx>=n||ny<0||ny>=n)continue;
                    if (Like[now][next]!=0)cnt++;
                    if (board[nx][ny]==0)cnt2++;
                }
                pq.push({{cnt,cnt2},{-x,-y}});
            }
        }
        while(!pq.empty()){
            auto pos=pq.top();pq.pop();
            int posX=-pos.second.first;
            int posY=-pos.second.second;
            if (board[posX][posY])continue;
            else {
                board[posX][posY]=now;
                break;
            }
            
        }
        
    }
    int sum=0;
    for (int j = 0 ; j <n;j++){
        for (int k =0;k<n;k++){
            int cnt=0;
            int x=j;
            int y=k;
            int now=board[x][y];
            for (int dir = 0 ;dir<4;dir++){
                int nx=x+dx[dir];
                int ny=y+dy[dir];
                int next=board[nx][ny];
                if (nx<0||nx>=n||ny<0||ny>=n)continue;
                if (Like[now][next]!=0)cnt++;
            }
            sum+=score[cnt];
        }
    }
    
    cout<<sum<<'\n';
}
