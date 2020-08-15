#!/usr/bin/env pypy3

def main():
    N, K = map(int, input().split())
    P = list(map(int, input().split()))
    C = list(map(int, input().split()))
    P = [i-1 for i in P]
    C = [i-1 for i in C]

    score_table = [[0 for i in range(N)] for _ in range(N)]
    maxv = - int(1e9 + 100)
    max_index = 0
    max_value = 0
    for i in range(N):
        count = 0
        index = i
        while count < N-1:
            index = P[index]
            score_table[i][count + 1] = score_table[i][count] + C[index]
            maxv = max(maxv, score_table[i][count+1])
            if index == i:
                if score_table[i][count + 1] > 0 and score_table[i][count + 1] > max_value:
                    max_index = i
                    max_value = score_table[i][count + 1]
                break
            count = count + 1
    if K <= N:
        print(maxv)
    else:
        resd = K % N
        cnt = K // N
        addm = 0
        for i in range(0, resd):
            addm = max(addm, score_table[max_index][i])
        print(cnt * max_value + addm)

main()
