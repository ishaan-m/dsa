#include <bits/stdc++.h>
using namespace std;

pair<int,int> roots(int a,int b,int c){

  pair<int,int> result;
  int inside=0;
  inside=(b*b)-(4*a*c);

  if(inside<0){
    result.first=INT_MIN;
    result.second=INT_MAX;
    return result;
  }
  
  result.first=(-1*(double)b+sqrt(inside))/(2*(double)a);
  result.second=(-1*(double)b-sqrt(inside))/(2*(double)a);
  return result;
}

int main(){
  int a,b,c;
  cin>>a>>b>>c;

  cout<<roots(a,b,c).first<<" "<<roots(a,b,c).second<<"\n";


  return 0;
}
