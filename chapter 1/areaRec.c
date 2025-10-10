#include<stdio.h>
int main(){

    int AreaRec;
    int len;
    printf("Enter the length: \n",len);
    scanf("%d",&len);
    
    int width;
    printf("Enter the Breadth : \n",width);
    scanf("%d",&width);

    AreaRec = len*width;
    printf("The Area of the Rectangle is: %d",AreaRec);

}