#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=5*1e5+5;
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
    //fio;
    int n; cin>>n; vector<int>nums(n+2);
    for (int i=0; i<n; i++) cin>>nums[i];
    vector<int>vals(nums.begin(),nums.end());
    sort(nums.begin(),nums.end());
    nums.erase(unique(nums.begin(),nums.end()),nums.end());
    map<int,int>m; 
    int cntn=0, cntm=0; 
    for (auto i:nums) {m[i]=cntn; cntn++;}
    for (auto i:vals) {nums[cntm]=m[i]; cntm++;}
    int freq[MAX], bit[MAX];
    for (int i=0; i<MAX; i++) {freq[i]=0; bit[i]=0;}
    int ans=0; 
    for (int i=0; i<vals.size(); i++) {
        int v=vals[i],x=sum(v+1,bit)-freq[v];
        ans+=min(x,i-x-freq[v]);

        updt(v+1,1,bit,MAX); freq[v]++;
    }
    cout<<ans<<endl;
}