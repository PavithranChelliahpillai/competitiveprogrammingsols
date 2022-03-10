#include <bits/stdc++.h>
using namespace std;
int main() {
  int times;
  cin>>times;
  for (int i=0; i<times; i++) {
    int cost;
    cin>>cost;
    if (cost>=0 && cost<=30) {
      cout<<"38";
    }
    else if (cost>30 && cost<=50) {
      cout<<"55";
    }
    else if (cost>50 && cost<=100) {
      cout<<"73";
    }
    else {
      cout<< (ceil(double(cost-100)/50)*24)+73;
    }
    cout<<endl;
 }

}