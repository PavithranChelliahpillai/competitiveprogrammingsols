#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=1e9;
typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> oset; oset bst;
#define int long double
#define endl '\n'
#define fendl endl
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f
//#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int32_t main() {
    fio;
    int n, a; cin>>n>>a;
    int sol=1, minsol=INF;
    for (int i=0; i<n; i++) {
        int x, y; cin>>x>>y;
        int ang=180/3.14159265*atan2(y,x);
        //cout<<ang<<endl;
        int minang=min(abs(360-abs(a-ang)),abs(a-ang));
        if (minsol>minang)minsol=minang, sol=i+1; 
    }
    cout<<sol<<endl;
}