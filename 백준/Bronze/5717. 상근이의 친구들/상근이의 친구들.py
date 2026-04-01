while(1):
    former, latter = map(int, input().split())
    if(former == 0 and latter == 0):
        break
    
    print(former + latter)