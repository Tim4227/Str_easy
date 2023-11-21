#include <iostream>
#include <string>
using namespace std;

string itc_hello_str(string n) {
	return "Hello, " + n;
}

long long itc_len(string s) {
	long long l = 0;
	char c = s[l];
	while (c != '\0') {
		l++;
		c = s[l];
	}
	return l;
}

void itc_print_copy_str(string s, int n) {
	for (int i = 0; i < n; i++)
		cout << s << endl;
}

void itc_first_end_three(string s) {
	if (itc_len(s) < 6) {
		for (int i = 0; i < itc_len(s); i++)
			cout << s[0];
	}
	else {
		cout << s[0] << s[1] << s[2] << s[itc_len(s) - 3] << s[itc_len(s) - 2] << s[itc_len(s) - 1];
	}
}

int itc_count_char_in_str(char c, string s) {
	int o = 0;
	for (long long i = 0; i < itc_len(s); i++) {
		if (s[i] == c)
			o++;
	}
	return o;
}