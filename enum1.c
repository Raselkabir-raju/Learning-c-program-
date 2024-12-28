#include<stdio.h>
enum days_of_week
{
    sun,mon,the,wed,thu,fri,sat
};

int main()
{
    enum days_of_week day1,day2;

    day1 = sun;
    printf("day1 = %d\n",day1);
}