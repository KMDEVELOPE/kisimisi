#include <stdio.h>
#include <stdlib.h>

int input(int *num);

int max_value();

void output();

int main() {
        
    printf("Введите количество элементов в массиве\n");
    
    int num;
    
    if(input(&num))
    {
    exit(1);
    }

    int arr[num];

    for(int i = 0; i < num; i++)
    {        
    if(!scanf("%d",&arr[i]))
    {
    printf("ошибка ввода");

    exit(2);
    }
    }    

    int res;
    
    if(num != 0)
    {
    res = arr[0];
    }
    else
    {
    exit(3);
    }

    for(int i = 0; i < num; i++)
    {
    if(arr[i] < arr[i+1])
    {
    res = arr[i+1];
    }
    

    }
    
    printf("Наибольшее число: %d",res);

    return 0;

}

int input(int *num)
{
 if (scanf("%d",num))
    {

        if(*num == 0)
        {
        printf("Введите число отличное от 0\n");

        return 1;
        }

        else if(*num < 0)
        {
        printf("введите число больше 0");
        
        return 2;
        }

        else
        {
        printf("Введите цифры которые вы хотите записать в массив\n");

        return 0;
        }
    }
    else
    {
    printf("ошибка, введите число");

    return 3;
    }


}
