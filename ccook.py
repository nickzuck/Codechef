def sol(count):
    if count == 0:
        print "Beginner"
    if count == 1:
        print "Junior Developer"
    if count == 2:
        print "Middle Developer"
    if count == 3:
        print "Senior Developer"
    if count == 4:
        print  "Hacker"
    if count == 5:
        print "Jeff Dean"

for _ in range(input()):
    arr = map(int, raw_input().split())
    count = 0
    for i in arr:
        if i == 1 :
            count += 1
    sol(count)
