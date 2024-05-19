a=[[1,2,3],[4,5,6],[7,8,9]]
res=[[0,0,0],[0,0,0],[0,0,0]]

print("Original is:",a)

for i in range(len(a)):
    for j in range(len(a[0])):
                   res[i][j]=a[i][j]

print("Transpose is")

for r in res:
    print(r)
