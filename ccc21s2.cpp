#include <bits/stdc++.h>
using namespace std;
int M,N,K,x,ans; 
char op; 
int main() {
    cin>>M>>N>>K;
    int row[M+1], column[N+1]; 
    memset(row,0,sizeof(row)); 
    memset(column,0,sizeof(column)); 
    for(int i=0;i<K;i++){
        cin>>op>>x;
        if(op=='R') row[x]++;
        else column[x]++;
    }
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++)
            ans+=(column[i]+row[j])%2; 
    }
    cout<<ans<<'\n';
}