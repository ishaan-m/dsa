#include <bits/stdc++.h>
using namespace std;

int absolute(int n){
  if(n<0){
    n*=-1;
  }
  return n;
}
int main(){

  int n;
  cin>>n;
  cout<<absolute(n)<<"\n";


  return 0;
}
