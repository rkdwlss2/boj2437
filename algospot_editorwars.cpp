////
////  algospot_editorwars.cpp
////  boj2437
////
////  Created by 강명진 on 2021/09/19.
////
//
//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//long long n,m;
//vector<long long> Parent;
//vector<long long> Rank;
//vector<long long> Size;
//vector<long long> enemy;
//
//long long makeParent(long long index){
//    if (Parent[index]==index)return index;
//    return Parent[index]=makeParent(Parent[index]);
//}
//
//long long Union(long long a,long long b){
//    if (a==-1||b==-1)return max(a,b);
//    a=makeParent(a);b=makeParent(b);
//    if (a==b)return a;
//    if (Rank[a]>Rank[b])swap(a,b);
//    if (Rank[a]==Rank[b])Rank[b]++;
//    Parent[a]=b;
//    Size[b]+=Size[a];
//    return b;
//}
//
//
//bool dis(long long u,long long v){
//    u=makeParent(u);v=makeParent(v);//루트 찾기
//    if (u==v)return false;//dis한게 같은 집합이면 모순이라 false리턴
//    long long a=Union(u,enemy[v]), b=Union(v,enemy[u]);
//    enemy[a]=b; enemy[b]=a;
//    return true;
//}
//
//bool ack(long long u,long long v){
//    u=makeParent(u);v=makeParent(v);
//    if (enemy[u]==v)return false;
//    long long a=Union(u,v),b=Union(enemy[u],enemy[v]);//u가 v와 같은 뜻이라고 이야기 할떼 u,v는 같은 집합 적들 끼리도 같은 집합
//    enemy[a]=b;//
//    if (b!=-1)enemy[b]=a;//???
//    return true;
//}
//
//long long maxParty(){
//    long long ret=0;
//    for (long long node =0;node<n;++node){
//        if (Parent[node]==node){
//            long long ene=enemy[node];
//            if (ene>node)continue;
//            long long mySize=Size[node];
//            long long enemySize=(ene==-1?0:Size[ene]);
//            ret+=max(mySize,enemySize);
//        }
//    }
//    return ret;
//}
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    long long tc;
//    cin>>tc;
//    while(tc--){
//        bool Ok=false;
//        cin>>n>>m;
//        vector<long long> a(n);
//        vector<long long> b(n,0);
//        vector<long long> c(n,-1);
//        vector<long long> d(n,1);
//        Parent=a;
//        Rank=b;
//        Size=d;
//        enemy=c;
//        for (long long i = 0 ; i <n;i++){
//            Parent[i]=i;
//        }
//        int num=-1;
//        for (int i =0 ; i<m;i++){
//            string str;
//            cin>>str;
//            long long a,b;
//            cin>>a>>b;
//            if (Ok)continue;
//            if (str=="ACK"){
//                if (!ack(a,b)){
//
//                    Ok=true;
//                    num=i+1;
//                }
//            }else{
//                if (!dis(a,b)){
//                    Ok=true;
//                    num=i+1;
//                }
//            }
//        }
//        if (!Ok){
//            cout<<"MAX PARTY SIZE IS "<<maxParty()<<'\n';
//        }else{
//            cout<<"CONTRADICTION AT "<<num<<'\n';
//        }
//
//
//
//    }
//}
