#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin>>a>>b>>c;
    int tot=0; tot+=a; tot+=b; tot+=c;
    int cntr=0;
    if (a==c) cntr++; if (b==c) cntr++; if(a==b) cntr++;
    if (tot!=180) {cout<<"Error"<<endl; return 0;}
    if (cntr==3) {cout<<"Equilateral"<<endl; return 0;}
    if (cntr==1) {cout<<"Isosceles"<<endl; return 0;}
    cout<<"Scalene"<<endl;
}