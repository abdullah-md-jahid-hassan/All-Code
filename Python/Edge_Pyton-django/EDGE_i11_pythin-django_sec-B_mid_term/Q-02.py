num = int(input())
if num==0: # if input is zero
    result = 0
else: # other inputs
    result = 1
for i in range(num):
    result *= (i+1) # multiply all numbers one by one
print(result)