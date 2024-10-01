#include <stdio.h>

int main() {
    int i=1,sum=0; //start
   printf("enter a number(when to start)& when to stop:);
   scanf("%d%d,&i,&j");
    do{
        printf("%d\n",i);
        sum+=i;
        i++; //step
    }while(i<=10); //start
    printf("the sum of 10 numbers is %d",sum);
    return 0;
}
