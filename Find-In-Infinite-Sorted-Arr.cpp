#include<bits/stdc++.h>
using namespace std;
int FindInInfiniteSortedArr(){
  vector<int> a;
  int st = 0, end = 1, val;
  while(val > a[end]){
    st = end;
    end *= 2;
  }
  while(st<=end){
    int mid = st+(end-st)/2;
    if(a[mid] == val){
      return mid;
    }else if(a[mid] < val){
      st = mid+1;
    }else{
      end = mid-1;
    }
  }
}
int main(){
  FindInInfiniteSortedArr();
}