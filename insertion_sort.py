def insertion(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key

arr = [ 24, 56, 2, 90, 5, 7]
print("Array before sorting: ", arr)
insertion(arr)
print("Array after sorting: ", arr)