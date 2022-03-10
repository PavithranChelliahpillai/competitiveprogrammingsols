#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c,x=5000;
    cin >> a >> b >> c;
    for(int i=a;i<=c;i+=a) x = min(x,(c-i)%b);
    cout << c-x;
    return 0;
}