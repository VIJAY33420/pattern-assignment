#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   
   for(int i=n; i>=0; i--){
      for(int j=0; j<n+i; j++){
          printf(" ");
      }
      for(int k=0; k<2*(n-i)-1; k++){
          if(k==0 || k==2*(n-i)-2 || i==0){
          printf("*");
      }
        else {
          printf(" ");
      }
      }
      printf("\n");
   }

    return 0;
}