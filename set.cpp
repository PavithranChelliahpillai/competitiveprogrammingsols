#include <bits/stdc++.h>

using namespace std;

int main() {
    int a; cin>>a; vector<int>c; 
    for (int i=0; i<a; i++) {
        int b; cin>>b; c.push_back(b);
    }
    sort(c.begin(),c.end());
    int ans=1;
    for (int i=1; i<c.size(); i++) {
        if (c[i-1]!=c[i]) ans++;
    }
    cout<<ans<<endl;
}