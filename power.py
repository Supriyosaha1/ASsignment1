L = []
X = 5

target_value=2**X

for i in range(10):
    L.append(2**i)
    
    if target_value==L[i]:
        print("At index:",i)
        break
else:
    print(X, 'not found')
