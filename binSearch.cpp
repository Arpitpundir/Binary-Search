#include<bits/stdc++.h>
using namespace std;
int binSearch(vector<int> a, int val){
  int lo = 0, hi = a.size()-1;

  while(lo<hi){
    int mid = lo+floor((hi-lo+1)/2);
    if(target<mid){
      hi = mid-1;
    }else{
      st = mid;
    }
  }

  return a[lo]==val?a[lo]:-1;
}