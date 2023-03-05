#include <stdio.h>
#include <math.h>

int theory_pifagor(int a, int b, int *c);

int input(int *a, int *b);

int main()
{
int a, b, c;

int err = input(&a, &b);
 
if(err == 0)
{
return -1;

}

err = theory_pifagor(a, b, &c);

if(err != 0)
{
return -1;
}


printf("гипотенуза = %d",c);

return 0;

}

int theory_pifagor(int a, int b, int *c)
{

	if(a == 0 && b == 0) 
	{

	printf("Введите число не равное 0");

	return -1;
	}
	
	if(a < 0 || b < 0)
        {
	printf("Введите число больше 0");
        
        return -1;
	}

a = pow(a, 2);

b = pow(b, 2);

*c = sqrt(a + b);

return 0;

}

int input(int *a, int *b)
{
int err = scanf("%d%d", a, b);

if(err != 2)
{
printf("Пользователь, введите корректные данные\n");

return 0;
}

return 1;
}
