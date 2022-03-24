#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define fendl endl
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f
#define MAX 1e9
#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
bitset<102>c,d;
int32_t main() {
    fio;
    int a; cin>>a; 
    while (a--) {
        int b; cin>>b;
        c[b]=1; 
    }
    for (int p=1; p<=100; p++) {
        d=c;
        for (int i=0; i<=p; i++) {
            double val=(double)i*100/p;
            int v=round(val);
            d[v]=0;
        }
        cout<<endl;
        if (d.none()) {cout<<p<<endl; return 0;}
    }
}