#include <stdio.h>
#define second_per_minute 60; //상수선언

int main(void)
{
    int input = 1000;
    int minute = input / second_per_minute;
    int second = input / second_per_minute;
    printf("%d초 %d분 %d초 입니다. \n", input, minute, second);

    return 0;

}