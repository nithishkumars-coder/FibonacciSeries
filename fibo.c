#include <stdio.h>



int * fibonacci(int n){
    int fibo[n],i;
    fibo[0]=0;
    fibo[1]=1;
    for (i=2;i<n;i++)
    {
      fibo[i]=fibo[i-1]+fibo[i-2];
    }
    return fibo;
}
int main()
{
    int n;
    printf("Enter the Number for fibonacci series : ");
    scanf("%d",&n);
    fibonacci(n);
   return 0;
}