#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,b; char c; cin>>a>>c>>b; cout<<"The equation "<<a<<" "<<c<<" "<<b<<" is equal to "; if (c=='$') cout<<a*a-b*b; else if (c=='@') cout<<b*a/(2*a-3); else cout<<a*b*(b-14); cout<<'.';
}