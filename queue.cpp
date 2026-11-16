#include<bits/stdc++.h>
using namespace std;
int main() {
    // fstream a("lecture.txt");
    // a<<"hello world"<<endl;
    // return 0;

    fstream file1("lecture.txt");
    if(file1.is_open()==false) {
        cout<<"Fail"<<endl;
    }
    else {
        cout<<"Successfull"<<endl;
    }
    string s;
    file1>>s;
    cout<<s<<endl;
}