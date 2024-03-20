#瘋狂程設 A008 九九乘法表

for i in range(1,10):
	for j in range(1,10):
		print(f'{j}x{i}={i*j:2}',end=' ')
	print()