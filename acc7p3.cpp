#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=1e9;
typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> oset; oset bst;
#define int long long int
#define pb push_back
#define endl '\n'
#define fendl endl
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f3f3f3f3f
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
//#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int max(int a, int b) {return (a>b)?a:b;}
int min(int a, int b) {return (a<b)?a:b;}
int ceil (int x, int y) {return (x+y-1)/y;}
gp_hash_table<int,int>dsu, freq;
//if too slow, use vector instead
int f(int a) {
    if (dsu.find(a)==dsu.end()) dsu[a]=a, freq[a]=1;
    if (dsu[a]!=a) dsu[a]=f(dsu[a]); 
    return dsu[a];
}
void u(int a, int b) {
    if (dsu.find(a)==dsu.end()) dsu[a]=a, freq[a]=1;
    if (dsu.find(b)==dsu.end()) dsu[b]=b, freq[b]=1;
    if (dsu[f(a)]!=dsu[f(b)]) {
        freq[f(a)]+=freq[f(b)];
        dsu[f(b)]=f(a);
    }
}
int n, m, ans=0; vector<int>cst; vector<tuple<int,int,int>>mst;
int32_t main() {
    fio;
    cin>>n>>m; cst.resize(n);
    for (auto &i:cst) cin>>i;
    while (m--) {
        int a, b; cin>>a>>b;
        u(a,b);
    }
    for (int i=1; i<n; i++) mst.pb({i, i+1, abs(cst[i]-cst[i-1])});
    sort(mst.rbegin(), mst.rend(), [](tuple<int,int,int>a, tuple<int,int,int>b){return get<2>(a)>get<2>(b);});
    for (auto e:mst) if (f(get<0>(e))!=f(get<1>(e))) u(get<0>(e), get<1>(e)), ans+=get<2>(e);
    cout<<ans<<endl;
}