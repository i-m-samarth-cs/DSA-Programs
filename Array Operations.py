print("\n Enter Size of Array:")
n=int(input())
arr=[]

i=0

for i in range(n):
    print("\n Enter any Number:")
    item=int(input())
    arr.append(item)
    
print("\n Enter Location to Insert:")
pos=int(input())

print("\n Enter Value to Insert:")
val=int(input())
arr[pos]=val
print("\n Result:",arr)