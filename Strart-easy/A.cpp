// C++ program for the above 
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string S)
{
	string P = S;
	reverse(P.begin(), P.end());
	if (S == P) {
		return true;
	}
	else {
		return false;
	}
};
string Fun(string s){
	for(int i=0;i<s.length();i++){ 
		string count ="-1"  ;
		string str="abcdefghijklmnopqrstuvwxyz";//aba         a?z?
		if(s[i]=='?'){
			for(int k=0;k<str.length();k++){
				s[i]=str[k];
				if(isPalindrome(s)){
					count=s;
				}
			}
		}
	}
	return count;	

}
int main()
{
	
	string S;
	cin>>S;
	int count=-1;
	string sr=Fun(S);
	cout<< sr;
	
	//cout<< S;	
	//cout << isPalindrome(S);

	return 0;
}
