//
//  boj7469.cpp
//  boj2437
//
//  Created by 강명진 on 2021/10/24.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int S = 1e6;
int n, m;
int arr[S];
int sorted[S];
vector<int> Data[S*2];

void update(int bucket, int node, int start, int end, int x){
    if(node<start || end<node) return;
    Data[bucket].push_back(x);
    if(start != end){
        update(bucket*2, node, start, (start+end)/2, x);
        update(bucket*2+1, node, (start+end)/2+1, end, x);
    }
}

int get(int bucket, int start, int end, int left, int right, int x){
    if(left>end || right<start) return 0;
    if(left<=start && end<=right) return upper_bound(Data[bucket].begin(), Data[bucket].end(), x) - Data[bucket].begin();
    return get(bucket*2, start, (start+end)/2, left, right, x) + get(bucket*2+1, (start+end)/2+1, end, left, right, x);
}

int main(){
    int n, m; cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> arr[i];
        update(1, i, 1, n, arr[i]);
    }

    for(int i=0; i<S*2; i++) sort(Data[i].begin(), Data[i].end());

    while(m--){

        int a, b, c; cin >> a >> b >> c;
        int l = -1e9, r = 1e9;
        int mid = (l+r)/2;
        while(l<=r){
            mid = (l+r)/2;
            if(get(1, 1, n, a, b, mid) < c) l = mid+1;
            else r = mid-1;
        }
        cout << l << "\n";
    }
}
