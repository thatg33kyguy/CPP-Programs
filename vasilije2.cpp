#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    long long n,k,x;
    cin>>n>>k>>x;
    long long mn = k*(k+1)/2;
     long long mx =n*(n+1)/2- (n-k+1)*(n-k)/2;

    if(mn>x or mx<x){
        cout<<"no\n";
    }
    else{
    cout<<"yes\n";}

}


}