#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n;

int solve(const ll &c){
    return int((sqrtl(1+4*c)-1)/2);
}

int main(){

    cin>>n;
    cout<<solve(n*2)<<endl;


    return 0;
}