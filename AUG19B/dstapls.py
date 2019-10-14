#!/usr/bin/python3

try:
    t = (int)(input())
except:
    quit()
while( t > 0 ):
    try:
        n, k = map(int, input().split())
    except:
        quit()
    if ( n % ( k * k ) == 0 ):
        print("NO")
    else:
        print("YES")
    t = t - 1
