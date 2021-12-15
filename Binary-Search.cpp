#include<bits/stdc++.h>
using namespace std;
int binSearch(vector<int> a, int val){
int s = 0, e = a.size()-1, ans = -1, mid;
while(s <= e){
        mid = s+(e-s)/2;
        if(val > a[mid]){
            s = mid;
        }else{
            e = mid-1
        }
    }

  return a[s]==val?a[s]:-1;
}