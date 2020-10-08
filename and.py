# cook your dish here
def chek(n):
    return(n!=0 and (n&(n-1)==0))
    
t=int(input())

while(t>0):
    a="2 3 1 5 4"
    t-=1
    n=int(input())
    if(n==1):
        print(1)
        continue
    elif(n==3):
        print("1 3 2")
        continue
    elif(n==5):
        print(a)
        continue
    elif(chek(n)):
        print(-1)
        continue
    else:
        i=6
        while(i<=n):
            if(chek(i)):
                a=a+" "+str(i+1)+" "+str(i)
                i+=2
            else:
                a=a+" "+str(i)
                i+=1
        print(a)
