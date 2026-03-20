STRING 
string is a class in C++ that represents a sequence of characters.
 It is part of the C++ Standard Library and provides various functionalities for string manipulation, 
 such as concatenation, comparison, and searching.

strlen(a);
strcat(S1,S2);
strcmp(S1,S2);
strcpy(S1,S2);


char st='abcd';
string str="YASH VAISH";

 Ex-1/

 #include <bits/stdc++.h>

using namespace std;

int main() {
  char st[100];
  cin.getline(st,100);
  int L=strlen(st);
  cout<< L << endl;
  cout<< st;

}


    Ex-2/ CONCATINATION
    
#include <bits/stdc++.h>
using namespace std;
int main() {
 char S1[100], S2[100], S3[100];
 cin.getline(S1,100);
 cin.getline(S2,100);
 int a=strlen(S1);
 int b=strlen(S2);
 
 cout<<a<<endl<<b<< endl;
  strcat(S1,S2);
 cout<< S1;
}

OUTPUT:-
11
11
my name is YASH VAISH


----------------------------------------

ex-2/ 

#include <bits/stdc++.h>
using namespace std;

int main() {
 char S1[100], S2[100], S3[100];
 cin.getline(S1,100);
 cin.getline(S2,100);
 int a=strlen(S1);
 int b=strlen(S2);
 
 cout<<a<<endl<<b<< endl;
  strcat(S1,"hello fellow ");
 cout<< S1;
}

OUTPUT:- 
11
11
my name is hello fellow 

----------------------------------------

EX-3/
#include <bits/stdc++.h>
using namespace std;

int main() {
 char S1[100], S2[100], S3[100];
 cin.getline(S1,100);
 cin.getline(S2,100);
 int a=strlen(S1);
 int b=strlen(S2);
 
 cout<<a<<endl<<b<< endl;
  strcpy(S1,S2);
 cout<< S1;
}
INPUT:-
my name is
YASH VAISH
OUTPUT:-
11
11
YASH VAISH


----------------------------------------
EX-4/ COMPARISION

#include <bits/stdc++.h>
using namespace std;

int main() {
 char S1[100], S2[100], S3[100];
 cin.getline(S1,100); 
 cin.getline(S2,100); 
 int a=strlen(S1);
 int b=strlen(S2);
 
 cout<<a<<endl<<b<< endl;
 cout<< strcmp(S1,S2)<< endl; // it returns the difference of ASCII values of first unmatched character
 cout<< S1;
}
input:-
my name is
YASH VAISH
output:-
11
11
20
my name is  
-----------------------------------------
EX-5/ COMPARISION
 EXPLAIN strcmp function returns:
A negative value if the first string is less than the second string.
A positive value if the first string is greater than the second string.
Zero if both strings are equal.

HOW IT CHECKS:- it compares the strings based on the ASCII values of their characters,
 comparing them character by character from left to right until a difference is found.

#include <bits/stdc++.h>
using namespace std;
int main() {
 char S1[100], S2[100], S3[100];
 cin.getline(S1,100);
 cin.getline(S2,100);
 int a=strlen(S1);
 int b=strlen(S2);
 
 cout<<a<<endl<<b<< endl;
  int res= strcmp(S1,S2);
  if(res==0){
      cout<< "strings are equal";
  }
  else if(res>0){
      cout<< "string 1 is greater";
  }
  else{
      cout<< "string 2 is greater";
  }
}

INPUT :-
my name is
YASH VAISH
OUTPUT:-
11
11
string 1 is greater
EXPLAIN:- because in ASCII 'm' > 'Y'
--------------------------------------------
Q-/ WAP TO FIND OUT WHETHER A GIVEN STRING IS PALINDROME OR NOT. (WITH CHARACTER ARRAYS)

A-/
#include <bits/stdc++.h>
using namespace std;

int main() {
       char s1[100];
       char s2[100];
       cin.getline(s1,100);
       int l=strlen(s1);
       int i,j=0;
       for(int i=l-1; i>=0; i--){
           s2[j]=s1[i];
           j++;
       }
       cout<<"S1 is "<< s1 <<endl;
       cout<<"S2 after reversing is "<< s2 << endl;
         int result= strcmp(s1,s2);
           if (result==0){
               cout<<"It's a Palindrome Word";
           }
           else{
               cout<< "Not a Palindrome Word";
           }
       
}
INPUT:-
madam
OUTPUT:-
S1 is madam
S2 after reversing is madam
It's a Palindrome Word
--------------------------------------------

-----------------------------------------------------------------------
STRING

s.len();
s.size();
strcmp(s1,s2);// not working for string class


CONCEPTS IN STRING CLASS

#include <bits/stdc++.h>
using namespace std;
//NOT A NECESSITY TO USE '='
int main() {
string s1={"HELLO"};
string s2{"HELLO"};
string s3{s1};
string s4={s1,3}; //gives after 3 indexes "LO"
string s5{"WELCOME",3}; //gives first 3 indexes "WEL"
string s6(4,'a');
string s7{"My name is"};
cout<< s7<< endl;
string s8;
getline(cin,s8);
for(char ch:s8){
    cout<< ch<< " ";
}
//different from char function there was cin.getline(s1,100);
// string s8
cout<<endl<< s1 << endl<< s2 << endl<< s3 << endl<< s4<< endl << s5<< endl << s6 <<endl << s7 << endl << s8 << endl << s8;

}


-------------------------------------------------------------------------------------

Q-/ WAP TO FIND OUT THE NUMBER OF OCCURENCES OF A PARTICULAR CHARACTER IN A STRING (FOR EXAMPLE:- "YASH VAISH" , 'A' = 3)
A-/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int counter=0;
   char a='a';
	string s;
	getline(cin,s);
	for(char ch:s){
        ch=tolower(ch);
	    if(a== ch){
	        counter++;
	    }
	}
	cout<<"number of occurences of 'a' "<< counter;
}


-------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1="Hello";
	string s2="class";
	string s3=s1+s2;
	cout<< s1+s2;
		cout<< "HELLO"+s2;
	cout<< s1+ "class";
	cout<< "Hello"+"class"; //error because both are literals (detail reason : memory address issue)

}
OUTPUT:-
Helloclass
HELLOclass
Helloclass

---------------------------------------------------------------------------------

Q-1 WAP TO FIND OUT TWO STRING S1 AND S2 IF THE LENGTH OF S1 IS SAME AS THE LENGTH OF S2
THEN MATCH THOSE STRINGS AND IF LENGTH OF S1 IS GREATER THAN LENGTH OF S2 THEN CONCATINATE S2 WITH S1 AND 
IF THE LENGTH OF S2 IS GREATER THAN LENGTH OF S1 FIND OUT THE NUMBER OF OCCURENCES OF A IN S2.

ANS-#include <iostream>
using namespace std;

int main(){
    
  string s1,s2;
  int counter=0;
  getline(cin, s1);
  getline(cin, s2);
  int l1=s1.length();
  int l2=s2.length();
  cout<<s1<<" "<<s2<<endl;
  if(l1==l2){
      int j=0;
      for(int i=0; i<=l1-1; i++){
          s2[j]=s1[i];
          j++;
      }
      cout<<s2<<" "<<s1;
  }
else if(l1>l2){
    cout<<s2<<endl;
}
else if(l2>l1){
    for(char ch: s2){
        ch=tolower(ch);
        if(ch=='a'){
        counter++;
        }
    }
    cout<< "number of occurences of A in string s2 is " << counter;
}
}

Q-2/ WAP TO INPUT TWO STRINGS MATCH THOSE STRINGS, IF BOTH THE STRINGS ARE SAME THEN CONCATINATE THEM AND IF S1 
GREATER THAN S2 THEN FIND OUT THE SQUARE OF LENGTH OF S1 AND S2 AND ADD THEM, AND IF S2 GREATER THAN S1 
THEN ADD HI AT THE STARTING AND BYE OF THE END OF S2.



Q-/ WAP TO INPUT TWO STRINGS AND FIND OUT THE LAST THREE CHARACTERS OF S1 AND CONCATINATE
THEM AT THE STARTING OF S2.
A-/ 
#include <bits/stdc++.h>
using namespace std;

int main() {
   string s1,s2;
   getline(cin,s1);
   getline(cin,s2);
   int l1=s1.length();
   string last3={s1,l1-3};
   string result=last3+s2;
   cout<<result;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int l1=s1.length();
    string last3=s1.substr(l1-3,3);
    string result=last3+s2;
    cout<< result;
}




Q-/ WAP TO FIND OUT THE NUMBER OF VOWELS AND CONSONANTS IN A STRING.
A-/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int vowels=0, consonants=0;
    for(char ch:s){
        ch=tolower(ch);
        if((ch>='a' && ch<='z')){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
    }
    cout<<"Number of Vowels: "<< vowels << endl;
    cout<<"Number of Consonants: "<< consonants << endl;
}


Q-/ WAP TO FIND OUT NUMBER OF VOWELS AND CONSONANTS AND NUMBER OF DIGIT AND NUMBER OF WHITE SPACES
IN A STRING.
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int vowels=0, consonants=0, digits=0, spaces=0;
    for(char ch:s){
        if(isalpha(ch)){
            ch=tolower(ch);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                vowels++;
            }
            
            else{
                consonants++;
            }
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

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int vowels=0, consonants=0, digits=0, spaces=0;
    for(char ch:s){
        ch=toLower(ch);
        if(ch>='a' && ch<='z'){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
        else if(ch>='0' && ch<='9'){
            digits++;
        }
        else if(ch==' '){
            spaces++;
        }

    }
    cout<<"Number of Vowels: "<< vowels << endl;
    cout<<"Number of Consonants: "<< consonants << endl;
    cout<<"Number of Digits: "<< digits << endl;
    cout<<"Number of White Spaces: "<< spaces << endl;
}

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

Without using inbuilt functions

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int vowels=0, consonants=0, digits=0, spaces=0;
    for(int i=0; i<s.length(); i++){
        char ch=s[i];
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            char lower_ch;
            if(ch>='A' && ch<='Z'){
                lower_ch=ch+32;
            }
            else{
                lower_ch=ch;
            }
            if(lower_ch=='a' || lower_ch=='e' || lower_ch=='i' || lower_ch=='o' || lower_ch=='u'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
        else if(ch>='0' && ch<='9'){
            digits++;
        }
        else if(ch==' '){
            spaces++;
        }

    }
    cout<<"Number of Vowels: "<< vowels << endl;
    cout<<"Number of Consonants: "<< consonants << endl;
    cout<<"Number of Digits: "<< digits << endl;
    cout<<"Number of White Spaces: "<< spaces << endl;
}

another way without inbuilt functions

        #include <bits/stdc++.h>
        using namespace std;
        int main() {
            string s;
            getline(cin,s);
            int vowels=0, consonants=0, digits=0, spaces=0;
            for(int i=0; i<s.length(); i++){
                char ch=s[i];
                if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
                    char lower_ch;
                    if(ch>='A' && ch<='Z'){
                        lower_ch=ch+32;
                    }
                    else{
                        lower_ch=ch;
                    }
                    if(lower_ch=='a' || lower_ch=='e' || lower_ch=='i' || lower_ch=='o' || lower_ch=='u'){
                        vowels++;
                    }
                    else{
                        consonants++;
                    }
                }
                else if(ch>='0' && ch<='9'){
                    digits++;
                }
                else if(ch==' '){
                    spaces++;
                }

            }
            cout<<"Number of Vowels: "<< vowels << endl;
            cout<<"Number of Consonants: "<< consonants << endl;
            cout<<"Number of Digits: "<< digits << endl;
            cout<<"Number of White Spaces: "<< spaces << endl;
        }

Q-/ 
A-/ 
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    string s1=s.substr(3,7);
    cout<<s1<<endl;
    cout<<s.rfind("NAME")<<endl;  
    cout<<s.find("NAME")<<endl;
    cout<<s.find("NAME",4)<<endl;
    
    cout<<s.insert(3,"class ");
}


Q-/WAP TO INPUT TWO STRINGS S1 AND S2 INSERT S1 STRING IN S2 WHERE THE LAST HI IS OCCURED.
A-/
// s2= Hi Hello Hi, I am Hello Hi My

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int pos=s2.rfind("Hi");
    if(pos!=string::npos){
        s2.insert(pos+s1.length()," "+s1);
    }
    cout<< s2;
}
----------------------`--------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,s1="class";
	getline(cin,s);
	int l=s.find("Hi");
// 	int d=s.insert(4,"Hi");
// 	cout<<s.insert(4,s1);
//   cout<<s.erase(3,5)<< endl;
//   cout<<s.replace(0,5,"welcome")<< endl;
   
}

-----------------------------------



Q-/ WAP TO INPUT TWO STRINGS S1 AND S2 FIND OUT ALL THE 'A'S OF S1 AND CONCATINATE IT TO S2.
A-/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1,s2;
    string s3=" ";
    char a='a';
    int counter;
    getline(cin,s1);
    getline(cin,s2);
    for(char ch:s1){
        ch=tolower(ch);
        if(ch=='a' || ch=='A'){
            s3=s3+ch;
        }

    }
    cout<< s3+s2;
}
-------------------------------------------------------------------------------

Q-/ WAP TO INPUT TWO STRINGS S1 AND S2 AND FIND OUT ALL THE 'A' OF S1 AND INSERT IT IN S2 AT THE LOCATION OF HI.
A-/ 

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1,s2,s3=" ";
	getline(cin,s1);
	getline(cin,s2);
	int l=s2.find("Hi");
	for(char ch:s1){
	    if(ch=='a'||ch=='A'){
	        s3=s3+ch;
	    }
	    
}
// cout<<s2.insert(l,s3);
cout<<s2.replace(l,2,s3);
}
---------------------------------------------------------------------------


Q-/ WAP TO INPUT A FOUR STRING EACH STRING CONTAINS METRO CITY NAMES OF INDIA 
EXP- BANGALORE, CHENNAI, MUMBAI, DELHI.
 NOW SORT THEM IN INCREASING ORDER AND PRINT THEM.








 --------------------------------------------------------------------------
 Q-/ WAP TO INPUT TWO STRINGS S1 AND S2 , FIND OUT THE SUBSTRING OF S1 BEFORE HI AND INSERT IT IN PLACE OF HELLO IN S2.
A-/


-----------------------------------------------------------
Funtions 	
// int d=s.insert(4,"Hi");
//  cout<<s.insert(4,s1);
//  cout<<s.erase(3,5)<< endl;
//  cout<<s.replace(0,5,"welcome")<< endl;
//  reverse(sbegin(),send());
 sort(sbegin(),send()); 
 how to perform sort?
    sort(s.begin(), s.end());
    sort(s1.begin(), s1.end());
    sort(s1.begin()+2, s1.begin()+5); // partial sort from index 2 to 4

example:-
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s="dbca";
    sort(s.begin(), s.end());
    cout<< s; // abcd
}
input:- dbca
output:- abcd

example for two strings input 
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    cout<< s1 << endl;
    cout<< s2 << endl;
}
input:-
dcba
hgfe
output:-
abcd
efgh

Q-/ WAP TO INPUT TWO STRINGS S1 AND S2 REPLACE SECOND LAST CHARACTER OF S1 
WITH THE SECOND CHARACTER OF S2.
Q-/ WAP TO ERASE FIRST TWO CHARACTERS OF SORTED S1.
Q-/ WAP TO FIND OUT THE WHRTHER A GIVEN STRING IS PALINDROME OR NOT USING STRING FUNCTION.
Q-/ WAP IN WHICH WE HAVE 1 STRING, DIVIDE THAT STRING IN TWO PARTS ARE ANSWER WOULD BE SECOND PART AND THEN THE FIRST PART.


Q-/ WAP TO INPUT TWO STRINGS S1 AND S2 FIND OUT THESE STRINGS ARE ANAGRAMS OR NOT.
what is anargrams?
Anagrams are words or phrases formed by rearranging the letters of a different word or phrase,
 typically using all the original letters exactly once. For example, "listen" and "silent" are anagrams of each other.

 A-/ 
 #include <bits/stdc++.h>
using namespace std;

int main() {
         string s1,s2;
         cin>>s1>>s2;
         int l1=s1.length();
         int l2=s2.length();
         sort(s1.begin(),s1.end());
         sort(s2.begin(),s2.end());
         cout<< s1 << " " << s2<< endl;
         if(l1!=l2){
             cout<<"Not a ANAGRAMs";
         }
         else if(l1==l2){
             if(s1==s2){
                 cout<<"ANAGRAMs";
             }
             else{
                 cout<<"Not a ANAGRAMs";
             }
        }
}
INPUT:-
listen silent
OUTPUT:-
eilnst eilnst
ANAGRAMs

Q-/ WAP TO INPUT TWO STRINGS S1 AND S2, REPLACE ALL THE EVEN INDEX CHARACTERS OF S1 BY S2.
A-/
#include <bits/stdc++.h>
using namespace std;
