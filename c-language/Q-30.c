#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   
   for(int i=n; i>=1; i--){
       for(int j=0; j<i; j++){
           printf(" ");
       }
       for(int k=0; k<(n-i); k++){
           printf("%c",'A'+k);
       }
       for(int t=n-i; t>=0; t--){
       printf("%c",'A'+t);
       }
       printf("\n");
   }
      for(int z=0; z<=n; z++){
          for(int v=0; v<z; v++){
              printf(" ");
          }
      for(int x=0; x<(n-z); x++){
          printf("%c",'A'+x);
      }
      for(int h=n-z; h>=0; h--){ 
       printf("%c",'A'+h);
      }
      printf("\n");
      }
      return 0;
}
