#include<stdio.h>
int reverse(int arr[],int n);
int main(){

    int arr[]={1,2,3};

    reverse(arr,3);
    

     return 0;
}
int reverse(int arr[],int n){

    for (int i=3 ;i>n/2;i++){

        printf("%d",arr[i]);
    }
    


}
