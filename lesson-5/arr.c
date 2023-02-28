#include <stdio.h>

int max_value(int arr[], int size_arr);


int main()
{
int arr[5] = {5,2,7,4,1};

int res = max_value(arr, 5);

printf("%d", res);

return 0;
}

int max_value(int arr[], int size_arr)
{
int res = arr[0];

for( int i = 0; i < size_arr; i++)
{
	if(res < arr[i])
        {
	res = arr[i];
        } 

}
return res;
}
