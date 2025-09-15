#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    for(int i=n; i>0; i--){
        for(int j=0; j<n-i+1; j++){
            printf("%c",'A'+count);
            count++;
        }
        printf("\n");
    }

    return 0;
}