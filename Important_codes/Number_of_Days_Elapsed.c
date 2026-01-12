#include <stdio.h>

int isLeapYear(int year) {
    if(year % 400 == 0) {
        return 1;
    } else if (year % 100 == 0) {
        return 0;
    } else if (year % 4 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int month, date, year, totalDays=0;
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    getchar();
    printf("Enter date (1-31): ");
    scanf("%d", &date);
    getchar();
    printf("Enter year: ");
    scanf("%d", &year);
    getchar();

    for(int i=0; i<month-1; i++) {
        if(i == 1) {
            if(isLeapYear(year)) {
                totalDays += days[i] + 1;
            } else {
                totalDays += days[i];
            }
        } else {
            totalDays += days[i];
        }
    }

    totalDays += date;

    printf("Number of days elasped: %d\n", totalDays);

    // int num, square = 0;
    // for(num = 0;num < 26;++num) {
    //     square = num * num;
    //     printf("%5d %5d\n", num,square);
    // }
    
    printf("%d\n", EOF);
    return 0;
}
