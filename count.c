#include<stdio.h>
int main() {
    int num;
    int count=0;
    int orignumber = num;
    printf("enter the number you want to count digits");
    scanf("%d", &num);
    printf("counting\n");
    if(num==0){
        count =1;
    } else{
        while(num!=0){
            num=num/10;
            count++;
        }
    }
    printf("The number %d has %d digits\n",orignumber,count) ;
    return 0;
}
    
 