
#PYTHON
T = int(input())

while(T > 0):
    N = input()
    sum = 0
    for i in range(0, len(N)):
        sum = sum + int(N[i])
    T = T-1
    print(sum)
