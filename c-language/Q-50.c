#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  
  int count=n*(n+1)/2;
  
  for(int i=n; i>=0; i--){
      for(int j=0; j<n-i; j++){
          printf("%d ",count);
          count=count-1;
      }
      printf("\n");
  }

    return 0;
}
