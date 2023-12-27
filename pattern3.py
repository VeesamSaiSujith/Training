# Enter your code here
import math
n=int(input())
q=math.floor(n/3)
s1=(n-1)*"1"+"0"
s2="1"+(n-2)*"0"+"1"
for i in range(2):
    print(s1+"\n")
    for j in range(q):
        print(s2+"\n")
print(s1)
    