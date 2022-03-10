#include <bits/stdc++.h>
using namespace std;
int main() {
  bool e[402][200]={false};
  e[0+200][1]=e[0+200][2]=e[0+200][3]=e[-1+200][3]=e[-2+200][3]=e[-3+200][3]=e[-3+200][4]=e[-3+200][5]=e[-4+200][5]=e[-5+200][5]=e[-5+200][4]=e[-5+200][3]=e[-6+200][3]=e[-7+200][3]=e[-7+200][4]=e[-7+200][5]=e[-7+200][6]=e[-7+200][7]=e[-6+200][7]=e[-5+200][7]=e[-4+200][7]=e[-3+200][7]=e[-2+200][7]=e[-1+200][7]=e[0+200][7]=e[1+200][7]=e[1+200][6]=e[1+200][5]=true;
  int b=-1,c=-5;
  while (true) {
    char d; int f;
    cin>>d>>f; if (d=='q') return 0;
    if (d=='l') {
      if (b-f<-202){ cout<<b-f<<" "<<c<<" DANGER"; return 0;}
      for (int i=1; i<f+1; i++) {
        if (e[-b+i+200][-c]){ cout<<b-f<<" "<<c<<" DANGER"; return 0;}
        e[-b+i+200][-c]=true;
      }
      b-=f;
    }
    else if (d=='r') {
      if (b+f>199){ cout<<b+f<<" "<<c<<" DANGER"; return 0;}
      for (int i=1; i<f+1; i++) {
        if(e[-b-i+200][-c]){ cout<<b+f<<" "<<c<<" DANGER"; return 0;}
        e[-b-i+200][-c]=true;
      }
      b+=f;
    }
    else if (d=='u') {
      if (c+f>0){ cout<<b<<" "<<c+f<<" DANGER"; return 0;}
      for (int i=1; i<f+1; i++) {
        if(e[-b+200][-(c+i)]){ cout<<b<<" "<<c+f<<" DANGER"; return 0;}
        e[-b+200][-c-i]=true;
      }
      c+=f;
    }
    else if (d=='d') {
      if (c-f>200){ cout<<b<<" "<<c-f<<" DANGER"; return 0;}
      for (int i=1; i<f+1; i++) {
        if(e[-b+200][-(c-i)]){ cout<<b<<" "<<c-f<<" DANGER"; return 0;}
        e[-b+200][-c+i]=true;
      }
      c-=f;
    }
    else if (d=='z') {
      for (int i=200-40; i<200+20; i++) {
        for (int j=0; j<20; j++) {
          cout<<e[i][j];
        }
        cout<<endl;
      }
    }
    cout<<b<<" "<<c<<" safe"<<endl;
  }
}