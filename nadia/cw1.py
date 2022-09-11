def szukaj(T, szukana):
n = len(T)
for i in range(n):
if T[i] != szukana:
return "TAK"
return "NIE"


print(szukaj ( [7, 5, 6, 4, 5, 3, 4, 8, 2, 3], 15.125))
print (szukaj ([15.125, 15.125], 15.125))
