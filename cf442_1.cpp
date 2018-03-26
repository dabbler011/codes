#include <bits/stdc++.h>
using namespace std;

int main() {
	int count = 0,i;
	string str;
	cin>>str;
	for (i = 0;i < str.length();i++) {
		if(str[i] == 'A' && i+2 < str.length()) {
			if(str[++i] == 'n') {
				if (str[++i] == 'n') {
					count++;
				}
			}
		} else if(str[i] == 'D' && i+4 < str.length()) {
			if(str[++i] == 'a') {
				if (str[++i] == 'n') {
					if (str[++i] == 'i') {
						if (str[++i] == 'l') {
							count++;
						}
					}
				}
			}
		} else if(str[i] == 'O' && i+3 < str.length()) {
			if(str[++i] == 'l') {
				if (str[++i] == 'y') {
					if (str[++i] == 'a') {
						count++;
					}
				}
			}
		} else if(str[i] == 'S' && i+4 < str.length()) {
			if(str[++i] == 'l') {
				if (str[++i] == 'a') {
					if (str[++i] == 'v') {
						if (str[++i] == 'a') {
							count++;
						}
					}
				}
			}
		} else if(str[i] == 'N' && i+5 < str.length()) {
			if(str[++i] == 'i') {
				if (str[++i] == 'k') {
					if (str[++i] == 'i') {
						if (str[++i] == 't') {
							if (str[++i] == 'a') {
								count++;
							}
						}
					}
				}
			}
		} 

	}
	if(count == 1) {
		cout<<"YES";
	} else {
		cout<<"NO";
	}
	return 0;
}