import sys
sys.stdin = open("전략게임.txt")

DIR = [[0, 1], [1, 0], [0, -1], [-1, 0]]
from collections import deque

T = int(input())
for tc in range(1, T+1):
    N, M = map(int, input().split())
    MAP = [list(map(int, input().split())) for _ in range(N)]
    A, B, C = map(int, input().split())
    Acode = [list(map(int, input().split())) for _ in range(A)]
    Bcode = [list(map(int, input().split())) for _ in range(B)]
    Ccode = [list(map(int, input().split())) for _ in range(C)]
    code = []
    q = deque([0, 0, [], 0])
    while q:
        pass