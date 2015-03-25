#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int convert_time(int h, int m, int s);
int calculate_hours(int sec);
int calculate_minutes(int sec);
int calculate_seconds(int sec);

int main(int argc, char** argv) {

    char name[31];
    char slow_name[31];
    char fast_name[31];
    int hours, minutes, seconds, total, comp, fastest, slowest;

    printf("How many competitors are in the competition?: ");
    scanf(" %d", &comp);

    int i = 0;
    for (i; i < comp; i++) {

        printf("Enter competitor's name: ");
        scanf(" %s", &name);

        printf("Time for cycle race(hours minutes seconds): ");
        scanf(" %d %d %d", &hours, &minutes, &seconds);
        total = convert_time(hours, minutes, seconds);

        printf("Time for swim(hours minutes seconds): ");
        scanf(" %d %d %d", &hours, &minutes, &seconds);
        total = (total + convert_time(hours, minutes, seconds));

        printf("Time for running race(hours minutes seconds): ");
        scanf(" %d %d %d", &hours, &minutes, &seconds);
        total = (total + (convert_time(hours, minutes, seconds)));

        hours = calculate_hours(total);
        minutes = calculate_minutes(total);
        seconds = calculate_seconds(total);
        
        if(total<fastest){
            fastest = total;
            // fast_name[0]= '\0'; 
            strcpy(fast_name, name);
        } else if(total>slowest){
            slowest = total;
            // slow_name[0]= '\0'; 
            strcpy(slow_name, name);
        }
        if(i==0){
            fastest = total;
            // fast_name[0]= '\0'; 
            strcpy(fast_name, name);
        }
        printf("Competitor %s has a total time of: %d Hrs %d Mins %d Secs.\n\n", name, hours, minutes, seconds);
    }
    
    hours = calculate_hours(fastest);
    minutes = calculate_minutes(fastest);
    seconds = calculate_seconds(fastest);
    printf("Fastest competitor %s has a total time of: %d Hrs %d Mins %d Secs.\n", fast_name, hours, minutes, seconds);
    
    hours = calculate_hours(slowest);
    minutes = calculate_minutes(slowest);
    seconds = calculate_seconds(slowest);
    printf("Slowest competitor %s has a total time of: %d Hrs %d Mins %d Secs.\n", slow_name, hours, minutes, seconds);
    return (EXIT_SUCCESS);
}

int convert_time(int h, int m, int s){
    int seconds;
    seconds = ((h * 3600) + (m * 60) + (s));
    return seconds;
}

int calculate_hours(int sec) {
    int h;
    h = sec / 3600;
    return (h);
}

int calculate_minutes(int sec) {
    int m;
    m = (sec % 3600) / 60;
    return (m);
}

int calculate_seconds(int sec) {
    int s;
    s = sec % 60;
    return (s);
}