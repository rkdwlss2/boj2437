//
//  boj11365.cpp
//  boj2437
//
//  Created by 강명진 on 2021/06/28.
//

#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    while(true){
        getline(cin,str);
        if (str=="END")break;
        int n=str.size();
        for (int i = 0;i<str.size();i++){
            cout<<str[n-i-1];
        }
        cout<<'\n';
    }
}
