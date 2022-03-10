#include <bits/stdc++.h>
using namespace std;
int main() {
  int jar1, jar2, jar3;
  cin >> jar1 >> jar2 >> jar3;
  
  int solution = max(jar1, max(jar2, jar3)) - min(jar1, min(jar2, jar3));

  cout<<solution;
}