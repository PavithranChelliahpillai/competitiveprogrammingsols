#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  for (int i=0; i<n; i++)
  {  
  string words;
  cin>>words;
  transform(words.begin(), words.end(), words.begin(), ::tolower); 
  cout << words << endl; 
  }
}