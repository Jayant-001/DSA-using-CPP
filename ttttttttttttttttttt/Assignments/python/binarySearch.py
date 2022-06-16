# -*- coding: utf-8 -*-
"""
Created on Fri May  6 09:19:18 2022

@author: student
"""

arr = [1,2,3,4,5,6,7,8,9,10]

def bSearch(arr, start, end, key) -> int :
    mid = int((start+end) / 2)
    if start <= end:
        if arr[mid] == key:
            return mid
        elif arr[mid] < key:
            return bSearch(arr, start+1, end, key)
        elif arr[mid] > key:
            return bSearch(arr, start, mid-1, key)
    else:
        return -1

key = int(input("Enter key: "))
res = bSearch(arr, 0, 9, key)
if res == -1:
    print("{} not found".format(key))
else:
    print("Index of {} is {}".format(key,res))