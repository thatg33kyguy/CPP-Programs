#include<iostream>
using namespace std;

int main(){
    string s1;
    int t=0;
    string s2;
    cin>>s1>>s2;
    int i;
    
 for(i=0;i<=s1.size();i++){
        if (s1[i]<=90){
            s1[i]+=32;}
        if( s2[i]<=90){
            s2[i]+=32;

        }
if(s1[i]<s2[i]){
    cout<< -1<<endl;
    t=1;
    break;
    }
    
if(s1[i]>s2[i]){
    cout<<  1<< endl;
    ;
    t=1;
    break;
    }


    

}  
if(t==0){
    cout<<0<<endl;
    
}


}      
    
    
    
