#include <stdio.h>

int main()
{
   int n;
 
   scanf("%d",&n);
   
   for(int i=n; i>0; i--){ // 5 
       for(int j=1; j<=n-i+1; j++){ // 1 
           printf("%d",j);
       }
       for(int k=n-i; k>0; k--){ //5 5 1  5 4 1 
       printf("%d",k);
   }printf("\n");
}
    return 0;
}