#include <bits/stdc++.h>

using namespace std;

int main() {
  int a,b;
  vector<int> arr;
  cin >> a;
  for(int i=0;i<a;i++) {
    cin >> b;
    arr.push_back(b);
  }
  sort(arr.begin(),arr.end());
  cout.setf(ios::fixed);
  cout.precision(1);
  cout << (double(arr[a/2])+arr[a/2-(a+1)%2])/2.0;
}