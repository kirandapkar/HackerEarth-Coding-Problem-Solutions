t = int(input())
l = [0]*26
for i in range(t):
    s = input()
    count,flag=0,0
    for j in s:
        if j == 'a' or j == 'e' or j == 'i' or j == 'o' or j == 'u' or j == 'y':
            count+=1
            flag=0
        else:
            flag+=1
            if(flag==3):
                print("hard")
                break
    if flag<3:    
        if len(s)-count>count :
            print("hard")
        else:
            print("easy")
