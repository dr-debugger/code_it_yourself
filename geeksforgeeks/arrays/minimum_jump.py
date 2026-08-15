def minJumps(arr: list[int]) -> int:
    i = 0
    result = 0
    length = len(arr)
    while(i < length):
        if(i == length - 1):
            break
        if i != length - 1 and arr[i] == 0:
            result = -1
            break
        result += 1
        i += arr[i]
    return result

print(minJumps([0, 10, 20]))

#  https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1?page=1&category=Arrays&sortBy=submissions
