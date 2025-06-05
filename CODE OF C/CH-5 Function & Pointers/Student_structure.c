#include <stdio.h> 
#include <string.h>

struct Student{
    char name[20];
    int rollno;
    float attendance;
    char status[10];
};

void assignStatus(struct Student *s){
    if(s->attendance < 75)
        strcpy(s->status,"Debarred");
    else    
        strcpy(s->status,"Allowed");
}
int main(){
    struct Student s;

    printf("Enter The name: ");
    gets(s.name);

    printf("Enter the roll no: ");
    scanf("%d",&s.rollno);

    printf("Enter the Attandance: ");
    scanf("%f",&s.attendance);

    assignStatus(&s);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.rollno);
    printf("Attendance: %.2f%%\n", s.attendance);
    printf("Status: %s\n", s.status);
    
    return 0;
}