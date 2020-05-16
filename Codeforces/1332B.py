l = [2,3,5,7,11,13,17,19,23,29,31]
for _ in range(int(input())):
	n = int(input())
	div = {}
	col = [0]*n
	m = 1
	a = list(map(int,input().split()))
	for j in range(11):
		for i in range(n):
			if a[i]%l[j] == 0 and col[i] == 0:
				col[i] = m
				div[l[j]] = m
				m += 1
				break
	for i in range(n):
		for j in range(len(l)):
			if a[i]%l[j] == 0 and col[i] == 0:
				col[i] = div[l[j]]
				break
	print(max(col))
	print(" ".join(str(item) for item in col))
