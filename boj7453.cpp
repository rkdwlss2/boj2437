////
////  boj7453.cpp
////  boj2437
////
////  Created by 강명진 on 2021/10/07.
////
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//long long a[4001],b[4001],c[4001],d[4001],ab[4001*4001],cd[4001*4001],n;
//
//
//long long Lower_bound(long long M){
//    long long left=0;
//    long long right=n*n;
//    while(left<right){
//        long long mid=(left+right)/2;
//        if (cd[mid]<M){
//            left=mid+1;
//        }else{
//            right=mid;
//        }
//    }
//    return left;
//}
//
//long long Upper_bound(long long M){
//    long long left=0;
//    long long right=n*n;
//    while(left<right){
//        long long mid=(left+right)/2;
//        if (cd[mid]<=M){
//            left=mid+1;
//        }else{
//            right=mid;
//        }
//    }
//    return left;
//}
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (long long i = 0 ; i<n;i++){
//        cin>>a[i]>>b[i]>>c[i]>>d[i];
//    }
//    long long index=0;
//    for (long long i = 0 ; i <n;i++){
//        for (long long j = 0;j<n;j++){
//            ab[index]=a[i]+b[j];
//            index++;
//        }
//    }
//    index=0;
//    for (long long i = 0 ; i <n;i++){
//        for (long long j = 0;j<n;j++){
//            cd[index]=c[i]+d[j];
//            index++;
//        }
//    }
//    sort(cd,cd+n*n);
//    sort(ab,ab+n*n);
//    long long sum=0;
//    for (int i = 0 ; i<n*n;i++){
//        long long now=ab[i];
//        sum+=Upper_bound(-now)-Lower_bound(-now);
//    }
//    cout<<sum<<'\n';
//}
