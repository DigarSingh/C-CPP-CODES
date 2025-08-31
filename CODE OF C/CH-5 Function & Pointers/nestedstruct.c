#include <stdio.h>

struct address{
     char street[50];
     char city[50];
     int postalCode;
};

struct emp{
     char name[10];
     int age;
     float salary;
     struct address Address;
};

void printEmp(struct emp *s){
     printf("Name: %s\n", s->name);
     printf("Age: %d\n", s->age);
     printf("Salary: %f\n", s->salary);
     printf("Street: %s\n", s->Address.street);
     printf("City: %s\n", s->Address.city);
     printf("pinCode: %d\n", s->Address.postalCode);
}

int main(){
     struct emp e1 = {"Digar", 20, 50000.0, {"Nimbuwala", "Dehradun", 248003}};
     printEmp(&e1);
     return 0;
}