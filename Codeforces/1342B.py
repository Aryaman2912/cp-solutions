for _ in range(int(input())):
    s = input()
    //Period can be 1 or 2. If period is 1, print the string, else insert 0'2 and 1's accordingly to make the period 2
    if s.count('0') == len(s) or s.count('0') == 0 or len(s) <= 2:
        print(s)
    else:
        for i in range(1,2*len(s)-1):
            if i >= len(s):
                break
            else:
   
                if s[i] == s[i-1] and s[i] == '0':
                    s = s[:i] + '1' + s[i:]
                elif s[i] == s[i-1] and s[i] == '1':
                    s = s[:i] + '0' + s[i:]
      
        print(s)