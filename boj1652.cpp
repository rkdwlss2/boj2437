////
////  boj1652.cpp
////  boj2437
////
////  Created by 강명진 on 2021/07/04.
////
//
//#include <iostream>
//using namespace std;
//
//bool board[2][101];
//
//int main(){
//    int n;
//    cin>>n;
//    for (int i = 0 ; i<n;i++){
//        for (int j = 0 ; j<n;j++){
//            char tmp;
//            cin>>tmp;
//            if (tmp=='X'){
//                board[1][i]=true;
//                board[0][j]=true;
//            }
//        }
//    }
//    int a=0;
//    int b=0;
//    for (int i = 0 ; i<n;i++){
//        if (board[0][i])a++;
//        if (board[1][i])b++;
//    }
//    cout<<a<<' '<<b<<'\n';
//}
