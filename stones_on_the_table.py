# -*- coding: utf-8 -*-
"""
Created on Sun Mar 19 22:26:34 2023

@author: HP
"""

num = int(input())
colors = input()
count = 0

for i in range(0, len(colors) - 1):
    if colors[i] == colors[i+1]:
            count += 1
    else:
           continue
       
print(count)