
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
double convert(int feet, int inch);


int main(int argc, char** argv) {

    int a,b;
    float ans;
    printf("Enter your hight:\n Feets:");
    scanf(" %d", &a);
    printf("Inches:");
    scanf(" %d", &b);
    
    if(a>0 || b>0){
        ans = convert(a,b);
        printf("hight:%f",ans);
    }
    return (EXIT_SUCCESS);
}

double convert(int feet, int inch){
    float c;
    feet =(float) feet*304;
    inch =(float) inch*25;
    c=(feet+inch)/1000.0;
    return c;
}