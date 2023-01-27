def findMissing(a, n):
    x1 = a[0]
    x2 = 1

    # XOR all the array elements
    for i in range(1, n-1):
        x1 = x1 ^ a[i]
    # XOR all the integers from 1 to n
    for i in range(2, n+1):
        x2 = x2 ^ i
    # XOR of x1 and x2 gives the missing number
    return x1 ^ x2
