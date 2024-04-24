class Solution {
public:      

    int tribonacci(int n){
        int a[40]={0,1,1};///前三項先準備好,後面37項沒寫,就都是0
        for(int i=3;i<=n; i++){
            a[i] = a[i-1] +a[i-2] +a[i-3]; ///前3項相加,得到新的項

        }

        return a[n]; ///算出要第n項
    }
        
    };