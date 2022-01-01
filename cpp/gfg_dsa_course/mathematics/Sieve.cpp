#include <bits/stdc++.h>
using namespace std;

//O( n(loglogn) )
void sieveGenerator(vector<bool> &sieve){
  int n=sieve.size()-1;

  for(int i=2;i*i<=n;i++){
      if(sieve[i]){
        for(int j=i*i;j<=n;j+=i){
          sieve[j]=false;
        }
      }
  }

  sieve[0]=false;
  sieve[1]=false;
  return;
}

int main(){


  int n;
  cin>>n;
  vector<bool> sieve(n+1,true);

  sieveGenerator(sieve);

  for(int i=2;i<sieve.size();i++){
    cout<<sieve[i]<<" ";
  }
  cout<<"\n";


  return 0;
}
