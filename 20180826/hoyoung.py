n, k = [int(i) for i in input().split(" ")]
word = input()

s = 0
for i in range(1, n):
    if word[:i] == word[-i:]:
        s = i

prefix = word[:-s] if s > 0 else word
suffix = word[-s:] if s > 0 else ""

ans = ""
for i in range(k):
    ans += prefix
ans += suffix

print(ans)