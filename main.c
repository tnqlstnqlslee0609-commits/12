#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int ID;          //학번
    char name[30];   //이름
    float grade;     //학점
};


int main(void)
{
    struct student s1 = {100, "Juyeop", 4.3};

    s1.ID = 101;
    strcpy(s1.name, "Juyeop2");
    s1.grade = 2.2;

    printf("ID:%i, name:%s, grade:%f\n", s1.ID, s1.name, s1.grade);

    return 0;
}