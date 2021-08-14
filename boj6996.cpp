//
//  boj6996.cpp
//  boj2437
//
//  Created by 강명진 on 2021/08/14.
//

#include <iostream>
#include <string>
using namespace std;

int alpha1[26];
int alpha2[26];

void ana(string str,int mod){
    for (int i = 0;i<str.size();i++){
        char tmp=str[i];
        int tmpInt=tmp-'a';
        if (mod==1){
            alpha1[tmpInt]++;
        }else{
            alpha2[tmpInt]++;
        }
    }
}

bool Compare(){
    bool Ok=true;
    for (int i =0;i<26;i++){
        if (alpha1[i]!=alpha2[i])Ok=false;
    }
    return Ok;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for (int i = 0 ; i < n;i++){
        fill(alpha1,alpha1+26,0);
        fill(alpha2,alpha2+26,0);
        string str1,str2;
        cin>>str1>>str2;
        ana(str1,1);
        ana(str2,2);
        cout<<str1<<" & "<<str2;
        if (Compare()){
            cout<<" are anagrams.\n";
        }else{
            cout<<" are NOT anagrams.\n";
        }
        
    }
}
