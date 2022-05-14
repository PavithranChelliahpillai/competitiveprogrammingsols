#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=105;
typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> oset; oset bst;
#define int long double
#define pb push_back
#define endl '\n'
#define sp " "
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
long n; int t, dt, c, dc, pit, dpit, f[MAX], dp[MAX], ti[MAX], pre[MAX];
int32_t main() {
    while (cin>>n>>t>>dt>>c>>dc>>pit>>dpit) {
        fill (dp, dp+MAX, 1e10); fill (pre, pre+MAX, 0); dp[0]=0;
        for (long i=1; i<=n; i++) {
            f[i]=(f[i-1]+c)/(1-dc);
            ti[i]=ti[i-1]+t+f[i]*dt;
        }
        for (long i=1; i<=n; i++) {
            dp[i]=ti[i];
            for (long j=1; j<i; j++) {
                int temp=dp[j]+ti[i-j]+pit+f[i-j]*dpit;
                if (temp<dp[i]) dp[i]=temp, pre[i]=j;
            }
        }
        vector<long>p; for (long i=n; i; i=pre[i]) p.pb(i);
        cout.setf(ios::fixed,ios::floatfield);
        cout.precision(3);
        cout<<n<<sp<<t<<sp<<dt<<sp<<c<<sp<<dc<<sp<<pit<<sp<<dpit<<endl<<dp[n]<<sp<<f[p.back()]<<sp<<p.size()-1<<endl;
        for (long i=(long)p.size()-1; i>0; i--) {
            cout<<p[i]<<sp<<f[p[i-1]-p[i]]<<endl;
        }
    }
}