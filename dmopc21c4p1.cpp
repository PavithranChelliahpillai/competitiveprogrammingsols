#include <bits/stdc++.h>
using namespace std;
#define float long double
bool isInside(long double x1, float y1, float x2, float y2, float x3, float y3, float x, float y){  
  float z=((y3-y2)/(x3-x2))*x+y3-((x3*(y3-y2))/((x3-x2)));
  if(y2>y1) {
    if (x3>x1) {
      if (x>x1&&x<x3) {
        if (y>y3&&y<y2) {
          if (y<=z) return true;
          else return false;
        }
        else if (y==y3||y==y2){
          if (y<=z) return true;
          else return false;
        }
        else return false;
      }
      else if (x==x1||x==x3) {
        if (y>y3&&y<y2) {
          if (y<=z) return true;
          else return false;
        }
        else if (y==y3||y==y2){
          if (y<=z) return true;
          else return false;
        }
        else return false;
      }
      else return false;
    }
    else if (x3<x1) {
      if(x<x1&&x>x3) {
        if (y>y1&&y<y2) {
          if (y<=z) return true;
          else return false;
        }
        else if (y==y1||y==y2) {
          if (y<=z) return true;
          else return false;
        }
        else return false;
      }
      else if (x==x1||x==x3) {
        if (y>y1&&y<y2) {
          if (y<=z) return true;
          else return false;
        }
        else if (y==y1||y==y2) {
          if (y<=z) return true;
          else return false;
        }
        else return false;
      }
      else return false;
    }
    else return false;
  }
  else if(y2<y1) {
    if (x3>x1) {
      if (x<x3&&x>x2) {
        if (y>y2&&y<y3) {
          if (y>=z) return true;
          else return false;
        }
        else if (y==y2||y==y3) {
          if (y>=z) return true;
          else return false;
        }
        else return false;
      }
      else if (x==x3||x==x2) {
        if (y>y2&&y<y3) {
          if (y>=z) return true;
          else return false;
        }
        else if (y==y2||y==y3) {
          if (y>=z) return true;
          else return false;
        }
        else return false;
      }
      else return false;
    }
    else if (x3<x1) {
      if (x<x1&&x>x3) {
        if (y>y2&&y<y1) {
          if (y>=z) return true;
          else return false;
        }
        else if (y==y3||y==y2) {
          if (y>=z) return true;
          else return false;
        }
        else return false;
      }
      else if (x==x1||x==x3) {
        if (y>y2&&y<y1) {
          if (y>=z) return true;
          else return false;
        }
        else if (y==y3||y==y2) {
          if (y>=z) return true;
          else return false;
        }
        else return false;
      }
      else return false;
    }
    else return false;
  }
  else return false;
}
int main() {
  long long a,b,k=0; cin>>a>>b; vector<long long>c;
  for (int i=0; i<a; i++) {
    long long d,e,f,g,h,j; cin>>d>>e>>f>>g>>h>>j;
    c.push_back(d);c.push_back(e);c.push_back(f);c.push_back(g);c.push_back(h);c.push_back(j);
  }
  for (int i=0; i<b; i++) {
    long long d,e; cin>>d>>e;
    for (int j=0; j<c.size(); j+=6) {
      k+=(isInside(c[j],c[j+1],c[j+2],c[j+3],c[j+4],c[j+5],d,e));
    }
    cout<<k<<endl; k=0; 
  }
}