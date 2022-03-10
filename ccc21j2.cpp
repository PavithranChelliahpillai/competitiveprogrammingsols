#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,x=0;
    string y;
    cin>>a;
    for (int i=0; i<a; i++) {
        int b;
        string c;
        cin>>c>>b;
        if (b>x) {
            x=b;
            y=c;
        }
    }
    cout<<y<<endl;
}