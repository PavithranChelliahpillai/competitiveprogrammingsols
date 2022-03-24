#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=1000001;
typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> oset; oset bst;
#define int long long int
#define endl '\n'
#define fendl endl
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f
//#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
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
int32_t main() {
    fio;
    int n; cin>>n; vector<int>p; p.push_back(0);
    int ord[MAX],bit[2*MAX];
    for (int i=0; i<MAX; i++) ord[i]=0;
    for (int i=0; i<2*MAX; i++) bit[i]=0;
    for (int i=0; i<n; i++ ){
        int a; cin>>a; p.push_back(a);
    }
    int q; cin>>q;
    for (int i=1; i<=n; i++) {
        p[i]-=q;
        p[i]+=p[i-1];
        ord[i]=p[i];
    }
    sort(ord, ord+n+1);
    int ans=0;
    int sz=unique(ord, ord+n+1)-ord;
    for (int i=0; i<=n; i++) {
        int r=lower_bound(ord, ord+sz, p[i])-ord+1;
        ans+=sum(r,bit);
        updt(r,1,bit,2*MAX);
    }
    cout<<ans<<endl;
}