def peakElement(arr):
    low = 0
    high = len(arr) - 1

    while low < high:
        mid = (low + high) // 2
        if arr[mid] < arr[mid + 1]:
            low = mid + 1
        else:
            high = mid
    return low


print(peakElement([10, 20, 15, 2, 23, 90, 80]))
