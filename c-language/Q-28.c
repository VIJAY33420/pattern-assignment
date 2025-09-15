#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int count =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            printf(" ");
        }
        for(int k=0; k<2*(n-i)-1; k++){
            printf("%c ",'A'+count);
            count++;
        } 
        
        printf("\n");
        count=0;
    }

    return 0;
}
