#include <bits/stdc++.h>
using namespace std;

//take out prime factors per loop run, if any prime number is left then add that to the output in the end
vector<int> primeFactors(int n){
  vector<int> result;
  for(int i=2;i*i<=n;i++){
    while(n%i==0){
      result.push_back(i);
      n/=i;
    }
  }
  if(n>1){
    result.push_back(n);
  }

  return result;
}

int main(){

  int n;
  cin>>n;
  vector<int> res=primeFactors(n);

  for(int ele:res){
    cout<<ele<<" ";
  }
  cout<<"\n";

  return 0;
}
