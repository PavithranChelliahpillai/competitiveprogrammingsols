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
//#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int max(int a, int b) {return (a>b)?a:b;}
int min(int a, int b) {return (a<b)?a:b;}
int ceil (int x, int y) {return (x+y-1)/y;}
unordered_map<int,int>dsu, freq;
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
int n, q;
int32_t main() {
    fio;
    scan(n); scan(q);
    while (q--) {
        int t; scan(t);
        if (t==1) {
            int a, b; scan(a); scan(b); 
            u(a,b); 
        }
        else {
            int a; scan(a);
            cout<<freq[f(a)]<<endl;
        }
    }
}