#include <stdio.h>

int main() {
    char desiredGrade;
    float minimumAverage, currentAverage;
    int weightage;
    
    printf("Enter desired grade >");
    scanf("%c", &desiredGrade);
    getchar();
    printf("Enter minimum average required > ");
    scanf("%f", &minimumAverage);
    getchar();
    printf("Enter current average in course > ");
    scanf("%f", &currentAverage);
    printf("Enter how much the final counts as a percentage of the course grade > ");
    scanf("%d", &weightage);

    if(weightage <= 0 || weightage >= 100) {
        printf("Invalid input");
        return 1;
    }

    float currentContribution = currentAverage * (1.0 - (weightage/100.0));
    float scoreNeeded = minimumAverage - currentContribution;
    float requiredFinalScore = scoreNeeded/(weightage/100.0);

    if(requiredFinalScore > 100) {
        printf("You cannot get your desired result!\n");
    } else if( requiredFinalScore < 0) {
        printf("You already have enough marks!\n");
    } else {
        printf("You need to score %.2f in finals to get %c grade\n", requiredFinalScore, desiredGrade);
    }

    return 0;

}
