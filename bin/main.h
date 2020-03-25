#include <stdio.h>
#include <string.h>
#define N 30
typedef struct student
{
    long studentID;
    char studentName[10];
    long studentPhone;
}STUDENT;
STUDENT stu[N];
void InputRecord(STUDENT stu[],int n);
void PrintRecord(STUDENT stu[],int n);


