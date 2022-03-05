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
int32_t main() {
    fio;
    int a; string b; cin>>a>>b;
    for (int i=0; i<b.size(); i++) {
        if ((int)b[i]<(int)b[i+1]) {
            char c=b[i];
            b[i]=b[i+1]; b[i+1]=c;
            cout<<b<<endl; return 0;
        }
    }
    cout<<b<<endl; return 0;
}