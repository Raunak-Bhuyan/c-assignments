#include<stdio.h>

struct Student {
   char name[20];
   int age;
   float marks;
};

void displayStudent(struct Student s) {
   printf("Name: %s\n", s.name);
   printf("Age: %d\n", s.age);
   printf("Marks: %.2f\n", s.marks);
}

int main() {
   struct Student s1 = {"John", 20, 80.5};
   displayStudent(s1);
   return 0;
}
