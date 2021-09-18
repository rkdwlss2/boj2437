////
////  algospotNerd2.cpp
////  boj2437
////
////  Created by 강명진 on 2021/09/04.
////
//
//#include <iostream>
//#include <map>
//using namespace std;
//
//map<int,int> coords;
//
//bool isDominated(int x,int y){
//    map<int,int>::iterator it =coords.lower_bound(x);
//    if (it==coords.end())return false;
//    return y<it->second;
//}
//
//void removeDominated(int x,int y){
//    map<int,int>::iterator it =coords.lower_bound(x);
//    if (it==coords.begin())return;
//    --it;
//    while(true){
//        if (it->second>y)break;
//        if (it==coords.begin()){
//            coords.erase(it);
//            break;
//        }
//        else{
//            map<int,int>::iterator jt=it;
//            jt--;
//            coords.erase(it);
//            it=jt;
//        }
//    }
//}
//
//int registered(int x,int y){
//    if (isDominated(x, y))return coords.size();
//    removeDominated(x, y);
//    coords[x]=y;
//    return coords.size();
//}
//
//int main(){
//    int tc;
//    cin>>tc;
//    while(tc--){
//        coords.clear();
//        int n,answer=0;
//        cin>>n;
//        for (int i = 0 ; i<n;i++){
//            int x,y;
//            cin>>x>>y;
//            answer+=registered(x, y);
//        }
//        cout<<answer<<'\n';
//    }
//}
