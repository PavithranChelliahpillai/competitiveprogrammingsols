#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define fendl endl
#define INF 0x3f3f3f3f
#define MAX 1e9
//#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int32_t main() {
    int a,b; cin>>a>>b;
    if (pow(a,2)<3.1415*(pow(b,2))) cout<<"CIRCLE"<<endl;
    else cout<<"SQUARE"<<endl;
}