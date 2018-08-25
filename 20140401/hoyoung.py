# https://www.acmicpc.net/problem/1003

count = [0] * 41
count[0]= count[1] = 1

def fact(n):
        if n<2:
                return
        global count
        for i in range(2, n):
                count[i] = count[i-1] + count[i-2];

fact(40)
n=input()
for i in range(n):
        x=input()
        if x == 0:
                print 1, 0
        elif x == 1:
                print 0, 1
        else:
                print count[x-2], count[x-1]