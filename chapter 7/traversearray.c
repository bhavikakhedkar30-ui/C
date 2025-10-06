#include<stdio.h>
int main(){

    int adhar[5];
    int *ptr = &adhar[0];
    for (int i = 0; i<=5 ; i++){

        printf("%d index : ",i);
        scanf("%d",(ptr+i));


    }
    for (int i=0;i<=5;i++ ){

        printf("%d index : %d \n\n",i,adhar[i]);
    }
    return 0;

}