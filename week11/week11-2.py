# week11-2.py N! �禡�I�s�禡,��N!
# �� Python Tutor ����
def func(n):
  if n == 1: return 1
  return n * func(n-1)
n = 4 # = int(input('�п�J1�ӼƦr:'))
ans = func(n)
print('���׬O:', ans )
