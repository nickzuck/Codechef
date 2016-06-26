n, q= map(int, raw_input().split())
arr = map(int, raw_input().split())
mi = min(arr) # Find the minimum in the array
mx = max(arr) # Find the maximum in the array
for _ in range(q):
    t = input()
    if t in range(mi, mx+1):
        print "Yes"
    else:
        print "No"
