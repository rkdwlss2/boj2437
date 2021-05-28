////
////  boj1107.cpp
////  boj2437
////
////  Created by 강명진 on 2021/05/23.
////
//
//#include <iostream>
//using namespace std;
//int Last=7;
//int n;
//int len=0;
//bool num[10];
//int ans=0;
//int ans1;
//int chNum=100;
//int realans=-1;
//void go(int index){
//    if (index>0&&index<=7){
//        int between=(ans>n)?ans-n+index:n-ans+index;
//        if (between<ans1)ans1=between;
//    }
//    if (index==7)return;
//    for (int i = 0 ; i<10;i++){
//        if (num[i]==true)continue;
//        ans*=10;
//        ans+=i;
//        go(index+1);
//        ans-=i;
//        ans/=10;
//    }
//    
//}
//
//void calLen(){
//    int tmp=n;
//    while(tmp>0){
//        tmp/=10;
//        len++;
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin>>n;
//    int m;
//    cin>>m;
//    for (int i = 0 ; i <m;i++){
//        int tmp;
//        cin>>tmp;
//        num[tmp]=true;
//    }
//    calLen();
//    ans1=(chNum>n)?chNum-n:n-chNum;
//    if (m!=10){
//        go(0);
//    }
//    
//    cout<<ans1<<'\n';
//}
