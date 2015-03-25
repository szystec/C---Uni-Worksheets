#include <stdio.h>
#include <stdlib.h>
#include "competitor.h"

int convert_time(int h, int m, int s);
int calculate_hours(int sec);
int calculate_minutes(int sec);
int calculate_seconds(int sec);
void print_competitors(struct competitor competitorptr);
void sort(struct competitor comparrayptr[]);

int main(int argc, char** argv) {

    struct competitor comp[3];

    int i = 0;
    for (i; i < 3; i++) {

        printf("Enter competitor's name: ");
        scanf(" %s", &comp[i].comp_name);
        comp[i].comp_no = i + 1;

        printf("Time for cycle race(hours minutes seconds): ");
        scanf(" %d %d %d", &comp[i].cycle_h, &comp[i].cycle_m, &comp[i].cycle_s);
        comp[i].cycle_total = convert_time(comp[i].cycle_h, comp[i].cycle_m, comp[i].cycle_s);

        printf("Time for swim(hours minutes seconds): ");
        scanf(" %d %d %d", &comp[i].swim_h, &comp[i].swim_m, &comp[i].swim_s);
        comp[i].swim_total = convert_time(comp[i].swim_h, comp[i].swim_m, comp[i].swim_s);


        printf("Time for running race(hours minutes seconds): ");
        scanf(" %d %d %d", &comp[i].run_h, &comp[i].run_m, &comp[i].run_s);
        comp[i].run_total = convert_time(comp[i].run_h, comp[i].run_m, comp[i].run_s);

        comp[i].total_time = (comp[i].cycle_total + comp[i].run_total + comp[i].swim_total);

        comp[i].hours = calculate_hours(comp[i].total_time);
        comp[i].minutes = calculate_minutes(comp[i].total_time);
        comp[i].seconds = calculate_seconds(comp[i].total_time);

        printf("Competitor %s has a total time of: %d Hrs %d Mins %d Secs.\n\n",
                comp[i].comp_name, comp[i].hours, comp[i].minutes, comp[i].seconds);
    }
    
    printf("\nNAME     competitor  cycle time     swim time      run time         total time\n");
    printf("================================================================================\n");
    
    sort(comp);
    for (i = 0; i < 3; i++){   
       print_competitors(comp[i]);
    }
   
    return (EXIT_SUCCESS);
}

void print_competitors(struct competitor competitorptr) {
    printf("%-15s | %3d  |  %2dH %02dM %02dS  |  %2dH %02dM %02dS  |  %2dH %02dM %02dS  |  %2dH %02dM %02dS\n",

            competitorptr.comp_name, 
            competitorptr.comp_no,
            
            competitorptr.cycle_h,
            competitorptr.cycle_m,
            competitorptr.cycle_s,

            competitorptr.swim_h,
            competitorptr.swim_m,
            competitorptr.swim_s,

            competitorptr.run_h,
            competitorptr.run_m,
            competitorptr.run_s,

            competitorptr.hours,
            competitorptr.minutes,
            competitorptr.seconds);
}

void sort(struct competitor comparrayptr[]){
    int i;
    int j;
    struct competitor temp;
    for (i = 2 /* index of last element of array */; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (comparrayptr[j].total_time > comparrayptr[j+1].total_time)
            {
                temp = comparrayptr[j];
                comparrayptr[j] = comparrayptr[j+1];
                comparrayptr[j+1] =  temp;
            } 
        } 
    } 
}

int convert_time(int h, int m, int s) {
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
