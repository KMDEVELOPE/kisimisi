#include <stdio.h>

int main() {
    int m[6] = {1,3,4,0,8,6};
    int max = m[0];

    for(int i = 0; i < 6; ++i)
    {
     if(max < m[i])
    {
     max=m[i];
    }

    }    
    
    printf("%d",max);
    
    return 0;

}
