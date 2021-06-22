#include <stdio.h>

int main()
{
    __builtin_cpu_init();
    if (__builtin_cpu_supports("bmi2"))
    {
        printf("BMI2 supported \n");
    } else {
        printf("BMI2 not supported \n");
    }
    return 0;
}
