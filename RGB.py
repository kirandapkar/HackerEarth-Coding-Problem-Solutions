    '''
    # Sample code to perform I/O:
     
    name = input()                  # Reading input from STDIN
    print('Hi, %s.' % name)         # Writing output to STDOUT
     
    # Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
    '''
     
    # Write your code here
    import math as m
    T = input()
    R = int(T.split()[1])
    G = int(T.split()[2])
    B = int(T.split()[3])
    T = int(T.split()[0])
    l = [0]*8
    # print()
    for i in range(T):
        ans  = 4*m.floor((i/R)%2)+2*m.floor((i/G)%2)+m.floor((i/B)%2)
        l[ans] = l[ans]+1
    t = [0]*8
    t[7] = l [0]
    t[2] = l[1]
    t[1]=l[2]
    t[4] = l[3]
    t[0]=l[4]
    t[5]=l[5]
    t[3]=l[6]
    t[6]=l[7]
    for i in t:
        print(i,end=" ")