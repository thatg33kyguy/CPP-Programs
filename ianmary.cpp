#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
	 int a,b;
	 cin>>a>>b;

	 if(__gcd(a,b)==1){
	  cout<<1<<endl;
	  cout<<a<<" "<<b<<endl;
	}

	 else{
	 	cout<<2<<endl;
	 	cout<<a-1<<" "<< 1<<endl;
	 	cout<<a<<" "<<b<<endl;
}
}

return 0;
}

