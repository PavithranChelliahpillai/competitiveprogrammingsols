#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
#define fendl endl
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f
//#define INF 9
#define MAX 1e9
vector<int>xtry={0,0,1,-1};
vector<int>ytry={1,-1,0,0};
#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int32_t main() {
    fio;
    int a,b,k; cin>>a>>b>>k; int d[a+5][b+5]; int v[a+5][b+5]; 
    queue<pair<int,pair<int,int>>>pq;
    for (int i=0; i<a; i++) {
        for (int j=0; j<b; j++) {
            v[i][j]=INF;
            cin>>d[i][j];
            if (d[i][j]!=0) {
                pq.push(make_pair(d[i][j],make_pair(i,j)));
                v[i][j]=0;
            }
        }
    }
    while (!pq.empty()) {
        int w=pq.front().first,x=pq.front().second.first,y=pq.front().second.second; 
        pq.pop();
        //cout<<endl<<endl<<w<<';'<<x<<','<<y<<endl;
        for (int i=0; i<4; i++) {
            int newx=x+xtry[i],newy=y+ytry[i],neww=v[x][y]+1;
            //cout<<'-'<<newx<<','<<newy<<';'<<neww<<endl;
            if (newx>=0&&newy>=0) {
                if (newx<a&&newy<b&&neww<=k) {
                    if (v[newx][newy]>=neww) {
                      if (d[x][y]>=d[newx][newy]&&d[newx][newy]!=0&&v[newx][newy]>=neww)  {
                          //cout<<'|'<<d[x][y]<<';'<<d[newx][newy]<<','<<v[newx][newy]<<endl;
                          continue;
                      }
                        //cout<<d[x][y]<<';'<<d[newx][newy]<<','<<v[newx][newy]<<endl;
                        pq.push(make_pair(d[x][y],make_pair(newx,newy)));
                        //cout<<'|'<<newx<<','<<newy<<';'<<neww<<endl;
                        v[newx][newy]=neww;
                        d[newx][newy]=d[x][y];
                    }
                }
            } 
        }
    } 
    for (int i=0; i<a; i++) {
        for (int j=0; j<b; j++) {
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
    /*
    cout<<endl<<endl;
     for (int i=0; i<a; i++) {
        for (int j=0; j<b; j++) {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    */
}