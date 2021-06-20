//
//  boj7785.cpp
//  boj2437
//
//  Created by 강명진 on 2021/06/20.
//

#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

unordered_map<string,int> um;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for (int i = 0 ;i<n;i++){
        string str,el;
        cin>>str>>el;
        if (el=="enter")um.insert({str,1});
        else {
            um.erase(str);
        }
    }
    vector<string> v;
    for (auto i : um){
        v.push_back(i.first);
    }
    sort(v.begin(),v.end());
    for (int i = v.size()-1 ; i >=0;i--){
        cout<<v[i]<<'\n';
    }
}
