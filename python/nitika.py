for _ in range(input()):
    s = raw_input()
    strings = s.split()
    ans = []
    for i in strings[:-1]:
        ans.append(i[0].upper() + '.')
    ans.append(strings[-1].lower().capitalize())

    print " ".join(ans)
