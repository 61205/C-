#include<iostream>
#include<string>
using namespace std;
bool isvowel(char c){
    c=tolower(c);
    return c=='a' || c=='e'|| c=='o'|| c=='u'|| c=='i';
}
string remove(const string &s){
    string result="";
    for(char c:s){
        if(!isvowel(c)){
            if(!result.empty()&& !isvowel(result.back())) result+='.';
            result+=tolower(c);
        }
    }
    return result;
}
int main(){
    string s;
    cin>> s;
    cout << remove(s) << endl;
    return 0;
}