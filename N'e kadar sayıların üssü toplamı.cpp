#include <stdio.h>
#include <math.h>
int Nth_of_GP(int a, int r, int n) {
    
   return( a * (int)(pow(r, n-1)) );
}

int main() {
   int a = 2;
   int r = 2;
   int n,sum=1;
   printf("Enter the n value\t");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       sum+=Nth_of_GP(a,r,i);
   }
   printf("The sum is\t");
   printf("%d",sum);
}
