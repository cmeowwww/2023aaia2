#include <stdio.h>
int main()
{
    char line[80];
    printf("請輸入一行英文,有沒有空格沒關西:\n");
    gets(line);
    printf("這行字是:%s\n",line);

    printf("請輸入一行英文:\n");
    scanf("%S",line);

    printf("這行字是%s\n",line);

}
