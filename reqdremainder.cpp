#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){

    int n,k,x,y;
    cin>>x>>y>>n;
    int p=n%x;

    if(p>y){
        k=n-(p-y);
        cout<<k<<endl;
    }
    else if(p<y){
        k=n-x+(y-p);
        cout<<k<<endl;
    
    }
    else{
        cout<<n<<endl;
    }

}
}