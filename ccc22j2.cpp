#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int main() {
    fio;
    int a,f=0,g; cin>>a; g=a; vector<int>e; 
    while (a--) {
        int b,c; cin>>b>>c;
        e.push_back(b*5-c*3);
    }
    for (auto i:e) {
        if (i>40) f++;
    }
    cout<<f;
    if (f==g) cout<<'+';
    cout<<endl; 
}