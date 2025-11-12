/*#include<stdio.h>
int main (){
    int arr[10];

    for (int i = 0 ; i<10;i++){
        arr[i] = 5 * (i+1);
    }
    for (int i = 0 ; i<10;i++){
    printf("5 X %d = %d\n",i+1,arr[i]);
    }
}*/
//same code but taking input from user//
#include<stdio.h>
int main (){
    int arr[10];
    int n ;

printf("enter number for table :  \n");
scanf("%d",&n);

    for (int i = 0 ; i<10;i++){
        arr[i] = n * (i+1);
    }
    for (int i = 0 ; i<10;i++){
    printf("%d X %d = %d\n",n,i+1,arr[i]);
    }
}