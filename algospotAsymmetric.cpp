////
////  algospotAsymmetric.cpp
////  boj2437
////
////  Created by 강명진 on 2021/05/30.
////
//
//#include <iostream>
//using namespace std;
//const int MOD =1000000007;
//int cache[101];
//int cache2[101];
//
//void precalc(){
//    cache[0]=cache[1]=1;
//    for (int i =2;i<=100;i++){
//        cache[i]=(cache[i-1]+cache[i-2])%MOD;
//    }
//}
//
//int tiling(int n){
//    return cache[n];
//}
//int asymmetric(int width){
//    if (width<=2)return 0;
//    int& ret=cache2[width];
//    if (ret!=-1)return ret;
//    ret=asymmetric(width-2)%MOD;
//    if (width>=4)ret=(ret+asymmetric(width-4))%MOD;
//    ret=(ret+tiling(width-3))%MOD;
//    ret=(ret+tiling(width-3))%MOD;
//    return ret;
//}
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    precalc();
//    fill(cache2,cache2+101,-1);
//    int cases;
//    cin>>cases;
//    for (int cc=0;cc<cases;cc++){
//        int n;
//        cin>>n;
//        cout<<asymmetric(n)<<'\n';
//    }
//}
