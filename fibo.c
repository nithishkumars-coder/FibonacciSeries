#include <stdio.h>

int fibo[1000];

int sumSeries(int size){
  int summ = 0;
  for(int i = 2; i < size; i++){
    summ += fibo[i];
  }
  printf("\n%d", summ);
  return summ;
}
int getEvenNumbers(int size){
  for(int i=1;i<size;i++){
      if(fibo[i]%2==0){
        printf("%d ",fibo[i]);
      }
  }
}
int getOddNumbers(int size){
  for(int i=0;i<size;i++){
      if(fibo[i]%2==1){
        prinf("%d ",fibo[i]);
      }
  }
}
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
    sumSeries(n);
    getEvenNumbers(n);
   return 0;
}
