#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b; cin>>a>>b; map<int,string>shapes;
    for (int i=0; i<b; i++) {
        string c,d; int e;
        cin>>c>>d>>e;
        if (c=="set") shapes[e]=d;
        else if (c=="get") {
            if (shapes[e]==d) cout<<1<<endl;
            else cout<<0<<endl;
        }
    }
}