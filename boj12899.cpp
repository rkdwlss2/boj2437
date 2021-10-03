////
////  boj12899.cpp
////  boj2437
////
////  Created by 강명진 on 2021/09/21.
////
//
//#include <iostream>
//using namespace std;
//
//int arr[2000001];
//int tree[4*2000001];
//
//void update(int node,int left,int right,int index,int val){
//    if (index<left||index>right)return;
//    if (left==right){
//        tree[node]+=val;return;
//    }
//    update(2*node,left,(left+right)/2,index,val);
//    update(2*node+1,(left+right)/2+1,right,index,val);
//    tree[node]=tree[node*2]+tree[node*2+1];
//}
//
//int Kth(int node,int left,int right,int k){
//    if (left==right)return left;
//    else{
//        if (k<=tree[node*2])return Kth(node*2,left,(left+right)/2,k);
//        else return Kth(node*2+1,(left+right)/2+1,right,k-tree[node*2]);
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin>>n;
//    for (int i = 0 ; i <n;i++){
//        int x,y;
//        cin>>x>>y;
//        if (x==1){
//            update(1,1,2000002,y,1);
//        }else{
//            int pos=Kth(1, 1, 2000002, y);
//            update(1,1,2000002,pos,-1);
//            cout<<pos<<'\n';
//        }
//    }
//    
//}
