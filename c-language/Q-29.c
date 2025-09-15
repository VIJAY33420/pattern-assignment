#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   
   for(int i=n; i>0; i--){
       for(int j=0; j<i; j++){
           printf(" ");
       }
       for(int k=0; k<2*(n-i)+1; k++){
           printf("*");
       }printf("\n");
   }
      for(int z=0; z<=n; z++){
          for(int v=0; v<z; v++){
              printf(" ");
          }
      for(int x=0; x<2*(n-z)+1; x++){
          printf("*");
      }printf("\n");
      }
      return 0;
}