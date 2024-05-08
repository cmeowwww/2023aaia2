#week12-2.py 列出以下的全部數值

n=int(input())
def isPrime(n):
    for i in range(2,n):
      if n%i==0:
        return False
    return True

for i in range(2,n+1):
  if isPrime(i): print(i ,end='')
