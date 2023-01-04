#include <iostream>
using namespace std;
int main(){
    string name[100];
    for (int i=0;i<5;i++){
        cin>>name[i];
    }
        for (int i=0;i<5;i++){
        cout<<name[i]<<"  ";
    }
    return 0;
}