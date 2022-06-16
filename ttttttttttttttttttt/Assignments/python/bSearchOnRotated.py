# -*- coding: utf-8 -*-
"""
Created on Fri May  6 09:29:28 2022

@author: student
"""

arr = [6,7,12,15, 20, 21, 22,2, 3, 4, 5]

arr = [102, 115, 500, 10, 20, 25]

def findPivot(arr, start, end) -> int :
    mid = int((start+end) / 2)
    if arr[mid] < arr[mid-1]:
        return mid
    elif arr[mid] > arr[0]:
        return findPivot(arr, start+1, end)
    else:
        return findPivot(arr, start, mid-1)

pivot = findPivot(arr, 0, len(arr)-1)
print(pivot)

key = int(input("Enter key: "))
if key < arr[0]:
    res = bSearch(arr, pivot, len(arr)-1, key)
else:
    res = bSearch(arr, 0, pivot-1, key)
    
print(res)
