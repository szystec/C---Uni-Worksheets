
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(int argc, char** argv) {

    int a,b,c;
    float ans;
    
    printf("How many conversions would you like to make? ");
    scanf(" %d", &c);
    
    for(int i=0; i<c; i++){
        printf("Enter your hight:\n Feets:");
        scanf(" %d", &a);
        printf("Inches:");
         scanf(" %d", &b);
    
         if(a>0 || b>0){
            ans = convert(a,b);
            printf("hight:%f",ans);
         }
    }
   return (EXIT_SUCCESS);
}

