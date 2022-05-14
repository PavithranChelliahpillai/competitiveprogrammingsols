#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=1e9;
typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> oset; oset bst;
#define int long long int
#define endl '\n'
#define fendl endl
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int max(int a, int b) {return (a>b)?a:b;}
int min(int a, int b) {return (a<b)?a:b;}
int ceil (int x, int y) {return (x+y-1)/y;}
vector<int>res,dsu,freq;
int f(int a) {
    if (dsu[a]!=a) dsu[a]=f(dsu[a]); 
    return dsu[a];
}
void u(int a, int b) {
    if (dsu[f(a)]!=dsu[f(b)]) {
        freq[f(a)]+=freq[f(b)]; 
        res[f(a)]+=res[f(b)];
        dsu[f(b)]=f(a); 
    }
}
int n, q;
int32_t main() {
    fio;
    cin>>n>>q; res.resize(n+5), freq.resize(n+5), dsu.resize(n+5);
    for (int i=0; i<=n; i++) dsu[i]=i, freq[i]=1;
    for (int i=1; i<n+1; i++) cin>>res[i];
    while (q--) {
        int t; cin>>t;
        if (t==1) {
            int a, b; cin>>a>>b; u(a,b);
        }
        else if (t==2) {
            int a; cin>>a;
            cout<<freq[f(a)]<<fendl;
        }
        else {
            int a; cin>>a;
            cout<<res[f(a)]<<fendl;
        }
    }
}