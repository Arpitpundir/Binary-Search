#When there are multiple copies of val are present and we need iindex of first copy of val
def binSearchLowerBound(a, val):
    s = 0
    e = len(a)-1
    ans = -1
    #ans would be -1 if val is not present and if the val is present than it would be pointing to one 
    #of the copy of val, but by the end it ans would point the first copyof the val

    while(s <= e):
        #print(s, '', e)
        mid = int((s+e)/2)
        if(a[mid] == val):
            ans = mid
            e = mid - 1
            #this maybe the first copy of val so we will store it in ans but if it not then first copy 
            #would be only in the left part of search space so e = mid-1
        elif(a[mid] < val):
            s = mid+1
        else:
            e = mid-1
    return ans

def binSearchUpperBound(a, val):
    s = 0
    e = len(a)-1
    ans = -1
    while(s <= e):
        #print(s," ", e)
        mid = int((s+e)/2)
        if(a[mid] == val):
            ans = mid
            s = mid+1
            #as mid is a possible answer so we will store it in var ans, but as there maybe other copies
            #present so we will keep searching right part of array
        elif(a[mid] < val):
            s = mid+1
        else:
            e = mid-1
    return ans

n = int(input())
a = [int(x) for x in input().split()]
t = int(input())
while(t):
    t-=1
    val = int(input())
    print(binSearchLowerBound(a, val), " ", binSearchUpperBound(a, val))