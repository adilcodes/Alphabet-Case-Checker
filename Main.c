#include <stdio.h>

int main(){

    printf("Hello World! Welcome \n");
    char alpha;
    printf("Enter the Alphabet = ");
    scanf("%c", &alpha);
    if(alpha>=65 && alpha<=90){
        printf("Your entered alphabet is Uppercase");
    }else if(alpha>=97 && alpha<=122){
        printf("Your entered alphabet is Lowercase");
    }else{
        printf("You have entered wrong value");
    }
    return 0;
}