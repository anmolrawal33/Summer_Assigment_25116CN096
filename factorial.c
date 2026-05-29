#include<stdio.h>
int Nfact(int N){
    int fact = 1;
    for(int i =1;i<=N;i++){
        fact=fact*i;
    }
return fact;
}
int main() {
int N;
printf("enter the number to find its factorial");
scanf("%d", &N);
int result = Nfact(N);
printf("the factorial of the %d is %d\n",N,result);
return 0;
} 