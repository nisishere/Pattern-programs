#include<stdio.h>
int main(){
    int i,j,n;
    n=5;
   for(i=0;i<n;i++){
      for (j=0;j<=i;j++)
      {
         printf(" ");
      }
      
       for(j=0;j<=n-1-i;j++){
           printf("%d ",j+1);
       }
       printf("\n");
   }
   return 0;
}