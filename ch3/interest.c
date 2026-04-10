#include <stdio.h>
#include <math.h>

double calculate_future_value (int years, int savings, float interest);

int main(void)
{
    int years = 15;       /* The number of years you will
                           * keep the money in the bank
                           * account */
    int savings = 99000;  /* The inital amount */
    float interest = 1.5; /* The interest in % */
    double total_value = calculate_future_value( years, savings, interest);
    printf("The total savings after %d years is %.2f\n",
           years, total_value);
    return 0;
}

double calculate_future_value (int years, int savings, float interest)
{   
    return savings * pow(1 + (interest / 100), years);
}
