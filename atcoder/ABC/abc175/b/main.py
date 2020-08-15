#!/usr/bin/env pypy3

def main():
    N = int(input())
    L = list(map(int, input().split()))
    count = 0
    for i in range(0, N-2):
        for j in range(i+1, N-1):
            for k in range(j+1, N):
                if L[i] == L[j] or L[j] == L[k] or L[i] == L[k]:
                    continue
                if abs(L[j] - L[k]) < L[i] and L[i] < L[j] + L[k]:
                    count = count + 1
    print(count)


main()
