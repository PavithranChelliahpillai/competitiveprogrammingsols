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
set<int>os; set<int>::iterator it;
int g, p;
int32_t main() {
    fio;
    scan(g); scan(p);
    for (int i=1; i<=g; i++) os.insert(i);
    for (int i=1; i<=p; i++) {
        int x; scan(x);
        it=os.lower_bound(x);
        if (it==os.begin()&&*it!=x) {cout<<i-1<<endl; return 0;}
        if (*it!=x) it--; os.erase(it);
    }
    cout<<p<<endl;
}