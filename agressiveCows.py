def isPossible(m, c, e):
    lastPlaced = 0
    cows = 1
    for i in range (1, n):
        dist = a[i] - a[lastPlaced]
        if(dist >= m):
            lastPlaced = i
            cows+=1
    if(cows >= c):
        return True
    else:
        return False
def findMaxMinDist(n, c, a):
    s = a[0]
    e = a[n-1] - a[0]
    ans = -1
    while(s <= e):
        mid = int((s+e)/2)
        if(isPossible(mid, c, e)):
            ans = mid
            s = mid+1
        else:
            e = mid-1
    return ans
n, c = [int(x) for x in input().split()]
a = [int(x) for x in input().split()]
a.sort()
print(findMaxMinDist(n, c, a))