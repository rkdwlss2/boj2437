//#include <iostream>
//#include <vector>
//using namespace std;
//
//int N,K,T;
//int A[201];
//bool upperBelt[101]; // 윗쪽 벨트의 로봇 존재 여부
//
//// 벨트 회전
//void rotateBelt(){
//    // 로봇 회전
//    for(int i=N-1;i>0;i--){
//        if(upperBelt[i]){
//            upperBelt[i+1]=true;
//            upperBelt[i]=false;
//        }
//    }
//    upperBelt[N] = false;
//
//    // 내구도 회전
//    int temp=A[2*N];
//    for(int i=2*N;i>1;i--)
//        A[i]=A[i-1];
//    A[1]=temp;
//}
//
//// 로봇 이동
//void moveRobot(){
//    for(int i=N-1;i>0;i--){
//        if(upperBelt[i] && !upperBelt[i+1] && A[i+1]>0){
//            upperBelt[i+1]=true;
//            upperBelt[i]=false;
//            A[i+1]--;
//        }
//    }
//    upperBelt[N]=false;
//}
//
//// 내구도 검사
//int countZeroA(){
//    int ret=0;
//    for(int i=1;i<=2*N;i++)
//        if(A[i]==0) ret++;
//    return ret;
//}
//
//int main(){
//    cin>>N>>K;
//    for(int i=1;i<=2*N;i++)
//        cin>>A[i];
//
//    T=1;
//    while(true){
//        rotateBelt();
//        moveRobot();
//        if(!upperBelt[1] && A[1]>0){
//            upperBelt[1]=true;
//            A[1]--;
//        }
//        if(countZeroA()>=K) break;
//        T++;
//    }
//
//    cout<<T;
//    return 0;
//}
