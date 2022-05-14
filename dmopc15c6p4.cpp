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
unordered_map<int,int>dsu, freq;
//if too slow, use vector instead
int f(int a) {
    if (dsu.count(a)==0) dsu[a]=a, freq[a]=1;
    if (dsu[a]!=a) dsu[a]=f(dsu[a]); 
    return dsu[a];
}
void u(int a, int b) {
    if (dsu.count(a)==0) dsu[a]=a, freq[a]=1;
    if (dsu.count(b)==0) dsu[b]=b, freq[b]=1;
    if (dsu[f(a)]!=dsu[f(b)]) {
        freq[f(a)]+=freq[f(b)]; 
        dsu[f(b)]=f(a); 
    }
}
int n, k, ans=0; vector<pair<int,int>>edgs;
int32_t main() {
    fio;
    cin>>n>>k;
    for (int i=0, a; i<n-1; i++) cin>>a, edgs.pb({a, i});
    sort(edgs.begin(), edgs.end());
    for (int i=0; i+k<n; i++) u(i, i+k);
    for (auto i:edgs) {
        if (f(i.second)==f(i.second+1)) continue;
        u(i.second, i.second+1); ans+=i.first;
    }
    cout<<ans<<endl;
}