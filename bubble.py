""" Implementation of Bubble Sort with O(n^2) """
def BubbleSort(arr):
    #Length of list
    n = len(arr)

    for i in range(n):
        for j in range(n-1-i):
            #Swap if present ele is greater than next ele
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

#Test values
arr = [5, 90, 34, 2, 6]
print(arr)


BubbleSort(arr)

print("Sorted Array: ", arr)