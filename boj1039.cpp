////
////  boj1039.cpp
////  boj2437
////
////  Created by 강명진 on 2021/07/16.
////
//
//#include <iostream>
//using namespace std;
//int n,k;
//int arr[8];
//int Big=-1;
//int Size=0;
//void Swap(int i,int j){
//    int tmp=arr[i];
//    arr[i]=arr[j];
//    arr[j]=tmp;
//}
//
//int getNum(){
//    int answer=0;
//    for (int i = Size-1 ; i>=0;i--){
//        answer*=10;
//        answer+=arr[i];
//    }
//    return answer;
//}
//
//void go(int index){
//    if (index==k){
//        int now=getNum();
//        if (now>Big)Big=now;
//        return;
//    }
//    for (int i = 0 ; i < Size;i++){
//        for (int j = i+1 ; j <Size;j++){
//            Swap(i,j);
//            if (arr[Size-1]==0){
//                Swap(i,j);
//                continue;
//            }
//            go(index+1);
//            Swap(i,j);
//        }
//    }
//}
//
//void CntSize(int Num){
//    while(Num>0){
//        Size++;
//        Num/=10;
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n>>k;
//    CntSize(n);
//    int tmp=n;
//    for (int i = 0 ; i < Size;i++){
//        int now=tmp%10;
//        arr[i]=now;
//        tmp/=10;
//    }
//    go(0);
//    cout<<Big<<'\n';
//}
