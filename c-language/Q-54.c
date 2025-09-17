#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  
  
  for(int i=1; i<n; i++){
      for(int j=1; j<=n-i; j++){
          printf(" ");
      }
      for(int k=1; k<=2*i-1; k++){
          if( k==1 || k==2*i-1){
          printf("*");
          }
          else{
              printf(" ");
          }
      }printf("\n");
  }
   for(int j=n; j>=1; j--){
       for(int l=1; l<=n-j; l++){
          printf(" ");
      }
      for(int m=1; m<=2*j-1; m++){
          if( m==1 || m==2*j-1 ){
          printf("*");
          }
          else{
              printf(" ");
          }
   
      }
      printf("\n");
  }
    return 0;
}
