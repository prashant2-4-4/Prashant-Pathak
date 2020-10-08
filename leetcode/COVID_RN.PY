t=int(input())
while(t>0):
    t-=1
    n,k,x,y=map(int,input().split())
    c=x
    for i in range(1,n,1):
        c=c+k
        if(c>n-1):
            c=c-n
        if(c==y):
            print("YES")
            break
    if(c!=y):
        print("NO")
