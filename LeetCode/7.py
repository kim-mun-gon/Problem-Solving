x = 123456789
    
if x > 0:
    result = ''
    x_list = list(map(int, str(x)))
    for i in range(len(x_list)-1, -1, -1):
        if i == len(x_list)-1:
            if x_list[i] == 0:
                continue
        result += str(x_list[i])
elif x < 0:
    result='-'
    x *= -1
    x_list = list(map(int, str(x)))
    for i in range(len(x_list)-1, -1, -1):
        if i == len(x_list)-1:
            if x_list[i] == 0:
                continue
        result += str(x_list[i])
else:
    result = 0
if len(str(x)) >= 9:
    result = 0
print(result)