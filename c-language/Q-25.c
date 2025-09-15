#include <stdio.h>

int main()
{
   int n;
 
   scanf("%d",&n);
   
   for(int i=n; i>=1; i--){ // 5 
       for(int j=0; j<=n-i; j++){ // 1 
           printf("%c",'A'+j);
       }
       for(int k=n-i-1; k>=0; k--){ //5 5 1  5 4 1 
       printf("%c",'A'+k);
   }printf("\n");
}
    return 0;
}