from collections import Counter

def most_common(word):
    c = Counter(word.upper()).most_common(2)
    return c[0][0] if len(c) == 1 or c[0][1] != c[1][1] else '?'

word = raw_input()
print most_common(word)
