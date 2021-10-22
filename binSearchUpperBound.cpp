//When there are multiple copies of val are present and we have to find last copy of val
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binSearchUpperBound(vector<int> a, int val){
    int s = 0, e = a.size()-1, ans = -1, mid;
    while(s < e){
        mid = s+floor((e-s+1)/2);
        if(val >= a[mid]){
            s = mid;
        }else{
            end = mid-1
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i = 0;i < n;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    int val;
    cin>>val;
    int res = binSearchUpperBound(a, val);
    if(res == -1){
        cout<<"Sorry "<<val<<" is not present.";
    }else{
        cout<<val<<" is present at "<<res<<" index.";
    }
}