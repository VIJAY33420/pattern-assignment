#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  
  int count=1;
  
  for(int i=0; i<n; i++){
      for(int j=1; j<=n; j++){
          printf("%d ",count);
          count=count+1;
      }
      printf("\n");
  }

    return 0;
}
