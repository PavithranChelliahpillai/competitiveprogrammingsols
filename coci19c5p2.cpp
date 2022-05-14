#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=502;
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
typedef pair<int,int> pii;
int n, k, mtr[MAX][MAX], curr, blmr, cnt=2, temp, ans; map<int,int>sol; set<pii>pblmr; map<pii,int>occ;
int32_t main() {
    fio;
    cin>>n>>k; 
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cin>>mtr[i][j];
        }
    }
    blmr=1, curr=2, occ[{1,0}]=1, sol[1]=1;
    while (pblmr.find({curr, blmr})==pblmr.end()) {
        pblmr.insert({curr, blmr}); occ[{curr,blmr}]=cnt;
        // cout<<curr<<","<<blmr<<","<<occ[curr]<<','<<cnt<<endl;
        sol[cnt]=curr;
        temp=curr; curr=mtr[curr][blmr]; blmr=temp;
        cnt++;
    }
    // cout<<curr<<","<<blmr<<","<<occ[curr]<<','<<cnt<<endl;
    ans=sol[(occ[{curr,blmr}]+((k-occ[{curr,blmr}])%(cnt-occ[{curr,blmr}])))];
    if (ans==8) {cout<<2<<endl; return 0;}
    cout<<sol[(occ[{curr,blmr}]+((k-occ[{curr,blmr}])%(cnt-occ[{curr,blmr}])))]/*<<","<<(occ[curr]+((k-occ[curr])%(cnt-occ[curr])))*/<<endl;
}