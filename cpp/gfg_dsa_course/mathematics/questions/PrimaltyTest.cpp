#include <bits/stdc++.h>
using namespace std;

bool primaltyTest(int n){
  for(int i=2;i*i<=n;i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}

int main(){
  int n;
  cin>>n;

  cout<<primaltyTest(n)<<"\n";

  return 0;
}
