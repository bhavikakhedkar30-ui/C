#include<stdio.h>
void areasq(int side);
void areacircle(float radius);
void arearec(int area, int len , int bre);

int main(){

    int side;
    printf("Enter side of a square: ");
    scanf("%d ",&side);
    areasq(side);

    float radius;
    printf("Enter radius of a circle: ");
    scanf("%f ",&radius);
    areacircle(radius);

    int area;
    int len;
    printf("Enter lenght of a rectangle: ");
    scanf("%d ",&len);
    int bre;
    printf("enter Breath of a rectangle: ");
    scanf("%d ",&bre);
    arearec(area,len,bre);



}
void areasq(int side)
{
    side=side*2;
    printf("Area of square is : %d ",side);

}
void areacircle(float radius)
{

    radius=3.14*radius*radius;
    printf("Area of a circle is : %d ",radius);

}
void arearec(int area , int len , int bre)
{

area= len+bre;
printf("Area of a rectangle is : %d ",area);

}