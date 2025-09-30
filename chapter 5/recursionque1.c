#include<stdio.h>
int sum(int a);


int main(){

   printf("sum is :%d",sum(5));
   return 0;
}

int sum(int a){
    if (a==1){
        return 1;
    }
int sumNm1 = sum(a-1);
int sumN = sumNm1 + a;
return sumN;
}