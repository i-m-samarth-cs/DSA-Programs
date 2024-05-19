print("\n Enter Size:")
n=int(input())
arr=[]

for i in range(n):
    print("\n Enter any No:")
    val=int(input())
    arr.append(val)

a=int(input("\n Enter any Pos to Delete:"))
del arr[a]

print("\n Result:",arr)
