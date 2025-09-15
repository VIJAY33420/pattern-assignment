#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
for(int i=1; i<=n; i++){ // 1
    for(int j=1;  j<=n-i;  j++){  
  printf(" ", n-i);
    
    }  
    for(int j=0; j<i; j++ ){  
        printf("%c", 'A'+j);
    }
    printf("\n");
}
return 0;
}