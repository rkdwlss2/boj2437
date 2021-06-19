//
//  boj15986.cpp
//  boj2437
//
//  Created by 강명진 on 2021/06/19.
//

#include <iostream>
#define mod 1000000009
#define lli long long int
using namespace std;

lli n;
lli cache[3000001];
lli go(lli sum){
    if (sum==0)return 1;
    if (sum<0)return 0;
    lli& ret=cache[sum];
    if (ret!=-1)return ret;
    ret =0;
    ret+=go(sum-1)%mod;
    ret+=go(sum-2)%mod;
    ret+=go(sum-3)%mod;
    return ret%mod;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    fill(cache,cache+3000001,-1);
    for (lli i = 0 ;i<n;i++){
        lli tmp;
        cin>>tmp;
        cout<<go(tmp)%mod<<'\n';
    }
    
}
