//
//  boj1976.cpp
//  boj2437
//
//  Created by 강명진 on 2021/05/28.
//

#include <iostream>
#include <vector>
using namespace std;
int n,m;

int graph[201][201];

int arr[1001];

int parent[201];

int findParent(int now){
    if (parent[now]==now)return now;
    return parent[now]=findParent(parent[now]);
}

void Union(int a,int b){
    a=findParent(a);
    b=findParent(b);
    if (b>a)parent[b]=a;
    else parent[a]=b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    cin>>m;
    for (int i = 1 ; i <=n;i++){
        parent[i]=i;
    }
    for (int i = 1 ; i <= n;i++){
        for (int j = 1 ; j <=n;j++){
            int tmp;
            cin>>tmp;
            if (tmp==1){
                Union(i,j);
            }
        }
    }
    bool ok=false;
    int prev=-1;
    for (int i = 0 ; i < m;i++){
        int tmp;
        cin>>tmp;
        int ans=findParent(tmp);
        if (i!=0&&prev!=ans){
            ok=true;
            break;
        }
        prev=ans;
    }
    if (ok==true){
        cout<<"NO"<<'\n';
    }else{
        cout<<"YES"<<'\n';
    }
}
