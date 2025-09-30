#include<stdio.h>
int fact (int n);

int main(){
    printf("sum is : %d",fact(5));


}
int fact (int n){
    if (n == 1){

        return 1;
    }
    int factNm1 = fact(n-1);
    int factn = factNm1 * n;
    return factn;
}