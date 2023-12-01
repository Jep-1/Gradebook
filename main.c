#include <stdio.h>
#include <string.h>
#include "functions.h"

//Testing updated repository.

int main(){
    int choice;
    int totalStudents = 0;
    printf("\nGradebook\n");
    printf("1. Add a new student\n");
    printf("2. List students\n");
    printf("3. Search by last name\n");
    printf("4. Exit\n");
    scanf("%d", &choice);
    do{
        switch(choice){
            case 1:
                addStudent(totalStudents);
                totalStudents++;
                break;
            case 2:
                listStudents(totalStudents);
                break;
            case 3:
                searchName(totalStudents);
                break;
            case 4:
                printf("Have a nice day\n");
                break;
            default:
                printf("Invalid choice! Please enter 1-3");
        }
        if(choice == 4){
            break;
        }
        printf("\n? ");
        scanf("%d", &choice);
    } while(choice != 4);

    return 0;
}
