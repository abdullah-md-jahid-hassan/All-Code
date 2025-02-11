num = list(map(int, input("").split())) #split the input, map it then convert into list
result = 0
for i in num:
    if i % 2 == 0:
        result += i
print(result)
