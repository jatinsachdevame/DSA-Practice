'''
Author: Varnit Sharma(LunaticProgrammer)
Title: Bubble Sort
Time: O(N^2)
'''

inputSize = int(input())
inputList = list(map(int,input().split(' ')))

def bubbleSort(arr,n): 

    # Traverse through all array elements 
    for i in range(n-1): 
    # range(n) also work but outer loop will repeat one time more than needed. 
  
        # Last i elements are already in place 
        for j in range(0, n-i-1): 
  
            # traverse the array from 0 to n-i-1 
            # Swap if the element found is greater 
            # than the next element 
            if arr[j] > arr[j+1] : 
                arr[j], arr[j+1] = arr[j+1], arr[j]
    
    return arr

sortedList = bubbleSort(inputList,inputSize)
print("The sorted list is",end=' ')
print(sortedList)




