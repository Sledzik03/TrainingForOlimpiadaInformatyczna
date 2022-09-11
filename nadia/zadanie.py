def szukaj(T, szukana): 
   n = len(T) 
   for i in range(n):
      if T[i] == szukana:
         return i
   return -1 
print(szukaj ( [7, 5, 6, 4, 5, 3, 4, 8, 2, 3], 3))
print (szukaj ([9, 5, 6, 4, 5, 3, 4, 8, 2, 31], 23))
 
