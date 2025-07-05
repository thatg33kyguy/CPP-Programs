#include<iostream>
using namespace std;
int main(){
    int count=0, i,j;
    string s;
        cin>> s;
    
    for(i=0; i<=s.size();i++){
        for(j=0;j<i;j++){

        
        if(s[j]!=s[i]){
            count++;
        }
        
    
    }}
    if(count%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
} 