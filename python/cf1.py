def check(n,k):
    l=[]
    for j in range(n):
        a=int(input())
        if(a%k==0):
            l.append("1")
        else:
            l.append("0")
    return("".join(l))

t=int(input())
for i in range(t):
    n,k=map(int,input().split())
    x=check(n,k)
    print(x)
