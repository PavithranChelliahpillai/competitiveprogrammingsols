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
//#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int32_t main() {
    fio;
    int n,m,k; cin>>n>>m>>k; 
    int mik=n,mak=0,ad=1;
    vector<int>freq;
    for (int i=0; i<n; i++) {
        mak+=ad; freq.push_back(ad);
        if (ad<m) ad++;
    }
    if (k<mik||k>mak) {cout<<-1<<endl; return 0;}
    vector<int>sol;
    for (int i=1; i<=n; i++) {
        if (i%m!=0) sol.push_back(i%m);
        else sol.push_back(m);
    }
    
    //cout<<"+"<<mak<<endl;
    int dec=freq[sol.size()-1]-1,idx=sol.size()-1;
    while (mak-dec>k) {
        sol[idx]=0; freq[idx]-=dec;
        idx--; mak-=dec;
        dec=freq[idx]-1;
    }
    int res=mak-k;     //cout<<"+"<<mak<<';'<<res<<endl;
    if (idx==sol.size()-1&&res==0) {
        for (auto x:sol) cout<<x<<" "; cout<<endl; return 0;
    }
    res=freq[idx]-res;
    sol[idx]=sol[idx-res];
    //cout<<res<<','<<sol[idx]<<endl;
    //cout<<idx<<endl<<sol[idx]<<endl;
    for (int i=0; i<sol.size(); i++) {
        if (sol[i]==0) sol[i]=sol[i-1];
        cout<<sol[i]<<" ";
    }
    //cout<<endl;
    //for (auto x:freq) cout<<x<<" "; 
    cout<<endl; return 0;
}