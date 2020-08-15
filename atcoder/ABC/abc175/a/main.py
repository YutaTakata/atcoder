#!/usr/bin/env pypy3
 
def main():
    string = input()
    count = 0
    maxv = -1
    for s in string:
        if s == "R":
            count = count + 1
        else:
            maxv = max(count, maxv)
            count = 0
    maxv = max(count, maxv)
    print(maxv)
 
main()