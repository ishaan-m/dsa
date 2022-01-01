#include <bits/stdc++.h>
using namespace std;

vector<int> allDivisors(int n){
  vector<int> divisors;
  int i=2;
  for(i=1;i*i<=n;i++){
    if(n%i==0){
      divisors.push_back(i);
    }
  }
  for(;i>=1;i--){
    if(n%i==0){
      if(divisors.back()!=n/i){
        divisors.push_back(n/i);
      }
    }
  }
  return divisors;
}

int main(){

  int n;
  cin>>n;
  vector<int> result=allDivisors(n);
  for(int ele:result){
    cout<<ele<<" ";
  }
  cout<<"\n";


  return 0;
}
