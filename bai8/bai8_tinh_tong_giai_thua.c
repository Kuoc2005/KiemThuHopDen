#include <stdio.h>

// Ham tinh giai thừa cua k
long long giaiThua(int k)
{
    long long fact = 1;
    for (int i = 1; i <= k; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;

    printf("Nhap n (1 <= n <= 20): ");
    if (scanf("%d", &n) != 1)
    {
        printf("Du lieu nhap vao khong hop le.\n");
        return 0;
    }

    if (n < 1 || n > 20)
    {
        printf("n phai nam trong khoang 1 den 20.\n");
        return 0;
    }

    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += giaiThua(i);
    }

    printf("Tong S = %lld\n", sum);

    return 0;
}