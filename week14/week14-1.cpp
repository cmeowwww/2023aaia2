# include<stdio.h>
void myPrint(int x[3][4]){
    for(int i=1; i<3; i++){ ///����
        for(int j=0; j<4; j++){ ///�k��J
            printf("%2d",x[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int d[3][4];
float globalInt;
int main()
{
    int a[3][4]; ///�}�C���ŧi�A�S���ȷ|�O�ýX
    int b[3][4]={1,2,3}; ///�����Ȧ��S����
    int c[3][4]={ {1,2,3,4},{5,6,7,8},{9,10,11,12} };
    ///��������,����
    myPrint(a);
    myPrint(b);
    myPrint(c);
    myPrint(d);
    int localInt;
    printf("globalInt:%d localInt:%d\n",globalInt,localInt);
}
