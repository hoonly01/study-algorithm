while(1):
    former, latter = map(int, input().split())
    if(former == 0 and latter == 0):
        break
    
    if(former % latter == 0):
        print("multiple")
    elif(latter % former == 0):
        print("factor")
    else:
        print("neither")