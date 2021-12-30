#include <bits/stdc++.h>
using namespace std;
int trailingCounter(int n){

  int count=0;
  for(int i=5;i<=n;i*=5){
    count+=n/i;
  }

  return count;
}

int main(){

  int n;
  cin>>n;

  cout<<trailingCounter(n)<<"\n";

  return 0;
}
