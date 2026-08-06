#include<stdio.h>

int main()
{
    double totalKeys = 1.551121e25;      // 25!
    double effectiveKeys = 1.078556e22;  // 25!/(5!*5!)

    printf("PLAYFAIR CIPHER KEY ANALYSIS\n\n");

    printf("a) Total Possible Keys\n");
    printf("25! = %.3e\n", totalKeys);
    printf("Approximately = 2^84\n\n");

    printf("b) Effectively Unique Keys\n");
    printf("25!/(5!*5!) = %.3e\n", effectiveKeys);
    printf("Approximately = 2^73\n");

    return 0;
}