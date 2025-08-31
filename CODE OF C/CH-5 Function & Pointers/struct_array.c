#include <stdio.h>

struct Student {
     char name[50];
     int age;
     float marks[5];
};

int main() {
     struct Student s1 = {"Digar", 20, {85.5, 90.0, 78.5, 88.0, 92.5}};
     printf("Name: %s\n", s1.name);
     printf("Age: %d\n", s1.age);
     printf("Marks: ");
     for(int i = 0; i < 5; i++) {
          printf("%.1f ", s1.marks[i]);
     }
     printf("\n");
     return 0;
}