
#we are given an array that is sorted around some element now we have to find some element in this array

def findEleInRotArray(a, val):
    start = 0
    end = len(a)-1
    mid = 0
    while(start <= end):
        mid = int((start+end)/2)
        
        if(a[mid] == val):
            return mid
        #checking if left part is sorted
        elif(a[start] < a[mid]):
            if(a[start] <= val and val < a[mid]):
                #this means val lies in this part so we will search only in this part
                end = mid-1
            else:
                #this means val is present in right part
                start = mid+1
        else:
            #if i come here that means array's left part is not sorted and right part is sorted
            if(a[mid] < val and a[end] >= val):
                #this means val lies in this part so we will search only in this part
                start = mid+1
            else:
                end = mid-1
    return -1

n = int(input())
a = []
for i in range(n):
    a.append(int(input()))
    
val = int(input())
res = findEleInRotArray(a, val)

if(res == -1):
    print("Not present")
else:
    print(res)
