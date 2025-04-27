#include <stdio.h>
#include <string.h>
#include <ctype.h>

void secondVersion(int inp){
    int hours, minute, second;
    hours = inp / 3600;
    minute = inp % 3600 / 60;
    second = inp % 3600 % 60;
    printf("%d %d %d \n", hours, minute, second);
}

void minuteVersion(int inp){
    int hours, minute, second;
    hours = inp / 60 ;
    minute = inp % 60;
    second = inp * 60 % 60;
    printf("%d %d %d \n", hours, minute, second);
}

void hourVersion(int inp){
    int hours, minute, second;
    hours = inp;
    minute = inp * 60 % 60;
    second = inp * 60 * 60 % 60;
    printf("%d %d %d \n", hours, minute, second);
}

void toLowerCase(char *choice) {
    while (*choice) {
        *choice = tolower((unsigned char)*choice);
        choice++;
    }
}

int main(){
    int input, hours, minute, second;
    char choice[10], low;
    scanf("%s", choice);
    printf("%s", choice);
    if (strcmp(choice, "second")==0){
        printf("\nEnter a Time in Second: ");
        scanf("%d", &input);
        secondVersion(input);
    } else if (strcmp(choice, "hour")==0){
        printf("\nEnter a Time in Hours: ");
        scanf("%d", &input);
        hourVersion(input);
    } else if (strcmp(choice, "minute")==0){
        printf("\nEnter a Time in Minute: ");
        scanf("%d", &input);
        minuteVersion(input);
    }
    return 0;
}