#include <stdio.h>
int z=100; ///外面的giobal variable 全域變數
void myFunc(){  ///我的函式
    int x=20; ///裡面的 local variable 區域變數
    printf("myFunc()裡的x: %d z:%\n",x,z);
    printf("在離開時,順手把x和z都設成0\n");
    x=0;
    z=0;
}
int main () ///主函式 
{
    int x=10;
    printf("main() 裡的x: %d z: %d\n",x,z); ///裡面的 local variable 區域變數
    myFunc();
    printf("main() 裡的x: %d z: %d\n",x,z);
}
