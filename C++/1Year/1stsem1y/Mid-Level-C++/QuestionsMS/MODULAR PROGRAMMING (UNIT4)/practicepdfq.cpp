Q-4
#include <bits/stdc++.h>
using namespace std;

int main() {
// 	char string[100],substring[100];
// 	cin.getline(string,100);
// 	cin.getline(substring,100);
	string s1;
	getline(cin,s1);
// 	strcat(s1,s2);
// 	cout<<s1<<endl;
// 	string z1,z2;
// 	getline(cin,z1);
// 	getline(cin,z2);
// 	string s3=z1+z2;
// 	cout<<s3;

// if(strstr(string ,substring)!=n){
//     cout<<"Found";
    
// }
// else{
//     cout<<"nf";
// }
  int pos=s1.find("c");
  cout<<pos<<endl;
  if(pos>=0){
      cout<<"string found";
  }
 
  else{
      cout<<"nf";
  }
}


Q-5
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    int vowel=0,consonant=0,digit=0;
    getline(cin,s1);
    for(char ch:s1){
       ch= tolower(ch);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowel++;
        }
        else if(isdigit(ch)){
            digit++;
        }
        else{
            consonant++;
        }
    
    }  
    
    cout<<"no' of vowels= " << vowel<<endl;
    cout<<"no' of consonant= " << consonant<<endl;
    cout<<"no' of digit= " << digit;
    
}
// ----------------------------
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    int vowel=0,consonant=0,digit=0,spcchar=0;
    getline(cin,s1);
    for(char ch: s1){
        ch=tolower(ch);
        if(isalpha(ch)){
        
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                vowel++;
            }
            else{
                consonant++;
            }
        }
        else if(isdigit(ch)){
            digit++;
        }
        else{
            spcchar++;
        }
    }
    
    cout<<"no' of vowels= " << vowel<<endl;
    cout<<"no' of consonant= " << consonant<<endl;
    cout<<"no' of digit= " << digit<<endl;
     cout<<"no' of spcchar= " << spcchar;
    
}
// -----------------------

Q-6/

#include <bits/stdc++.h>
using namespace std;
int main(){
   string s1,s2;
   getline(cin,s1);
   getline(cin,s2);
   s1.replace(0,1,s2);
   cout<<s1;
}

// --------------?\
#include <bits/stdc++.h>
using namespace std;
int main(){
    char s1[100],s2[100];
    cin.getline(s1,100);
    cin.getline(s2,100);
    char oldchar='y';
    char newchar= 'Y';
    cout<<s1<<endl;
    for(int i=0; i<=strlen(s1);i++){
        if(s1[i]==oldchar){
             s1[i]=newchar;
        }
    }
    cout<<s1;
}

Q-7/
#include <bits/stdc++.h>
using namespace std;
  int main(){
      string s1;
      getline(cin, s1);
      char rem='Y';
      cout<<s1<<endl;
      for(int i=0; i<=s1.length(); i++){
          if(s1[i]==rem){
              s1.erase(i,1);
              i--;
          }
          
      }
      cout<<s1;
      
  }

  Q-20/
  #include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
 
    getline(cin,s1);
cout<<"Initially the string is "<< s1<<endl;
cout<<"Lower case string conversion : ";
    for(char ch:s1){
        ch=tolower(ch);
        cout<<ch;
    }
    cout<<endl;
cout<<"Upper case string conversion : ";
    for(char ch:s1){
        ch=toupper(ch);
        cout<<ch;
    }
    cout<<endl;
    
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    char ch[100];
    char ch2[100];
    getline(cin, s1);
    for(int i=0;i<s1.length();i++){
        s1[i]=tolower(s1[i]);
        ch[i]=s1[i];
    }
     for(int i=0;i<s1.length();i++){
        s1[i]=toupper(s1[i]);
        ch2[i]=s1[i];
    }
    ch[s1.length()]='\0';
     ch2[s1.length()]='\0';
    cout<<"Lower : "<<ch<<endl;
    cout<<"Upper : "<<ch2;
    
}


// ----------------

#include <bits/stdc++.h>
using namespace std;
int main(){
    char s1[100],s2[100];
    cin.getline(s1,100);
    int j=0;
    cout<<s1<<endl;
    for(int i=strlen(s1)-1;i>=0;i--){
        s2[j]=s1[i];
        j++;
    }
    s2[strlen(s1)]='\0';
    cout<<s2<<endl;
    if(strcmp(s2,s1)==0){
        cout<<"palindrome string";
    }
    else{
        cout<<"not a palindrome string";
    }
}

// /-----------------


#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    getline(cin,s1);
    cout<<s1<<endl;
    reverse(s1.begin(),s1.end());
    cout<<s1;
}


----------------------------------------

#include <bits/stdc++.h>
// #include <cstring>
using namespace std;

int main()
{
//   cout<<"enter the number of strings to display";
  int n;
  cin>>n;
//   cout<<"enter the number of strings ";
  string s[n];
  for(int i=0; i<n;i++){
      cin>> s[i];
  }
  
  sort(s, s+n);
  
  for(int i=0; i<n;i++){
     cout<< s[i]<<endl;
  }
}
  