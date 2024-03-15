#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        long long a[n];
        for(int i=0; i<n ; i++) cin >> a[i];
        sort(a,a+n);
        long long result=0;
        for(int i=0; i<n; i++){
            if(a[i]<=0) continue;
            if(a[i]==result) result++;
            else break;
        }
        cout << result << endl;
    }
    return 0;
}