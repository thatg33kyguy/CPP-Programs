#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool dist(int i){
	vector<bool> exists(4);
	while(i){
		if(exists[i%10]){
			return false;
		}

		
		exists[i%10]= true;
		i/=10;
	}
		return true;
	 


	}

int main(){
    int y;
	cin>>y;
	for(int i=y+1;i<=10000;++i){
	 if (dist(i)){
	 	cout<<i;
	 	break;
	 }}
	return 0;
	

	
}