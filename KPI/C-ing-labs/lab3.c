#include <stdio.h>
#include <stdlib.h>

void printName (void);
double averageGrade(unsigned int number_of_subjects);
void printGrade( double ave_grade );
int main()
    {

    unsigned int subjects;
    double mean;

    printName();

    printf("Enter number of subjects. This value must be greater than ZERO.");
    printf("\nOr enter ZERO to exit this program");
    printf("\n\nsubjects= ");
    scanf("%u", &subjects);
    if(subjects == 0 )
    exit(0);
    mean = averageGrade( subjects );
    printGrade( mean );
    return 0;
}

void printName (void) {
    char* name = malloc(sizeof (char*)*100);
    printf("Enter your surname and name: ");
    scanf("%s", name);
}


double averageGrade(unsigned int number_of_subjects)
{
    unsigned int grade, sum;
    double mean_value;
    system("cls");
    printf("Enter grades for each subject. Grade must be between 60...100.");
    printf("\nTotal number of grades equals to %u\n", number_of_subjects);
    sum = 0;
    unsigned int i = 1;
    while(i <= number_of_subjects) {
        do{
            printf("\ngrade %u: ", i);
            scanf("%u", &grade);
        } while( grade < 60 || grade > 100 );

        sum += grade;
        i++;

    }
    mean_value = (double)sum / (double)number_of_subjects;

//     if (mean_value >= 60 && mean_value <= 64) printf("Average grade: %.3lf - Sufficient", mean_value);
//     if (mean_value >= 65 && mean_value <= 74) printf("Average grade: %.3lf - Satisfactory", mean_value);
//     if (mean_value >= 75 && mean_value <= 84) printf("Average grade: %.3lf - Good", mean_value);
//     if (mean_value >= 85 && mean_value <= 94) printf("Average grade: %.3lf - Very good", mean_value);
//     if (mean_value >= 94 && mean_value <= 100) printf("Average grade: %.3lf - Excellent", mean_value);

    return mean_value;

}

void printGrade( double ave_grade ) {
 system("cls");
 printf("\n");
 printf("Average grade: %.1lf\n", ave_grade);

 if (ave_grade >= 60 && ave_grade <= 64) printf("Average grade: %.3lf - Sufficient", ave_grade);
 if (ave_grade >= 65 && ave_grade <= 74) printf("Average grade: %.3lf - Satisfactory", ave_grade);
 if (ave_grade >= 75 && ave_grade <= 84) printf("Average grade: %.3lf - Good", ave_grade);
 if (ave_grade >= 85 && ave_grade <= 94) printf("Average grade: %.3lf - Very good", ave_grade);
 if (ave_grade >= 94 && ave_grade <= 100) printf("Average grade: %.3lf - Excellent", ave_grade);

}