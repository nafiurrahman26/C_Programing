#include<stdio.h>
struct dob{
    int day,mony,year;
};
struct student{

    int id;
    struct dob d;
};
int main(){
    struct student s1;
    s1.d.day=22;
    printf("%d",s1.d.day);

    return 0;
}