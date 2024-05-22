# include<stdio.h>
void myPrint(int x[3][4]){
    for(int i=1; i<3; i++){ ///左手
        for(int j=0; j<4; j++){ ///右手J
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
    int a[3][4]; ///陣列的宣告，沒給值會是亂碼
    int b[3][4]={1,2,3}; ///有給值但沒給完
    int c[3][4]={ {1,2,3,4},{5,6,7,8},{9,10,11,12} };
    ///全部的值,都給
    myPrint(a);
    myPrint(b);
    myPrint(c);
    myPrint(d);
    int localInt;
    printf("globalInt:%d localInt:%d\n",globalInt,localInt);
}
