#include<stdio.h>
int main()
{
    char c;
    char s[100];
    printf("�п�J�@��r �̭��i�H���Ů檽����浲��:");
    gets(s);
    printf("�AŪ�J�F:%s\n",s);

    printf("�п�J�A���^��W�r,�̭����঳�Ů�:");
    scanf("%s",s); ///���Υ[&�Ÿ�
    printf("�A���^��W�l'�O:%s",s);


    printf("�Цb��J�@���A���^��W�r");
    scanf("%c",&c); ///���MŪ��F����
    printf("���GŪ��F:%c",c);
}


