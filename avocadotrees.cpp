#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
//using namespace __gnu_pbds;
const int MAX=1e6;
//typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> oset; oset bst;
//#define int long long int
//#define pb push_back
#define endl '\n'
//#define fendl endl
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f3f3f3f3f
//#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
#define scanu(x) for (x = _i[_i0++] & 15; 47 < (_ = _i[_i0++]); x = (x << 3) + (x << 1) + (_ & 15))
char _i[1 << 25], _; int _i0;
#pragma GCC optimize("-Ofast","unroll-loops")
//#pragma GCC optimize("trapv")
#pragma GCC target("avx2")
int max(int a, int b) {return (a>b)?a:b;}
int min(int a, int b) {return (a<b)?a:b;}
int ceil (int x, int y) {return (x+y-1)/y;}
int n, q, h; 
int32_t main() {
    fio;
    fread(_i, 1, 1 << 25, stdin);
    scanu(n); scanu(q); scanu(h);
    int psa[n+1]; psa[0]=0;
    for (int i=1, hv, v; i<=n; i++) {
        scanu(hv); scanu(v);
        psa[i]=psa[i-1];
        if (hv<=h) psa[i]+=v;
    }
    int sol=0;
    for (int i=0, l, r; i<q; i++) {
        scanu(l); scanu(r);
        sol=max(sol, psa[r]-psa[l-1]);
    }
    cout<<sol<<endl;
}