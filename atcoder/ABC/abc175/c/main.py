#!/usr/bin/env pypy3

def main():
    X, K, D = map(int, input().split())

    if X - K * D >= 0:
        print(X - K * D)
    elif X + K * D <= 0:
        print(-D * K - X)
    else:
        y = (D * K - X) // (2 * D)
        yy = (D * K - X + 2 * D) // (2 * D)
        print(min(abs(2 * D * y + X - D * K), abs(2 * D * yy + X - D * K)))
main()
