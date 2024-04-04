#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(string str,int length){
    int vowels= 0,consonents= 0,whitespace= 0;
for(int i=0;i<str.length();i++){
    str[i]=tolower(str[i]);
}
for(int i=0;i<str.length();i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
        vowels++;
    }
   else if(str[i]>='a'&&str[i]<='z'){
    consonents++;
   }
   else if(str[i]==' '){
    whitespace++;
   }
}
  cout << "Vowels: " << vowels << "\n";
  cout << "Consonants: " << consonents << "\n";
  cout << "White Spaces: " << whitespace << "\n";
}
int main() {
  string str = "Take u forward is Awesome";
  int length = str.length();
  solve(str, length);
   return 0;
}