#include <iostream>
#include <string>
#include "Str_easy.h"
using namespace std;

bool itc_equal_reverse(string s) {
	long long l = itc_len(s);
	int vop = 1;
	if (l < 2)
		return 1;
	for (long long i = 0; i < l / 2; i++) {
		if (s[i] != s[l - i - 1]) {
			vop = 0;
			break;
		}
	}
	return vop;
}

int itc_find_str(string s1, string s2) {
	long long l1 = itc_len(s1);
	long long l2 = itc_len(s2);
	if (l2 == 0)
		return 0;
	if (l1 < l2)
		return -1;
	long long j = 0, n = -1;
	for (long long i = 0; i < l1 - l2; i++) {
		if (s1[i] == s2[j]) {
			j++;
			n = i;
			if (j == l2) {
				n -= l2;
				n++;
				break;
			}
		}
		else {
			j = 0;
			n = -1;
		}
	}
	return n;
}

string itc_three_str(string str, string s1, string s2) {
	long long l = itc_len(str);
	long long l1 = itc_len(s1);
	long long l2 = itc_len(s2);
	long long j = 0;
	while (itc_find_str(str, s1) != -1) {
		long long n = itc_find_str(str, s1);
		string ns = str;
		if (l1 == l2) {
			for (long long i = n; i < l; i++) {
				if (j < l2) {
					ns[i] = s2[j];
					j++;
				}
			}
			str = ns;
		}
		else if (l1 > l2) {
			for (int i = 0; i < l1 - l2; i++)
				ns.pop_back();
			for (long long i = n; i < l; i++) {
				if (j < l2) {
					ns[i] = s2[j];
					j++;
				}
				else {
					ns[i] = str[i + l1 - l2];
				}
			}
			str = ns;
		}
		else {
			for (int i = 0; i < l2 - l1; i++) {
				ns.push_back('0');
				l++;
			}
			for (long long i = n; i < l; i++) {
				if (j < l2) {
					ns[i] = s2[j];
					j++;
				}
				else {
					ns[i] = str[i + l1 - l2];
				}
			}
			str = ns;
		}
		l = itc_len(str);
		j = 0;
	}
	return str;
}

int itc_max_char_on_end(string s) {
	// 47 58
	int l = 0, m = -1;
	for (long long i = 0; i < itc_len(s); i++) {
		if ((s[i] > 47) && (s[i] < 58)) {
			l++;
		}
		else if (m < l) {
			m = l;
			l = 0;
		}
		else
			l = 0;
	}
	if (m < l) {
		m = l;
	}
	return m;
}