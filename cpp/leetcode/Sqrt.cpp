#include <bits/stdc++.h>
using namespace std;
int mySqrt(int x){
	int result=-1;
	for(int i=0;i*i<=x;i++){
		result=i;
	}
	
	return result;
}
int main(){
	int x;
	cin>>x;
	cout<<mySqrt(x);
	return 0;
}