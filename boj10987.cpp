//
//  boj10987.cpp
//  boj2437
//
//  Created by 강명진 on 2021/07/04.
//

#include <iostream>
#include <string>
using namespace std;
char arr[5]={'a','e','i','o','u'};
int main(){
    string str;
    cin>>str;
    int num=0;
    for (int i = 0 ; i <str.size();i++){
        for (int j = 0 ; j <5;j++){
            if (str[i]==arr[j])num++;
        }
        
    }
    cout<<num<<'\n';
}
