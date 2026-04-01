a, b = map(int, input().split())

if(a >= 0 and b >= 0):
    print(abs(a-b))
elif(a< 0 and b < 0):
    print(abs(a-b))
else:
    print(abs(a)+abs(b))