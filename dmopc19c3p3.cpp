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
vector<int>bit(300010);
void updt (int x) {
    x+=150005;
    for (int i=x; i<bit.size(); i+=i&-i) bit[i]++;
}
int sum (int x) {
    x+=150005;
    int sum=0;
    for (int i=x; i>0; i-=i&-i) sum+=bit[i];
    return sum;
}
int32_t main() {
    fio;
    int n; cin>>n; int count=0,ans=0;
    updt(0);
    for (int i=0; i<n; i++) {
        int a; cin>>a; 
        count+=(a==2?-1:1);
        ans+=sum(count-1);
        updt(count);
    }
    cout<<ans<<endl;
}