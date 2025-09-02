//scientific calculator
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

long long factorial(int n) {
    if (n < 0) return -1;
    if (n == 0 || n == 1) return 1;
    long long f = 1;
    for (int i = 2; i <= n; i++) f *= i;
    return f;
}

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    int choice;
    double a, b, result;
    do {
        printf("\n--- Scientific Calculator ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Square Root\n");
        printf("7. Log (base e)\n");
        printf("8. Log10\n");
        printf("9. Sine\n");
        printf("10. Cosine\n");
        printf("11. Tangent\n");
        printf("12. Factorial\n");
        printf("13. Modulus\n");
        printf("14. Absolute\n");
        printf("15. Ceiling\n");
        printf("16. Floor\n");
        printf("17. Exponential (e^x)\n");
        printf("18. Cube Root\n");
        printf("19. Reciprocal\n");
        printf("20. Percentage\n");
        printf("21. Square\n");
        printf("22. Permutation (nPr)\n");
        printf("23. Combination (nCr)\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input!\n");
            clear_input_buffer();
            continue;
        }
        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a + b;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a - b;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a * b;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                if (b == 0) {
                    printf("Error: Division by zero!\n");
                } else {
                    result = a / b;
                    printf("Result: %.2lf\n", result);
                }
                break;
            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &a, &b);
                result = pow(a, b);
                printf("Result: %.2lf\n", result);
                break;
            case 6:
                printf("Enter number: ");
                scanf("%lf", &a);
                if (a < 0) {
                    printf("Error: Negative number!\n");
                } else {
                    result = sqrt(a);
                    printf("Result: %.2lf\n", result);
                }
                break;
            case 7:
                printf("Enter number: ");
                scanf("%lf", &a);
                if (a <= 0) {
                    printf("Error: Invalid input!\n");
                } else {
                    result = log(a);
                    printf("Result: %.2lf\n", result);
                }
                break;
            case 8:
                printf("Enter number: ");
                scanf("%lf", &a);
                if (a <= 0) {
                    printf("Error: Invalid input!\n");
                } else {
                    result = log10(a);
                    printf("Result: %.2lf\n", result);
                }
                break;
            case 9:
                printf("Enter angle in radians: ");
                scanf("%lf", &a);
                result = sin(a);
                printf("Result: %.2lf\n", result);
                break;
            case 10:
                printf("Enter angle in radians: ");
                scanf("%lf", &a);
                result = cos(a);
                printf("Result: %.2lf\n", result);
                break;
            case 11:
                printf("Enter angle in radians: ");
                scanf("%lf", &a);
                result = tan(a);
                printf("Result: %.2lf\n", result);
                break;
            case 12: {
                int n;
                printf("Enter integer: ");
                scanf("%d", &n);
                long long f = factorial(n);
                if (f < 0) {
                    printf("Error: Invalid input!\n");
                } else {
                    printf("Result: %lld\n", f);
                }
                break;
            }
            case 13:
                printf("Enter two integers: ");
                int x, y;
                scanf("%d %d", &x, &y);
                if (y == 0) {
                    printf("Error: Division by zero!\n");
                } else {
                    printf("Result: %d\n", x % y);
                }
                break;
            case 14:
                printf("Enter number: ");
                scanf("%lf", &a);
                result = fabs(a);
                printf("Result: %.2lf\n", result);
                break;
            case 15:
                printf("Enter number: ");
                scanf("%lf", &a);
                result = ceil(a);
                printf("Result: %.2lf\n", result);
                break;
            case 16:
                printf("Enter number: ");
                scanf("%lf", &a);
                result = floor(a);
                printf("Result: %.2lf\n", result);
                break;
            case 17:
                printf("Enter number: ");
                scanf("%lf", &a);
                result = exp(a);
                printf("Result: %.2lf\n", result);
                break;
            case 18:
                printf("Enter number: ");
                scanf("%lf", &a);
                result = cbrt(a);
                printf("Result: %.2lf\n", result);
                break;
            case 19:
                printf("Enter number: ");
                scanf("%lf", &a);
                if (a == 0) {
                    printf("Error: Division by zero!\n");
                } else {
                    result = 1.0 / a;
                    printf("Result: %.2lf\n", result);
                }
                break;
            case 20:
                printf("Enter value and total: ");
                scanf("%lf %lf", &a, &b);
                if (b == 0) {
                    printf("Error: Division by zero!\n");
                } else {
                    result = (a / b) * 100;
                    printf("Result: %.2lf%%\n", result);
                }
                break;
            case 21:
                printf("Enter number: ");
                scanf("%lf", &a);
                result = a * a;
                printf("Result: %.2lf\n", result);
                break;
            case 22: {
                int n, r;
                printf("Enter n and r: ");
                scanf("%d %d", &n, &r);
                if (n < 0 || r < 0 || r > n) {
                    printf("Error: Invalid values!\n");
                } else {
                    long long fn = factorial(n);
                    long long fnr = factorial(n - r);
                    if (fn < 0 || fnr < 0) {
                        printf("Error: Overflow!\n");
                    } else {
                        result = (double)fn / fnr;
                        printf("Result: %.0lf\n", result);
                    }
                }
                break;
            }
            case 23: {
                int n, r;
                printf("Enter n and r: ");
                scanf("%d %d", &n, &r);
                if (n < 0 || r < 0 || r > n) {
                    printf("Error: Invalid values!\n");
                } else {
                    long long fn = factorial(n);
                    long long fr = factorial(r);
                    long long fnr = factorial(n - r);
                    if (fn < 0 || fr < 0 || fnr < 0) {
                        printf("Error: Overflow!\n");
                    } else {
                        result = (double)fn / (fr * fnr);
                        printf("Result: %.0lf\n", result);
                    }
                }
                break;
            }
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 0);
    return 0;
}
