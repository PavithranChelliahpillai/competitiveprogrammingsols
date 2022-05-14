#include <bits/stdc++.h>

using namespace std;

int main() {
    int a; cin>>a; vector<int>b(a);
    for (int i=0; i<a; i++) cin>>b[i];
    sort(b.begin(),b.end());
    for (auto x:b) cout<<x<<endl;
}