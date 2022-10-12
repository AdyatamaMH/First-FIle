mat = eval(input("Enter the matrix numbers :"))
u_list = []
for i in range(len(mat[0])):
    n_list = []
    for r in mat:
        n_list.append(r[i])
    u_list.append(n_list)
print(f"Result: {u_list}")