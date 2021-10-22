def isPossible(m, n, x, y, mid):
    if(m+mid*y >= (n-mid)*x):
        return True
    else:
        return False
    
def binSearch(n,m,x,y):
    s = 0
    e = n
    ans = -1
    while(s <= e):
        mid = int((s+e)/2)
        if(isPossible(m, n, x, y, mid)):
            e = mid-1
            ans = mid
        else:
            s = mid+1
    return ans

n, m, x, y = [int(x) for x in input().split()]
ans = binSearch(n, m, x, y)
print(n-ans)
