
#include <stdio.h>
#include <string.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int l; 
    char string[31]; 
    char s2[31];
    char scombined[61];
    scombined[0] = '\0';
    
    printf("Please type something in (up to 30 chars): ");
    scanf(" %[a-z A-Z0-9]", &string);
    
    l = strlen(string);
    printf("%s is %d characters long", string, l);
    
    printf("\nPlease type something in (up to 30 chars): ");
    scanf(" %s", &s2);
    
    strcat(scombined, string);
    strcat(scombined, s2);
    printf("\n\n%s", scombined);
    
    return (0);
}
