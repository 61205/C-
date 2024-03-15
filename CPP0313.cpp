#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int m=a.find(b);
    for(int i=0; i<m; i++) cout << a[i];
    for(int i=m+b.length(); i<a.length(); i++) cout << a[i];
    return 0;
}