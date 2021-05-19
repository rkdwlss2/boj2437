////
////  boj2529.cpp
////  boj2437
////
////  Created by 강명진 on 2021/05/19.
////
//
//#include <iostream>
//#include <vector>
//#define lli long long int
//using namespace std;
//lli n;
//lli arr[10];
//lli small=9876543211;
//lli big=-1;
//vector<lli> v;
//vector<lli> bigv;
//vector<lli> smallv;
//bool visited[10];
//
//void go(lli index){
//    if (index==n+1){
//        lli ten=1;
//        lli answer=0;
//        for (lli i=v.size()-1;i>=0;i--){
//            answer+=v[i]*ten;
//            ten*=10;
//        }
//        for (lli i=0;i<n;i++){
//            lli left=v[i];
//            lli right=v[i+1];
//            if (arr[i]==1&&left<right)continue;
//            else if (arr[i]==2&&left>right)continue;
//            else return;
//        }
//        if (answer>big){
//            big=answer;
//            bigv=v;
//        }
//        if (answer<small){
//            small=answer;
//            smallv=v;
//        }
//        return;
//    }
//    for (lli i = 0 ; i<=9;i++){
//        if (visited[i]==true)continue;
//        visited[i]=true;
//        v.push_back(i);
//        go(index+1);
//        v.pop_back();
//        visited[i]=false;
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    
//    cin>>n;
//    for (lli i=0;i<n;i++){
//        char tmp;
//        cin>>tmp;
//        if (tmp=='<')arr[i]=1;
//        else arr[i]=2;
//    }
//    go(0);
//    for (lli i = 0;i<bigv.size();i++){
//        cout<<bigv[i];
//    }cout<<'\n';
//    for (lli i = 0;i<smallv.size();i++){
//        cout<<smallv[i];
//    }cout<<'\n';
//}
