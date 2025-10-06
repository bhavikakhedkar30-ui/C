#include<stdio.h>

void printnum(int arr[] , int n); //function declaration//
int main(){

    int arr[]={1,2,3,4,5};
    printnum(arr,5); //function calling and stating of size of array//
        
}
void printnum(int arr [] , int n){ //function defination//

    for (int i =0 ; i<n ; i++)
    {

        printf("%d \t" , arr[i]);

    }
    printf("\n");

}