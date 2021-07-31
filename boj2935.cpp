//
//  boj2935.cpp
//  boj2437
//
//  Created by 강명진 on 2021/07/31.
//

#include <iostream>
#include <string>
using namespace std;
int getNum(string str){
    int cnt=0;
    for (int i = 0 ; i<str.size();i++){
        if (str[i]=='0')cnt++;
    }
    return cnt;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b,c;
    cin>>a>>b>>c;
    int num1=getNum(a);
    int num2=getNum(c);
    int cnt=num1+num2;
    if (b[0]=='*'){
        cout<<'1';
        while(cnt--){
            cout<<'0';
        }
        return 0;
    }else{
        if (num1==num2){
            cout<<'2';
            while(num1--){
                cout<<'0';
            }
            return 0;
        }else{
            cout<<'1';
            int minus=(num1>num2)?num1-num2:num2-num1;
            minus--;
            cnt--;
            int minus2=(num1>num2)?(num1-1-minus):(num2-1-minus);
            while(minus--){
                cout<<'0';
            }
            cout<<'1';
            while(minus2--){
                cout<<'0';
            }
        }
    }
}
