////
////  boj2470.cpp
////  boj2437
////
////  Created by 강명진 on 2021/05/19.
////
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int n;
//int arr[100001];
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    for (int i = 0 ; i <n;i++){
//        cin>>arr[i];
//    }
//    sort(arr,arr+n);
//    int partial_sum=0;
//    int left=0;
//    int right=n-1;
//    int answer=2000000001;
//    int anleft=-1;
//    int anright=-1;
//    while(left<=right){
//        partial_sum=arr[right]-arr[left];
//        if (partial_sum<answer){
//            answer=partial_sum;
//            anleft=left;
//            anright=right;
//        }
//        if (partial_sum==0)break;
//        if (partial_sum>answer)right--;
//        else{
//            left++;
//        }
//    }
//    cout<<arr[anleft]<<' '<<arr[anright]<<'\n';
//}
