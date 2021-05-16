////
////  boj1202.cpp
////  boj2437
////
////  Created by 강명진 on 2021/05/05.
////
//
//#include <iostream>
//#include <queue>
//#include <algorithm>
//#define lli long long int
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    lli n,k;
//    cin>>n>>k;
//    vector<pair<lli,lli>> v;
//    vector<lli> v2;
//    for (lli i = 0 ;i<n;i++){
//        lli a,b;
//        cin>>a>>b;
//        v.push_back({a,b});
//    }
//    for (lli i = 0 ; i <k;i++){
//        lli a;
//        cin>>a;
//        v2.push_back(a);
//    }
//    sort(v.begin(),v.end());
//    sort(v2.begin(),v2.end());
//    lli sum=0;
//    lli index=0;
//    priority_queue<lli> tmpq;
//    for (lli i = 0 ; i <k;i++){
//        while(index<n&&v[index].first<=v2[i]){
//            tmpq.push(v[index].second);
//            index++;
//        }
//        if (!tmpq.empty()){
//            sum+=tmpq.top();
//            tmpq.pop();
//        }
//        
//    }
//    cout<<sum<<'\n';
//}
