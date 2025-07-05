#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x=0;

    string s1;
    string s2("X++");
    string s3("++X");
    string s4("X--");
    string s5("--X");

    while(n--){
        cin>> s1;
        if( s1==s2||s1==s3){
            x++;}
        else{
            x--;
        }
        }
    

cout<<x;
return 0;

}