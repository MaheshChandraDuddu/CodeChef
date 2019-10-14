#!/usr/bin/python3
try:
    t = (int)(input())
except:
    quit()
while( t > 0 ):
    cards = input()
    ones = 0
    zeros = 0
    for c in cards:
        if ( c == '0' ) : zeros = zeros + 1
        else : ones = ones + 1
    if ( ones % 2 == 0 ):
        print("LOSE")
    else:
        print("WIN")
    t = t - 1
