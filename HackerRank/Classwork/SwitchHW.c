#include <stdio.h>

int main() {
    int num;
    do {
        printf("Enter a number between 1 and 7: ");
        scanf("%d", &num);
        
        if(day < 1 || day > 7) {
            printf("Please enter a number between 1 and 7: \n");
        }
    } while(num < 1 || num > 7);
    switch(day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
    }
    return 0;
}