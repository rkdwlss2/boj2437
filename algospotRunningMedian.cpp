////
////  algospotRunningMedian.cpp
////  boj2437
////
////  Created by 강명진 on 2021/09/18.
////
//
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//#define lli long long int
//#define MOD 20090711
//
//lli arr[200001];
//
//vector<lli> compareTree(lli one,lli two,lli tree){
//    vector<lli> a;
//    a.push_back(one);
//    a.push_back(two);
//    a.push_back(tree);
//    sort(a.begin(),a.end());
//    return a;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while(tc--){
//        lli n,a,b;
//        cin>>n>>a>>b;
//        arr[0]=1983;
//        for (lli i =1;i<n;i++){
//            arr[i]=((arr[i-1]*a)%MOD+b)%MOD;
//        }
//        priority_queue<lli> leftPq;
//        priority_queue<lli> rightPq;
//        lli Sum=arr[0];
//        leftPq.push(arr[0]);
//        if (n>=2){
//            leftPq.pop();
//            lli Big=arr[1],Small;
//            if (Big<arr[0]){
//                Big=arr[0];
//                Small=arr[1];
//            }else{
//                Small=arr[0];
//            }
//            Sum+=Small;
//            leftPq.push(Small);
//            rightPq.push(-Big);
//        }
//        for (lli i = 2;i<n;i++){
//            lli leftNum=leftPq.top();leftPq.pop();
//            lli rightNum=-rightPq.top();rightPq.pop();
//            lli now=arr[i];
//            vector<lli> tmpArr=compareTree(leftNum,rightNum,now);
//            leftPq.push(tmpArr[0]);
//            rightPq.push(-tmpArr[2]);
//            if (leftPq.size()==rightPq.size()){
//                leftPq.push(tmpArr[1]);
//            }else{
//                rightPq.push(-tmpArr[1]);
//            }
//            Sum=(Sum+leftPq.top())%MOD;
//        }
//        cout<<Sum%MOD<<'\n';
//    }
//    
//}
