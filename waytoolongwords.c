
#include<stdio.h>
#include<string.h>

int main(){
int i,n;
char str[100];
 
 
 scanf("%d",&n);
 while(n>0)
 {
   
    scanf("%s", str);
    
    
    if((i=strlen(str))<=10){
            printf("%s\n",str);
            }  
       
        
     else{
        printf("%c",str[0]);
        printf("%d",i-2);
        printf("%c\n",str[i-1]);
        }
        
    n--;        
 }   
return 0;
}
 

