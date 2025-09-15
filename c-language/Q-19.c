#include <stdio.h>

int main()
{
    int n;
    int count=1;
    scanf("%d",&n);
    
    for(int i=n; i>0; i--){ // 1 
    
        for(int j=1; j<=n-i+1; j++){ // 1 2 3 4 5 
        printf("%d ",count);
         count++;
        }
         printf("\n");
    } 

    return 0;
}
