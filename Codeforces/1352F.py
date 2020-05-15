for _ in range(int(input())):
	s0 = ''
	s1 = ''
	s2 = ''
	s = ''
	p = 0
	n0,n1,n2 = map(int,input().split())
	if n0 == 0 and n1 == 0:
		s = (n2+1)*('1')
	elif n1 == 0 and n2 == 0:
		s = (n0 + 1)*('0')
	elif n0 == 0 and n2 == 0:
		for i in range(n1+1):
			s += str(i%2)
	else:
		s = '1' + (n0+1)*('0')
		n1 -= 1
		while n1 > 0:
			if p%2 == 0:
				s += '1'
			else:
				s += '0'
			p += 1
			n1 -= 1
		s = n2*'1' + s

	print(s)

