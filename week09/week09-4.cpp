#include <stdio.h>
#include <string.h> ///要使用字串的函式
int main()
{
    char line[100];
    printf("請輸入一行沒有空格的字母,最後跳行結束輸入");
    scanf("%s",line);

    int N= strlen(line);
    printf("字串的長度是:%d\n",N);

    ///strcpy(a, "Hello"); 字串拷貝
    ///strcat(a,b); 字串結合 把右邊b 接到左邊a的後面
    ///strcmp(a,b); 字串比較(逐字母比較,看誰比較大


}
