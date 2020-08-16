#!/usr/bin/env pypy3

def main():
    N, K = map(int, input().split())
    P = list(map(int, input().split()))
    C = list(map(int, input().split()))
    P = [i-1 for i in P]
    ans = -1e19

    for si in range(N):
        index = si
        cycle =[]
        total = 0
        while True:
            index = P[index]
            cycle.append(C[index])
            total = total + C[index]
            if index == si:
                break
        cycle_length = len(cycle)
        count = 0
        for i in range(cycle_length):
            count  = count + cycle[i]
            if i+1 > K:
                break
            num = count
            if total > 0:
                cnt = (K - (i+1)) // cycle_length
                num = num + cnt*total
            ans = max(ans, num)
    print(ans)


main()
