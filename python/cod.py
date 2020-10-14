def check():
    ad=0
    n=int(input())
    l=list(map(int,input().split()))
    for j in range(1,n,1):
        ad+=(abs(l[j]-l[j-1])-1)
     
    return(ad)

t=int(input())
for i in range(t):
    sm = check()
    print(sm)
