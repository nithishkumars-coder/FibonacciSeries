#include <stdio.h>
int fibo[1000];
void fibonacci(int n){
    int i;
    fibo[0]=0;
    fibo[1]=1;
    for (i=2;i<n;i++)
    {
      fibo[i]=fibo[i-1]+fibo[i-2];
    }
    for (i=0;i<n;i++)
    {
      printf("%d ",fibo[i]);
    }
}
int main()
{
    int n;
    printf("Enter the Number for fibonacci series : ");
    scanf("%d",&n);
    fibonacci(n);
   return 0;
}