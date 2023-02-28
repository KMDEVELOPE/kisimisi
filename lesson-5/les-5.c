#include <stdio.h> 

int input(int *kut, int *x);

int sum(int a, int b, int d);

int sub(int a, int b);

int main()
{
int num = 0;

printf("До изменения - %d\n", num);

int result = sum(2, 5, 7);

printf("%d\n", result);

int total = sub( 9, 6);

printf("%d\n", total);

int tea;

input(&num, &tea);

printf("После изменения - %d	%d\n", num, tea);

return 0;
}

int input(int *kut, int *x)
{
*x = 4;

*kut = 5;

printf("нам в теле инпута - %d	%d\n", *kut, *x);

return 0;
}

int sum(int a, int b, int d)
{
int res = a + b + d;

return res;

}

int sub(int a, int b)
{
int res = a - b;

return res;

}
