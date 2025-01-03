#include<stdio.h>
#include<string.h>
struct Marksheet
{
    int roll_number;
    char name[50];
    int chemistry;
    int mathematics;
    int physics;
};
void main( average){
    int total;
    struct Marksheet student1, student2,student3,student4,student5;
    student1.roll_number=121;
    strcpy(student1.name,"raj patel");
    student1.chemistry=95;
    student1.mathematics=90;
    student1.physics=85;

    student2.roll_number=122;
    strcpy(student2.name,"divya sharma");
    student2.chemistry=92;
    student2.mathematics=80;
    student2.physics=84;

    student3.roll_number=123;
    strcpy(student3.name,"piyush mishra");
    student3.chemistry=72;
    student3.mathematics=87;
    student3.physics=93;

    student4.roll_number=124;
    strcpy(student4.name,"vatsal mangukiya");
    student4.chemistry=68;
    student4.mathematics=96;
    student4.physics=85;

    student5.roll_number=125;
    strcpy(student5.name,"sagar trivedi");
    student5.chemistry=91;
    student5.mathematics=89;
    student5.physics=90;
  
    printf("name:%s\n",student1.name);
    printf("chemistry:%d\n",student1.chemistry);
    printf("mathematics:%d\n",student1.mathematics);
    printf("physics:%d\n",student1.physics);
    total=student1.chemistry+student1.mathematics+student1.physics;
    average=total/3;
    printf("percentage of student 1 is %d\n",average);
    printf("name:%s\n",student2.name);
    printf("chemistry:%d\n",student2.chemistry);
    printf("mathematics:%d\n",student2.mathematics);
    printf("physics:%d\n",student2.physics);
    total=student2.chemistry+student2.mathematics+student2.physics;
    average=total/3;
    printf("percentage of student 2 is %d\n",average);
    printf("name:%s\n",student3.name);
    printf("chemistry:%d\n",student3.chemistry);
    printf("mathematics:%d\n",student3.mathematics);
    printf("physics:%d\n",student3.physics);
    total=student3.chemistry+student3.mathematics+student3.physics;
    average=total/3;
    printf("percentage of student 3 is %d\n",average);
    printf("name:%s\n",student4.name);
    printf("chemistry:%d\n",student4.chemistry);
    printf("mathematics:%d\n",student4.mathematics);
    printf("physics:%d\n",student4.physics);
    total=student4.chemistry+student4.mathematics+student4.physics;
    average=total/3;
    printf("percentage of student 4 is %d\n",average);
    printf("name:%s\n",student5.name);
    printf("chemistry:%d\n",student5.chemistry);
    printf("mathematics:%d\n",student5.mathematics);
    printf("physics:%d\n",student5.physics);
    total=student5.chemistry+student5.mathematics+student5.physics;
    average=total/3;
    printf("percentage of student 5 is %d\n",average);
}