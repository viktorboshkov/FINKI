#include <stdio.h>

int main() {
    int subjectNo = 0, // број на предмети кои ги полагал студентот
        grade, // оценка
        failedSubjects = 0;
    float score, // просек базиран на внесени оценки
        sum = 0; // сума на поени собрани од оценки


    // читање на оценките додека не се внесе крај на влезот
    while (scanf("%d", &grade)) {
        // програмата ќе заврши ако се внеси буква или нешто што не е број
        if (grade >= 6 && grade <= 10) {
            sum += grade;
            subjectNo++;
        }
        else if(grade == 5){
            failedSubjects++;
        }
        else {
            printf("Not a valid grade\n");
        }
    }

    score = sum / subjectNo; // пресметка на просекот
    printf("Score: %.2f\n", score); // прикажување на просекот

    // прикажување на бројот на предмети на кои паднал студентот
    printf("Number of failed subjects: %d\n", failedSubjects);

    return 0;
}
