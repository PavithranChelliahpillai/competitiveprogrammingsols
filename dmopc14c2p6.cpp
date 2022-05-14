#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=1e5+10;
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
int n, q; 
void updt(int i,int v, int bit[], int end) {
    while(i<=end) {
       bit[i] += v;
       i=i+(i&-i);
    }
}
void updtfrq(int i,int v, int frq[]) {
    while(i<=100000) {
       frq[i]+=v;
       i=i+(i&-i);
    }
}
int frqsum(int i, int frq[]) {
   int z = 0;
    while(i>0) {
       z+=frq[i];
       i=i-(i&-i);
    }
    return z;
}
int sum(int i, int bit[]) {
   int z = 0;
    while(i>0) {
       z+=bit[i];
       i=i-(i&-i);
    }
    return z;
}
struct quer{int l, r, k;};
bool compare (quer a, quer b) {return a.k>b.k;}
vector<quer>qr,temp;
map<int,vector<int>>ts;
map<pair<pair<int,int>,int>, int>sol; 
int maxh=0, bit[MAX];
int32_t main() {
    fio;
    memset(bit, 0, sizeof(bit));
    scan(n); 
    for (int i=0, a; i<n; i++) {scan(a); ts[a].pb(i); maxh=max(maxh, a);}
    scan(q); 
    for (int i=0, a, b, m; i<q; i++) {
        scan(a); scan(b); scan(m); b++;
        qr.pb({a,b,m}); temp.pb({a,b,m});
    }
    sort(qr.begin(), qr.end(), compare);
    for (int idx=0; idx<q; idx++) {
        while (maxh>=qr[idx].k) {
            for (int i=0; i<ts[maxh].size(); i++) updt(ts[maxh][i]+1, maxh, bit, n+10);
            maxh--;
        }
        sol[{{qr[idx].l,qr[idx].r},qr[idx].k}]=sum(qr[idx].r, bit)-sum(qr[idx].l, bit);
        //cout<<sum(qr[idx].r, bit)-sum(qr[idx].l, bit)<<endl;    
    }
    for (auto i:temp) cout<<sol[{{i.l, i.r},i.k}]<<endl;
}