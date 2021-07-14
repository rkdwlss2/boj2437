//
//  boj1676.cpp
//  boj2437
//
//  Created by 강명진 on 2021/07/14.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=0,b=0;
    while(n>0){
        int tmp=n;
        while(true){
            bool ok=false;
            if (tmp%2==0){
                tmp/=2;
                ok=true;
                a++;
            }
            if (tmp%5==0){
                tmp/=5;
                ok=true;
                b++;
            }
            if (!ok)break;
        }
        n--;
    }
    int answer=a;
    if (b<a)answer=b;
    cout<<answer<<'\n';
}
