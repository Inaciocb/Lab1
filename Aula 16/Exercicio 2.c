#include <stdio.h.>

float realroots(float a, float b, float c, float *x1, float *x2)
{
    float delta = b*b - 4*a*c;
    if(delta < 0)
        return 0;
    else
    {
        *x1 = (-b + sqrt(delta))/(2*a);
        *x2 = (-b - sqrt(delta))/(2*a);
        return 1;
    }
}

int main()
{

    return 0;
}