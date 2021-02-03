def selection(arr):
    n = len(arr)
    for i in range(n):
        min_val = arr[i]
        for j in range(i, n):
            if arr[j] < min_val:
                arr[j], arr[i] = arr[i], arr[j]
                min_val = arr[j]
    print(arr)

arr = [ 5, 6, 2, 8, 12, 1]
print("Before sorting: ", arr)
selection(arr)
