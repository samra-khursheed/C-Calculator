/* Project name: Multi-Functional Console Calcultor.
 * Version: 1.0
 * Language: C Programming
 * IDE: Visual Studio Code
 * Compiler: GCC
 * Description: A modular , menu-driven computational tool that performs,
 * standard arithmetic and advanced mathematical operations.
 * Author : [SAMRA KHURSHEED] */

#include <stdio.h>
#include <math.h>
//   --- Function Prototypes ---
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, double exp);
double squareroot(double num);
int modulus(int a, int b);
int main()
{
    int choice;
    double num1, num2, result;
    int int1, int2;
    do
    {
        // --- Displaying the Main Menu Options to the User ---
        printf("====MULTI-FUNCTIONAL CONSOLE CALCULATOR====\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Power(^)\n");
        printf("6. Square root(sqrt)\n");
        printf("7.Modulus (%%)\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = add(num1, num2);
            printf("Result = %.2lf\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = subtract(num1, num2);
            printf("Result = %.2lf\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = multiply(num1, num2);
            printf("Result = %.2lf\n", result);
            break;

        case 4:
            printf("Enter two numbers :");
            scanf("%lf %lf", &num1, &num2);
            if (num2 == 0)
            {
                printf("Error! Division by zero is not allowed.\n");
            }
            else
            {
                result = divide(num1, num2);
                printf("Result =%.2lf\n", result);
            }
            break;

        case 5:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            result = power(num1, num2);
            printf("Result = %.2lf\n", result);
            break;

        case 6:
            printf("Enter number: ");
            scanf("%lf", &num1);
            if (num1 < 0)
            {
                printf("Error! CANNOT find square root of negative number.\n");
            }
            else
            {
                result = squareroot(num1);
                printf("Result = %.2lf\n", result);
            }
            break;

        case 7:
            printf("Enter two integers: ");
            scanf("%d %d", &int1, &int2);
            if (int2 == 0)
            {
                printf("Error! Modulus  by zero is not allowed.\n ");
            }
            else
            {
                printf("Result = %d\n", modulus(int1, int2));
            }
            break;

        case 8:
            printf("Exiting Calculator...\n");
            break;

        default:
            printf("Invalid Selection! PLEASE TRY AGAIN.\n");
        }
    } while (choice != 8);
    return 0;
}
// --- Function Definitions ---
double add(double a, double b)
{
    return a + b;
}
double subtract(double a, double b)
{
    return a - b;
}
double multiply(double a, double b)
{
    return a * b;
}
double divide(double a, double b)
{
    return a / b;
}
double power(double base, double exp)
{
    return pow(base, exp);
}
double squareroot(double num)
{
    return sqrt(num);
}
int modulus(int a, int b)
{
    return a % b;
}
