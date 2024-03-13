#瘋狂程設 A021 N階乘 : 輸入一個非負整數 N 。輸出N!。

a=int(input())

ans=1
for i in range(1,a+1):
	ans *=i
	
print(ans,end='')