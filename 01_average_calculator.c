#include <stdio.h>

float getAverage();

int main(void)
{
    int items[2];
    items[0] = 13;
    items[1] = 23;

    printf("Average: %f\n", getAverage(2, items));
}

float getAverage(int length, int items[])
{
    int sum = 0;
    for(int i = 0; i < length; i++)
    {
        sum+= items[i];
    }

    return sum / (float) length;
}