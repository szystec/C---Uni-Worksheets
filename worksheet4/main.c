#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv){
    
    int x,y,z;
    
    x = 7;
    y = 3;
    
    z = multiply(x,y);
    
    printf("%d * %d = %d\n", x,y,z);
    
    z = get_biggest(x,y);
    printf("Biggest of %d and %d is %d\n", x,y,z);
            
    return(EXIT_SUCCESS);
}
