n,m = map(int,input().split())
rows=[input() for _ in range(n)]
k=int(input())
l= sorted(rows, key = lambda row: int(row.split()[k]))
for i in l:
    print(i)
