#include <stdio.h>
int main()
{
    int a = 3; ///這裡可以一直改看他做幾次

    while(a>0)
    {
        printf("a是%d\n",a); ///一直印
        a--; ///a-=1的縮寫
    }

    for(int b=3; b>0; b--){
        printf("b是%d\n",b);
    }

}

