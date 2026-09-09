#include <stdio.h>

int main()
{
    double a, b, c;

    printf("Nhap canh a: ");
    if (scanf("%lf", &a) != 1)
    {
        printf("Du lieu nhap vao khong hop le.\n");
        return 0;
    }

    printf("Nhap canh b: ");
    if (scanf("%lf", &b) != 1)
    {
        printf("Du lieu nhap vao khong hop le.\n");
        return 0;
    }

    printf("Nhap canh c: ");
    if (scanf("%lf", &c) != 1)
    {
        printf("Du lieu nhap vao khong hop le.\n");
        return 0;
    }

    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Cac canh cua tam giac phai lon hon 0.\n");
        return 0;
    }

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Ba canh khong tao thanh tam giac.\n");
        return 0;
    }

    if (a == b && b == c)
    {
        printf("Day la tam giac deu.\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Day la tam giac can.\n");
    }
    else
    {
        printf("Day la tam giac thuong.\n");
    }

    return 0;
}