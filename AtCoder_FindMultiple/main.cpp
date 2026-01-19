#include <bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;
  cin >>a>>b>>c;
  int r=0;
  int t=0;
  for(int i=a; i<b+1; ++i){
    if(i%c==0){
      r++;
      t=i;
    }
  }
  if(r!=0){
    cout << t;
  }else{
    cout << "-1";
  }
}