#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n,w,k;
    cin>>n;
    vector<int> v;


    for(int i=2;i<=n/2;i++){
        if(n%i==0){
        
            int k=0;
            v.push_back(i);
            break;

    }
     
     else cout<<n-1<<endl;
     
    
    }

    sort(v.begin(), v.end());
    
    k=v[0];
     w=n/k;

    cout<<n/w-1<<endl;


    
}