#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b; cin>>a>>b;
    if (a<2) {cout<<"Before"<<endl; return 0;}
    if (a>2) {cout<<"After"<<endl; return 0;}
    if (b>18) {cout<<"After"<<endl; return 0;}
    if (b<18&&a<=2) {cout<<"Before"<<endl; return 0;}
    cout<<"Special"<<endl;
}