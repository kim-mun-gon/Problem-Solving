num1 = [4, 9, 5]
num2 = [9, 4, 9, 8, 4]

result = []

for num in num2:
    if num in num1:
        if num in result:
            continue
        result.append(num)

print(result) 