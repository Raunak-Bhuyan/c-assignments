#include<stdio.h>
//call by reference using pointers
struct Student {
   char name[20];
   int age;
   float marks;
};

void displayStudent(struct Student *s) {
   printf("Name: %s\n", s->name);
   printf("Age: %d\n", s->age);
   printf("Marks: %.2f\n", s->marks);
}

int main() {
   struct Student s1 = {"John", 20, 80.5};
   displayStudent(&s1);
   return 0;
}

//call by reference using structure
struct Student {
   char name[20];
   int age;
   float marks;
};
struct Data {
   struct Student s;
};

void displayStudent(struct Data data) {
   printf("Name: %s\n", data.s.name);
   printf("Age: %d\n", data.s.age);
   printf("Marks: %.2f\n", data.s.marks);
}

int main() {
   struct Student s1 = {"John", 20, 80.5};
   struct Data data = {s1};
   displayStudent(data);
   return 0;
}
