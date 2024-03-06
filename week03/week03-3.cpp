///week03-3.cpp(不是.C)

#include <stdio.h>
int main()
{

    int a=10;
    printf("%5d 占5格\n",a);
    float pi=3.14159265359;
    printf("%f 浮點數只有8格\n",pi);
    printf("%12f 如果印12格,結果是對齊右邊\n",pi);
    printf("%12.10f 印12格,點的右邊\n",pi);
    double pi2=3.14159265359;
    printf("%12.10f 兩倍浮點數double印右邊10格\n",pi2);

}
