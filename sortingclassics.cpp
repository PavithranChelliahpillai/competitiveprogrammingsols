#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 1e9
#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int32_t main() {
    int a; cin>>a; vector<int>c; 
    for (int i=0; i<a; i++) {
        int b; cin>>b;  c.push_back(b);
    }
    sort(c.begin(),c.end());
    for (auto i:c) cout<<i<<endl;
}
