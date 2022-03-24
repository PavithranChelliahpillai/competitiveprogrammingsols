#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=pow(10,7)+10000;
typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> oset; oset bst;
#define int long long int
#define endl '\n'
#define fendl endl
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f
//#pragma GCC optimize("O3","unroll-loops")
#pragma GCC optimize("trapv")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int32_t main() {
    fio;
    int n; cin>>n; vector<int>nums(n); vector<int>dups;
    int freq[MAX]; 
    for (int i=0; i<n; i++) {cin>>nums[i]; freq[nums[i]]++;}
    sort(nums.begin(),nums.end());
    for (int i=0;i <nums.size(); i++) if (nums[i]==nums[i-1]&&nums[i]!=nums[i-2]) dups.push_back(nums[i]);
    nums.resize(unique(nums.begin(), nums.end())-nums.begin());                                                                                                                                                                                                                                                                                     
    int cnt=0; 
    for (int i=0; i<nums.size(); i++) {
        for (int j=i+1; j<nums.size(); j++) {
            if (freq[nums[i]+nums[j]]) {
                // cout<<nums[i]<<"+"<<nums[j]<<"="<<nums[i]+nums[j]<<endl;
                cnt++;
            }
        }
    }
    for (int i=0; i<dups.size(); i++) {
        if (find(nums.begin(), nums.end(), 2*dups[i])!=nums.end()) {
            // cout<<dups[i]<<"+"<<dups[i]<<"="<<dups[i]*2<<endl;
            cnt++;
        }
    }
    if (cnt==0) {
        cout<<-1<<endl; return  0;
    }
    cout<<cnt<<endl;
}