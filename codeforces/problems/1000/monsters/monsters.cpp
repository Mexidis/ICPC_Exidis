//
// Created by pac61, Kevo, Jime on 07/03/2025.
//
#include <bits/stdc++.h>
using namespace std;
int a[300005];
void solve(){
    int n, k; cin >> n >> k;
    vector<pair<int, int>> muertos(n);

    for(int i=0; i<n; ++i){
        cin>>a[i];
        a[i]=(a[i]%k==0)?k:a[i]%k;
        muertos[i].first=a[i];
        muertos[i].second=i+1;
    }

    sort(muertos.begin(), muertos.end(), [](const pair<int, int> &p1, const pair<int, int> &p2){
        if(p1.first==p2.first)
            return p1.second < p2.second;
        return p1.first > p2.first;
    });

    for(int i=0; i<n; ++i){
        printf("%d ", muertos[i].second);
    }
    cout<<endl;
}

int main(){
    int t; cin >> t;
    while (t--){
        solve();
    }
    return 0;
}