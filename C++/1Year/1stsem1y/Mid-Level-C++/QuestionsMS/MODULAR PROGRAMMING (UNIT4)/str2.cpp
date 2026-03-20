#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int vowels=0, consonants=0, digits=0, spaces=0;
    for(char ch:s){
        ch=toLower(ch);
        if(ch='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                vowels++;
        }
        else if(isalpha(ch)){
                consonants++;
        }
        else if(isdigit(ch)){
            digits++;
        }
        else if(isspace(ch)){
            spaces++;
        }

    }
    cout<<"Number of Vowels: "<< vowels << endl;
    cout<<"Number of Consonants: "<< consonants << endl;
    cout<<"Number of Digits: "<< digits << endl;
    cout<<"Number of White Spaces: "<< spaces << endl;
}