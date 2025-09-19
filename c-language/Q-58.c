#include <stdio.h>

int main()
{
   int n; 
   scanf("%d",&n);
   if(n % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 1;
    }
   int m=n/2+1;
   for(int i=1; i<=n; i++){
       for(int j=1; j<=n; j++){
           if( i==m || j==m){
           printf("%d",j);
           }
           else{
               printf(" ");
           }
       }
       printf("\n");
   }

    return 0;
}