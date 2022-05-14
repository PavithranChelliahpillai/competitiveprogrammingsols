#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=5e5+5;
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
int n, s, a[MAX], freq[MAX], ans;
bool check (int m) {
    int thres=(m+1)*s, need=0;
    for (int i=1; i<=n; i++) {
        if (a[i]<=thres) need+=(thres-a[i])/s;
        if (need>m*s) {ans=m*s; return 1;}
    }
    memset(freq, 0, sizeof(freq)); 
    for (int i=1;i <=n; i++) {
        if (a[i]<=thres) freq[a[i]%s]++;
    }
    for (int i=1; i<=n; i++) {
        need+=freq[i];
        if (need>m*s+i) {ans=m*s+i; return 1; }
    }
    return 0;
}
int32_t main() {
    fio;
    cin>>n>>s;
    for (int i=1; i<=n; i++) cin>>a[i];
    sort (a+1, a+n+1);
    if (s>=n) {
        for (int i=1; i<=n; i++) {
            if (a[i]<i) {cout<<a[i]<<endl; return 0;}
        }
        cout<<"INF"<<endl; return 0;
    }
    int lo=0, hi=INF;
    while (lo<=hi) {
        int mid=(lo+hi)/2;
        if (check(mid)) hi=mid-1; 
        else lo=mid+1;
    }
    cout<<ans<<endl;
}