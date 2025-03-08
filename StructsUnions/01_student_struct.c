#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
  int roll_number;
  int age;
  double total_marks;
  char name[100];
};

int main() {
  struct Student students[5];
  int n = sizeof(students) / sizeof(struct Student);

  students[0].roll_number = 1;
  strcpy(students[0].name, "Geeks 1");
  // students[0].name = "Geeks1";
  students[0].age = 12;
  students[0].total_marks = 78.50;

  students[1].roll_number = 5;
  strcpy(students[1].name, "Geeks 2");
  students[1].age = 10;
  students[1].total_marks = 56.84;

  students[2].roll_number = 2;
  strcpy(students[2].name, "Geeks 3");
  students[2].age = 11;
  students[2].total_marks = 87.94;

  students[3].roll_number = 4;
  strcpy(students[3].name, "Geeks 4");
  students[3].age = 12;
  students[3].total_marks = 89.78;

  students[4].roll_number = 3;
  strcpy(students[4].name, "Geeks 4");
  students[4].age = 13;
  students[4].total_marks = 78.55;

  printf("========================================\n");
  printf("           Student Records              \n");
  printf("========================================\n");

  for (int i = 0; i < n; i++) {
    printf("\nStudent %d:\n", i + 1);
    printf("  Name        : %s\n", students[i].name);
    printf("  Roll Number : %d\n", students[i].roll_number);
    printf("  Age         : %d\n", students[i].age);
    printf("  Total Marks : %.2f\n", students[i].total_marks);
  }

  printf("========================================\n");

  return 0;
}