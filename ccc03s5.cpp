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
#pragma GCC optimize("-Ofast","unroll-loops")
//#pragma GCC optimize("trapv")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int max(int a, int b) {return (a>b)?a:b;}
int min(int a, int b) {return (a<b)?a:b;}
int ceil (int x, int y) {return (x+y-1)/y;}
typedef tuple<int,int,int>tii;
int c, r, d; deque<tii>rs; vector<int>dest;
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
int32_t main() {
    fio;
    scan(c); scan(r); scan(d); 
    for (int i=0, a, b, w; i<r; i++) {scan(a); scan(b); scan(w); rs.pb({w, a, b});}
    sort(rs.rbegin(), rs.rend());
    for (int i=0, a; i<d; i++) {scan(a); dest.pb(a);}
    bool stp=false;
    while (1) {
        int fer=f(1); bool brk=false;
        for (auto i:dest) {if (f(i)!=fer) {brk=true; break;}}
        if (!brk) break;
        if (stp) rs.pop_front(); stp=true;
        u(get<1>(rs[0]),get<2>(rs[0])); 
    }
    cout<<get<0>(rs[0])<<endl;
}