import math
 
class tr:
    def __init__(self, x, y, r):
        self.x = x
        self.y = y
        self.r = r
 
def check(t1, t2):
     
    rsum = math.pow(t1.r + t2.r, 2);
    rsub = math.pow(t1.r - t2.r, 2);
    dist = math.pow(t2.x - t1.x, 2) + math.pow(t2.y - t1.y, 2)
    if dist == 0:
        if t1.r == t2.r:
            return -1
        else:
            return 0
 
    if dist == rsum or dist == rsub:
        return 1
    elif rsub < dist and dist < rsum:
        return 2
    else:
        return 0
 
 
n = input()
strlist = []
for i in range(0,n):
    strlist.append((raw_input().split()))
 
pset=[]
 
for words in strlist:
    data=[]
    t1 = tr(int(words[0]), int(words[1]), int(words[2]))
    t2 = tr(int(words[3]), int(words[4]), int(words[5]))
    data.append(t1)
    data.append(t2)
    pset.append(data)
 
for data in pset:
    print check(data[0], data[1])
