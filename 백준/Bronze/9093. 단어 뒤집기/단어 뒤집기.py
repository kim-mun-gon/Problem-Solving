import sys

input = sys.stdin.readline

n = int(input())

for _ in range(n):
    word = list(input().split())
    for i in word:
        print(i[::-1], end=" ")