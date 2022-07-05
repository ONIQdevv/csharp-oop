#include <stdio.h>
#include <stdlib.h>

void printName (void);
void printGrade(double ave_grade);
double averageGrade(unsigned int number_of_subjects);

int main() {

    unsigned int subjects;
    double mean;

    printName();

    printf("Enter number of subjects. This value must be greater than ZERO.");
    printf("\nOr enter ZERO to exit this program");
    printf("\n\nsubjects= ");
    scanf("%u", &subjects);
    if(subjects == 0)
        exit(0);
    mean = averageGrade(subjects);
    printGrade(mean);
    return 0;
}
void printName (void) {
    char* name = malloc(sizeof (char*)*100);
    printf("Enter your surname and name: ");
    scanf("%s", name);
}

double averageGrade(unsigned int number_of_subjects) {

    unsigned int grade, sum;
    double mean_value;

    system("cls");
    printf("Enter grades for each subject. Grade must be between 60...100.");
    printf("\nTotal number of grades equals to %u\n", number_of_subjects);
    sum = 0;
    int i = 1;
    while(i <= number_of_subjects) {
        while(grade < 60 || grade > 100) {
            printf("\ngrade #%u: ", i);
            scanf("%u", &grade);
        }
        sum = sum + grade;
        i++;
    }
    mean_value = (double)sum / (double)number_of_subjects;

    if (mean_value >= 60 && mean_value <= 64) printf("Average grade: %.3lf - Sufficient", mean_value);
    if (mean_value >= 65 && mean_value <= 74) printf("Average grade: %.3lf - Satisfactory", mean_value);
    if (mean_value >= 75 && mean_value <= 84) printf("Average grade: %.3lf - Good", mean_value);
    if (mean_value >= 85 && mean_value <= 94) printf("Average grade: %.3lf - Very good", mean_value);
    if (mean_value >= 94 && mean_value <= 100) printf("Average grade: %.3lf - Excellent", mean_value);

    return mean_value;
}

void printGrade( double ave_grade ) {
    system("cls");
    printf("\n");
    printf("Average grade: %.3lf\n", ave_grade);
}