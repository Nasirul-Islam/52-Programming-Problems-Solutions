# count=1
# t = int(input())
# while t!=0: 
#     n = int(input())
#     print(f"Case {count}:",end='')
#     for i in range(1, n+1):
#         if n%i==0:
#             print(" ",i,end='')
#     print()
#     t -= 1
#     count += 1

t = int(input())

count = 1
while t != 0:
    n = int(input())
    print("Case {}: ".format(count), end="")
    for i in range(1, n + 1):
        if n % i == 0:
            print(i, end=" ")
    print()
    t -= 1
    count += 1