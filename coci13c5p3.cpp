#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=1e9;
typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> oset; oset bst;
//#define int long long int
#define pb push_back
#define endl '\n'
#define fendl endl
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f3f3f3f3f
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int max(int a, int b) {return (a>b)?a:b;}
int min(int a, int b) {return (a<b)?a:b;}
int ceil (int x, int y) {return (x+y-1)/y;}
string s, t; int n; deque<char>st;
int32_t main() {
    fio;
    cin>>s>>t;
    for (int i=0; i<s.size(); i++) {
        st.pb(s[i]); bool flag=true;
        if (st.size()>=t.size()) {
            for (int i=(int)st.size()-t.size(), j=0; j<t.size(); i++, j++) {
                if (st[i]!=t[j]) {flag=false; break;}
            }
            if (flag) {
                for (int i=0; i<t.size(); i++) st.pop_back();
            }
        }
    }
    if (st.empty()) {cout<<"FRULA"<<endl; return 0;}
    for (int i=0; i<st.size(); i++) cout<<st[i]; 
    cout<<endl;
}