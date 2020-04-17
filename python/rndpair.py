from collections import Counter
for _ in range(input()):
    n = input()
    n = float(n)
    arr = map(int, raw_input().split())
    arr.sort(reverse = True)
    counts = Counter(arr)
    if arr[0] == arr[1]:
        ca = counts[arr[0]]
        ca = float(ca)
        ans = ((ca) * (ca-1))/(n*(n-1))

    else:
        # Find the count of second largest element in the array
        ca = counts[arr[1]]
        ca = float(ca)
        ans = ca/((n*(n-1))/2)
    print "%.8f" %(ans)
