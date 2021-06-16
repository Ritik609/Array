#include <iostream>
using namespace std;

int main() {
	string s="aaaabbbcdeeee";
	string ans="";
	char temp=s[0];
	for(int i=1;i<s.length();i++){
	    if(temp!=s[i])
	      ans+=temp;
	    temp=s[i];
	}
	std::cout << ans << std::endl;
	return 0;
}
