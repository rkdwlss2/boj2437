////
////  boj10448.cpp
////  boj2437
////
////  Created by 강명진 on 2021/07/25.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int tmp;
//int can[47];
//vector<int> v;
//bool go(int index){
//    if (index==3){
//        int sum=v[0]+v[1]+v[2];
//        if (sum==tmp) return true;
//        return false;
//    }
//    bool ok=false;
//    for (int i =1;i<=46;i++){
//        v.push_back(can[i]);
//        if (go(index+1))ok=true;
//        v.pop_back();
//    }
//    return ok;
//}
//
//int main(){
//    int n;
//    cin>>n;
//    for (int i = 1 ;i<47;i++){
//        can[i]=(i*(i+1))/2;
//    }
//    
//    while(n--){
//        
//        cin>>tmp;
//        if (go(0))cout<<1<<'\n';
//        else cout<<0<<'\n';
//    }
//}
