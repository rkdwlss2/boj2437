////
////  proChusuck.cpp
////  boj2437
////
////  Created by 강명진 on 2021/08/21.
////
//
//
//#include <string>
//#include <vector>
//#include <sstream>
//#include <iostream>
//using namespace std;
//
//int v[2001][2][4];
//vector<pair<int,int>> secondV;
//
//void timeGet(string str,int index){
//    string hour,min,second,second2;
//    hour=str.substr(0,2);
//    min=str.substr(3,2);
//    second=str.substr(6,2);
//    second2=str.substr(9,3);
//    v[index][0][0]=atoi(hour.c_str());
//    v[index][0][1]=atoi(min.c_str());
//    v[index][0][2]=atoi(second.c_str());
//    v[index][0][3]=atoi(second2.c_str());
//}
//
//void copied(int* arr,int index){
//    for (int i = 0 ; i<4;i++){
//        v[index][1][i]=arr[i];
//    }
//}
//
//void timeMinus(int str,int index){
//    int arr[4];
//    int Plus=str%1000;
//    int Plus2=str/1000;
//    for (int i = 0 ; i <4;i++){
//        arr[i]=v[index][0][i];
//    }
//    if (arr[3]-Plus<0){
//        arr[3]=arr[3]-Plus+1000;
//        Plus=1+Plus2;
//    }else if (Plus2>0){
//        arr[3]=arr[3]-Plus;
//        Plus=Plus2;
//    }
//    else{
//        arr[3]-=Plus;
//        copied(arr,index);
//        return;
//    }
//    if (arr[2]-Plus<0){
//        arr[2]=arr[2]-Plus+60;
//        Plus=1;
//    }else{
//        arr[2]-=Plus;
//        copied(arr,index);
//        return;
//    }
//    if (arr[1]-Plus<0){
//        arr[1]=arr[1]-Plus+60;
//        Plus=1;
//    }else{
//        arr[1]-=Plus;
//        copied(arr,index);
//        return;
//    }
//    if (arr[0]-Plus<0){
//        arr[0]=0;
//    }else{
//        arr[0]-=Plus;
//        copied(arr,index);
//        return;
//    }
//    copied(arr,index);
//    
//}
//pair<int,int> makeC(string str){
//    bool Ok=false;
//    string f="";
//    string s="";
//    for (int i = 0;i<str.size();i++){
//        if (str[i]=='.'){
//            Ok=true;
//            continue;
//        }
//        if (str[i]=='s')break;
//        if (!Ok)f+=str[i];
//        else s+=str[i];
//    }
//    if (s.size()==1)s+="00";
//    else if (s.size()==2)s+='0';
//    return {atoi(f.c_str())*1000,atoi(s.c_str())};
//}
//
//int made(int* arr){
//    arr[1]+=arr[0]*60;
//    arr[2]+=arr[1]*60;
//    arr[3]+=arr[2]*1000;
//    return arr[3];
//}
//
//int solution(vector<string> lines) {
//    int answer = 0;
//    for (int i = 0 ; i <lines.size();i++){
//        stringstream ss(lines[i]);
//        string a,b,c;
//        ss>>a>>b>>c;
//        cout<<"this is c="<<c<<'\n';
//        pair<int,int> c1=makeC(c);
//
//        timeGet(b,i);
//        int tmpArr[4];
//        for (int j =0 ;j<4;j++){
//            tmpArr[j]=v[i][0][j];
//        }
//        int tmp=made(tmpArr);
//        int tmp2=tmp-(c1.first+c1.second)+1;
//        secondV.push_back({tmp2,tmp});
//    }
//    
////    for (int i = 0;i<lines.size();i++){
////        int startArr[4],lastArr[4],s,l;
////        for (int j = 0 ; j<4;j++){
////            startArr[j]=v[i][1][j];
////            lastArr[j]=v[i][0][j];
////        }
////        s=made(startArr)+1;
////        l=made(lastArr);
////        secondV.push_back({s,l});
////    }
//    for (int i = 0 ; i <secondV.size();i++){
//        bool Check[2001];
//        fill(Check,Check+2001,false);
//        bool CheckL[2001];
//        fill(CheckL,CheckL+2001,false);
//        bool Checkb[2001];
//        fill(Checkb,Checkb+2001,false);
//        bool CheckbL[2001];
//        fill(CheckbL,CheckbL+2001,false);
//        int s=secondV[i].first;
//        int sT=s+999;
//        int l=secondV[i].second;
//        int lT=l+999;
//        int cnt=0,lcnt=0;
//        int bcnt=0,blcnt=0;
//        for (int j = 0 ; j <secondV.size();j++){
//            if (sT<0)continue;
//            if (Check[j])continue;
//            int nowS=secondV[j].first;
//            int nowL=secondV[j].second;
//            if (nowS<=s&&s<=nowL){
//                cnt++;
//                Check[i]=true;
//            }else if(nowS<=sT&&sT<=nowL){
//                cnt++;
//                Check[i]=true;
//            }
//        }
//        for (int j = 0 ; j <secondV.size();j++){
//            if (lT<0)continue;
//            if (CheckL[j])continue;
//            int nowS=secondV[j].first;
//            int nowL=secondV[j].second;
//            if (nowS<=l&&l<=nowL){
//                lcnt++;
//                CheckL[i]=true;
//            }else if(nowS<=lT&&lT<=nowL){
//                lcnt++;
//                CheckL[i]=true;
//            }
//        }
//        if (cnt>answer)answer=cnt;
//        if (lcnt>answer)answer=lcnt;
//        if (bcnt>answer)answer=bcnt;
//        if (blcnt>answer)answer=blcnt;
//    }
//    return answer;
//}
//
//int main(){
//    vector<string> tmp={
//        "2016-09-15 01:00:04.002 2.0s", "2016-09-15 01:00:07.000 2s"
//   //     "2016-09-15 01:00:04.002 2.0s", "2016-09-15 01:00:07.000 2s"
////    "2016-09-15 20:59:57.421 0.351s",
////    "2016-09-15 20:59:58.233 1.181s",
////    "2016-09-15 20:59:58.299 0.8s",
////    "2016-09-15 20:59:58.688 1.041s",
////    "2016-09-15 20:59:59.591 1.412s",
////    "2016-09-15 21:00:00.464 1.466s",
////    "2016-09-15 21:00:00.741 1.581s",
////    "2016-09-15 21:00:00.748 2.31s",
////    "2016-09-15 21:00:00.966 0.381s",
////    "2016-09-15 21:00:02.066 2.62s"
//    };
//    cout<<solution(tmp);
//}
