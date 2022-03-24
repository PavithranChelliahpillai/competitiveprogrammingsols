#include <bits/stdc++.h>

using namespace std;

int main() {
    string a; cin>>a;
    if (a.size()!=5) {cout<<"bad"<<endl; return 0;}
    int b=0; 
    for (int i=0; i<5; i++) if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y') b++;
    if (b>=2) {cout<<"good"<<endl; return 0;}
    cout<<"bad"<<endl;
}