#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
};

void sortByAge(struct Student arr[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i].age > arr[j].age) {
                struct Student temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


int main() {
    int N = 5;
    struct Student arr[N];

    int id, age;
    char name[50];

    for (int i = 0; i < N; i++) {
        printf("Enter Student ID: ");
        scanf("%d", &id);
        printf("Enter student name: ");
        scanf("%s", name);
        printf("Enter student age: ");
        scanf("%d", &age);
        printf("\n");

        arr[i].id = id;
        arr[i].age = age;
        strcpy(arr[i].name, name);
    }

    sortByAge(arr, N);

    for (int i = 0; i < N; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("   ID: %d\n", arr[i].id);
        printf("   Name: %s\n", arr[i].name);
        printf("   Age: %d\n", arr[i].age);
    }

    return 0;
}
