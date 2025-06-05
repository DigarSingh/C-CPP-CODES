#include <stdio.h>
#define STUDENTS 3
#define SUBJECTS 3

int main(){
    int marks[STUDENTS][SUBJECTS];
    int total[STUDENTS];
    float percent[STUDENTS];
    char status[STUDENTS][10];
    int i,j,topper = 0;
    
    for(i=0;i<STUDENTS;i++){
        printf("Enter marks for Student %d: \n",i+1);
        total[i] = 0;
        int fail = 0;
        for(j=0;j<SUBJECTS;j++){
            printf("Subject %d: ",j+1);
            scanf("%d",&marks[i][j]);
            total[i] += marks[i][j];
            if(marks[i][j] < 40){
                fail = 1;
            }
        }
        percent[i] = total[i]/3.0;
        if(fail)
            sprintf(status[i],"Fail");
        else
            sprintf(status[i],"Pass");
        
        if(total[i] > total[topper]){
            topper = i;
        }
    }
// Display results
    printf("\n--- Student Results ---\n");
    for(i = 0; i < STUDENTS; i++) {
        printf("Student %d → Total: %d, Percentage: %.2f%%, Status: %s\n",i + 1, total[i], percent[i], status[i]);
    }
// List failed students
    printf("\n--- Failed Students ---\n");
    for(i = 0; i < STUDENTS; i++) {
        if(status[i][0] == 'F') {
            printf("Student %d (Total: %d, Percentage: %.2f%%)\n",i + 1, total[i], percent[i]);
        }
    }

    // Topper
    printf("\nTopper: Student %d → Total: %d, Percentage: %.2f%%\n",topper + 1, total[topper], percent[topper]);

    return 0;
}