#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0);
  string a,b; getline(cin,a); a.erase(remove_if(a.begin(), a.end(), ::isspace), a.end());
  if (a=="white"||a=="red"||a=="green") {
    getline(cin,b); b.erase(remove_if(b.begin(), b.end(), ::isspace),b.end());if (b=="white"||b=="red"||b=="green"){printf("%s","Jingle Bells");} else printf("%s","Boring...");}
  else printf("%s","Boring...");
}