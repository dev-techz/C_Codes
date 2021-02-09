#include <stdio.h>

int main()
{
    int a=1189,b=841; // Dimensions Of A0
    int temp;

    for(int no = 0;no < 9;no++)
    {
        printf("A%d Dimensions are %d mm x %d mm.\n",no,a,b);
        temp = b;
        b = a/2;
        a = temp;

    }
    return 0;
}
