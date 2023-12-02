def merge_sort(arr):
    if len(arr) < 2:
        return arr
    
    mid = len(arr) // 2
    low_arr = merge_sort(arr[:mid])
    high_arr = merge_sort(arr[mid:])

    merged_arr = []
    l = h = 0

    while l < len(low_arr) and h < len(high_arr):
        if low_arr[l] < high_arr[h]:
            merged_arr.append(low_arr[l])
            l += 1
        else:
            merged_arr.append(high_arr[h])
            h += 1
    
    merged_arr += low_arr[l:]
    merged_arr += high_arr[h:]
    return merged_arr

intervals = [[1, 3], [2, 6], [8, 10], [15, 18]]

result = []
intervals = merge_sort(intervals)
index = 0

while index < len(intervals):
    temp = []
    start = intervals[index][0]
    end = intervals[index][1]
    j = index + 1
    while j < len(intervals) and end >= intervals[j][0]:
        end = max(intervals[j][1], end)
        index = j
        j += 1
    temp.append(start)
    temp.append(end)
    result.append(temp)
    index += 1

print(result)