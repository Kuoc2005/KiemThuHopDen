#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;

    printf("Nhap n: ");
    if (scanf("%d", &n) != 1)
    {
        printf("Du lieu nhap vao khong hop le.\n");
        return 0;
    }

    if (n <= 0)
    {
        printf("n phai la so nguyen duong.\n");
        return 0;
    }

    if (isPrime(n))
    {
        printf("%d la so nguyen to.\n", n);
    }
    else
    {
        printf("%d khong phai la so nguyen to.\n", n);
    }

    return 0;
}