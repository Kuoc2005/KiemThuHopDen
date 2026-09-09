#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;

    printf("Nhap a: ");
    if (scanf("%lf", &a) != 1)
    {
        printf("Du lieu nhap vao khong hop le.\n");
        return 0;
    }

    printf("Nhap b: ");
    if (scanf("%lf", &b) != 1)
    {
        printf("Du lieu nhap vao khong hop le.\n");
        return 0;
    }

    printf("Nhap c: ");
    if (scanf("%lf", &c) != 1)
    {
        printf("Du lieu nhap vao khong hop le.\n");
        return 0;
    }

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Phuong trinh vo so nghiem.\n");
            }
            else
            {
                printf("Phuong trinh vo nghiem.\n");
            }
        }
        else
        {
            printf("Phuong trinh co 1 nghiem x = %.2f\n", -c / b);
        }
    }
    else
    {
        double delta = b * b - 4 * a * c;
        if (delta < 0)
        {
            printf("Phuong trinh vo nghiem.\n");
        }
        else if (delta == 0)
        {
            double x = -b / (2 * a);
            if (x == -0.0)
                x = 0.0;
            printf("Phuong trinh co nghiem kep x = %.2f\n", x);
        }
        else
        {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem x1 = %.2f, x2 = %.2f\n", x1, x2);
        }
    }

    return 0;
}