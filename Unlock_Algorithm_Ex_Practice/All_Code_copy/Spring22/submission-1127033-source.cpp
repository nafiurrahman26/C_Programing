#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "debug.h"
#endif
#define ll long long
#define nn '\n'

const int MAX = 1e6 + 10;
int a[MAX];

void solve(){

    int n , m;
    cin >> n >> m;

    for(int i = 0; i < n+m; i++) cin >> a[i];

    sort(a, a+n+m, greater<int>());

    for(int i = 0; i < n+m; i++) cout << a[i] << " \n"[i == n+m-1];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t = 1;
    cin >> t;

    for(int i = 1; i <= t; i++){
        //cout << "Case " << i << ": ";
        solve();
    }

    return 0;
}