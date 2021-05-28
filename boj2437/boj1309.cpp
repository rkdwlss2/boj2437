////
////  boj1309.cpp
////  boj2437
////
////  Created by 강명진 on 2021/05/22.
////
//
//#include <iostream>
//#include <cstring>
//#define M 9901
//using namespace std;
//
//int cache[100001][3];
//
//int go(int index,int lr){
//    if (index==-1)return 0;
//    if (index==0)return 1;
//    int& ret=cache[index][lr];
//    if (ret!=-1)return ret;
//    ret=0;
//    if (lr==0)ret+=(go(index-1,0)%M+go(index-1,1)%M+go(index-1,2)%M)%M;
//    if (lr==1)ret+=(go(index-1,2)%M+go(index-1,0)%M)%M;
//    if (lr==2)ret+=(go(index-1,1)%M+go(index-1,0)%M)%M;
//    return ret%M;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    memset(cache,-1,sizeof(cache));
//    int n;
//    cin>>n;
//    cout<<(go(n-1,0)%M+go(n-1,1)%M+go(n-1,2)%M)%M<<'\n';
//}
