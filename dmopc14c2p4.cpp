//made code as tiny as possible lmfao
#include <bits/stdc++.h>
using namespace std; int main() {int a=0; cin>>a; vector<int>b; for (int i=0; i<a; i++) {int z;cin>>z;b.push_back(z);}for (int i=1; i<a; i++) {b[i]+=b[i-1];}int c;cin>>c;cout<<endl;for (int i=0; i<c; i++) {int d,e;cin>>d>>e;cout<<b[e]-b[d-1]<<endl;}}