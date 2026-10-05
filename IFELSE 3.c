#include <stdio.h>

int main()
{
    float gross, allowances, deductions, net;

    printf("Enter gross salary: ");
    scanf("%f", &gross);

    if (gross > 10000)
    {
        allowances = gross * 0.10;
        deductions = gross * 0.03;
    }
    else if (gross > 5000)
    {
        allowances = gross * 0.07;
        deductions = gross * 0.02;
    }
    else
    {
        allowances = 0;
        deductions = 0;
    }

    net = gross + allowances - deductions;

    printf("Allowances = %.2f\n", allowances);
    printf("Deductions = %.2f\n", deductions);
    printf("Net Salary = %.2f\n", net);

    return 0;
}