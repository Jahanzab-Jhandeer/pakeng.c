#include<stdio.h>

void printHello();
void printAssalamu_Alaikum();


int main () {    
char ch;
printf("type P if you are pakistani & type E if you are form england :");
scanf("%c" , &ch);


    if(ch == 'E' || ch =='e') {
        printHello();
    } else if(ch == 'P' || ch == 'p') {
        printAssalamu_Alaikum();
    } else {
        printf("wrong statment\n");
    }
    
    
return 0;
}

void printHello() {
    printf("Hello\n");
}
void printAssalamu_Alaikum() {
    printf("Assalamu_Alaikum\n");
}