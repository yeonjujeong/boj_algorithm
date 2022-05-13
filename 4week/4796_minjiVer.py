import sys

l, p, v = map(int, sys.stdin.readline().split())
case = 0

while(True):
    if l == 0 and p == 0 and v == 0:
        break
    case += 1
    result = 0
    result = (v // p) * l + min(v%p, l)

    print("Case ", case, ": ", result, sep='')

    l, p, v = map(int, sys.stdin.readline().split())