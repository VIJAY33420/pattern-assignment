#include <stdio.h>

int main()
{
   int a;
   scanf("%d",&a);
   
   for(int i=a; i>=1; i--){
       for(int j=0; j<a-i+1; j++){ 
       printf("%c ",'A'+j); 
   }printf("\n");
}
    return 0;
}