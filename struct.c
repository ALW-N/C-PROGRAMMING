#include<stdio.h>
typedef char eztext;
struct student{
    eztext firstName[];
    eztext lastName[];
    eztext id[100];
    int score;
}

void displaydetails(struct student std){
    printf("ENTER STUDENT DETAILS \n");
    printf("Enter the Name:");
    scanf("%s",std.firstName);
    printf("Enter the First Name:");
    scanf("%s",std.firstName);
    printf("Enter the Last Name:");
    scanf("%s",std.lastName);
    printf("Enter the id:");
    scanf("%d",std.id);

}

int main(void){
    struct student stdArr[3];
    int n,i;

    for(i=0;i<=n;i++){
        printf('Enter the number of the students: \n');
        scanf("%d",n);
        printf("Enter the First name: ");
        scanf("%s",stdArr[i].firstName);
        printf("Enter the Last name: \n");
        scanf("%s",stdArr[i].lastName);
        printf("Enter the id: \n");
        scanf("%d",stdArr[i].id);
        printf("Enter the Score: \n");
        scanf("%d",stdArr[i].score);
    }
    for(i=0;i<n;i++){
        printf("Student details are: \n")
        displaydetails(stdArr[i]);
    }

}