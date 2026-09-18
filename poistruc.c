#include <stdio.h>

struct student
{
    int roll_no;
    int marks;
};

int main()
{
    struct student s1;

    struct student *p;

    p = &s1;

    p->roll_no = 101;
    p->marks = 85;

    printf("Roll No: %d\n", p->roll_no);
    printf("Marks: %d\n", p->marks);

    return 0;
}