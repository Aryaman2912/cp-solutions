for _ in range(int(input())):
	n = int(input())
	flag=0
	a = [0]*n
	p = list(map(int,input().split()))
	q = list(map(int,input().split()))
	for i in range(1,p[0]+1):
		a[p[i]-1] += 1
	for j in range(1,q[0]+1):
		a[q[j]-1] += 1
	for k in range(n):
		if a[k]:
			continue
		else:
			flag=1
			break
	if flag == 1:
		print("NO")
	else:
		print("YES")
