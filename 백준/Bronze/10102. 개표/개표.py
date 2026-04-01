num = int(input())
str = input()

cnt = 0

for _ in str:
    if(_ == "A"):
        cnt += 1

if(cnt > num-cnt):
    print("A")
elif(cnt == num-cnt):
    print("Tie")
else:
    print("B")