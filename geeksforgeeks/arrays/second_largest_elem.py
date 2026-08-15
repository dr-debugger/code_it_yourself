def getSecondLargest(arr):
    first = second = -1
    for num in arr:
        # print(num)
        if num > first:
            second = first
            first = num
        elif num < first and num > second:
            second = num
    return second


print(getSecondLargest([2, 4, 1, 8, 9, 10, 3, 15, 40, 39, 5]))

# https://www.geeksforgeeks.org/problems/second-largest3735/1?page=1&category=Arrays&sortBy=submissions
