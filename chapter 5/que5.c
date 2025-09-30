#include<stdio.h>
void namaste();
void bonjour();
int main(){

    printf("Enter F for french & i for indian : ");
    char ch;
    scanf("%c",&ch);
    if (ch=='i'){
        namaste();
    }
    if (ch == 'f'){
        bonjour();
    }
}
void namaste(){

    printf("namaste");
}
void bonjour(){

    printf("bonjour");
}