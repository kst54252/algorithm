a, b, c = input().split()
a=int(a)
b=int(b)
c=int(c)
if a == b:
    if b == c:
        ans = 10000 + a*1000
    else:
        ans = 1000 + a*100

else:
    if b == c:
        ans = 1000 + b*100
    else:
        if a == c:
            ans = 1000 + a*100
        else:
            ans = max(a, b, c)*100

print(ans)