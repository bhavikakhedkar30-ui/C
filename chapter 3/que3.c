#include<stdio.h>
int main(){

    int salary;
    int tax=0;
    
    printf("Enter Salary: ");
    scanf("%d",&salary);

    if (salary>=250000 && salary <=500000){

        tax = 0.05 *(salary - 250000); 
        printf("Tax to be paid is : %d",tax );
    }
    else if(salary>=500000 && salary <=1000000){
         
        tax = 0.20 *(salary - 500000);
        printf("Tax to be paid is : %d",tax );
    }
    else if (salary>=1000000){

        tax = 0.30 *(salary - 1000000);
        printf("Tax to be paid is : %d",tax);
    }
    else {

        printf("Not applicable for paying tax");
    }

}