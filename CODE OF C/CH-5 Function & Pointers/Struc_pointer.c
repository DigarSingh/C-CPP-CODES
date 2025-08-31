#include<stdio.h>
struct Student {
     char name[50];
     int age;
     float marks;
};

void printStudent(struct Student *s) {
     printf("Name: %s\n", s->name);
     printf("Age: %d\n", s->age);
     printf("Marks: %.2f\n", s->marks);
}
int main(){
     struct Student s1 = {"Digar", 20, 89.5};
     struct Student *ptr = &s1;
     printStudent(ptr);
}