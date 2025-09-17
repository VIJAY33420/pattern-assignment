#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  
  int count=2;
  
  for(int i=n; i>=0; i--){
      for(int j=1; j<=n-i; j++){
          printf("%d ",count);
          count=count+2;
      }
      printf("\n");
  }

    return 0;
}
