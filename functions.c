#include <stdio.h>
#include <string.h>
#include "functions.h"
#define MAX_STUDENTS 100

struct Student{
    char firstName[25];
    char lastName[25];
    double gpa;
};

struct Student students[MAX_STUDENTS];

int addStudent(int totalStudents){
    if(totalStudents < MAX_STUDENTS){
    struct Student newStudent;
    printf("Enter first name: ");
    scanf("%s", newStudent.firstName);
    printf("Enter last name ");
    scanf("%s", newStudent.lastName);
    printf("Enter GPA: ");
    scanf("%lf", &newStudent.gpa);

    students[totalStudents] = newStudent;
    }

    else{
        fprintf(stderr, "Error, max amount of students reached!\n");
        return 0;
    }

}

int listStudents(int totalStudents){
    if (totalStudents == 0){
        printf("Error, there are no students in the system!");
    }
    else{
        printf("\nFirst Name\t Last Name\t GPA\n\n");
        for(int i =0; i < totalStudents; i++){
            printf("%-10s\t %-10s\t %.2lf\n", students[i].firstName, students[i].lastName, students[i].gpa);
        }
    }
}

int searchName(int totalStudents){
    char name[25];
    int found = 0;
    printf("\nEnter last name: ");
    scanf("%s", name);
    printf("\n");
    for (int i=0; i<totalStudents; i++){
        if(strcmp(students[i].lastName, name)==0){
            printf("%s, %s\t%.2lf\n", students[i].lastName, students[i].firstName, students[i].gpa);
            found = 1;
        }
    }

    if (found == 0){
        printf("\nNo students with that name were found!\n");
    }
}