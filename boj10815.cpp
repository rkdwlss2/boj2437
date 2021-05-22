////
////  boj10815.cpp
////  boj2437
////
////  Created by 강명진 on 2021/05/19.
////
//
//#include <iostream>
//using namespace std;
//int n,m;
//int a[500000];
//int b[500000];
//int binary_search(int num){
//    int l=0;
//    int r=n-1;
//    while(l<=r){
//        int mid=(l+r)/2;
//        if (a[mid]==num){
//            return 1;
//        }else if (a[mid]>num){
//            r=mid-1;
//        }else{
//            l=mid+1;
//        }
//    }
//    return 0;
//}
//void merge(int start,int end){
//    int mid=(start+end)/2;
//    int i = start,j=mid+1,k=0;
//    while (i<=mid&&j<=end){
//        if (a[i]<=a[j])b[k++]=a[i++];
//        else b[k++]=a[j++];
//    }
//    while (i<=mid)b[k++]=a[i++];
//    while (j<=end)b[k++]=a[j++];
//    for (int i=start;i<=end;i++){
//        a[i]=b[i-start];
//    }
//
//}
//void mergesort(int start,int end){
//    if (start==end)return;
//    int mid=(start+end)/2;
//    mergesort(start,mid);
//    mergesort(mid+1,end);
//    merge(start,end);
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i<n;i++){
//        cin>>a[i];
//    }
//    mergesort(0,n-1);
//    cin>>m;
//    while(m--){
//        int num;
//        cin>>num;
//        cout<<binary_search(num)<<' ';
//    }cout<<'\n';
//}
