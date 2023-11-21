#include <iostream>
#include <string>
#include "Str_easy.h"
using namespace std;

string itc_even_place(string s) {
	long long len = itc_len(s);
	if (len <= 1)
		return "-1";
	string str = "";
	for (long long i = 1; i < len; i += 2) {
		str += s[i];
	}
	return str;
}

double itc_percent_lower_uppercase(string s) {
	int l = 0, h = 0;
	long long len = itc_len(s);
	for (long long i = 0; i < len; i++) {
		if ((s[i] < 123) && (s[i] > 96))
			l++;
		if ((s[i] < 91) && (s[i] > 64))
			h++;
	}
	double o = l * 1.0;
	if (l + h != 0) {
		o /= h + l;
	}
	else
		o = 0;
	return o;
}

string itc_reverse_str(string s) {
	string str = "";
	for (long long i = itc_len(s) - 1; i >= 0; i--) {
		str += s[i];
	}
	return str;
}

string itc_slice_str(string s, int st, int en) {
	if (en < st)
		return s;
	string str = "";
	if (itc_len(s) < en)
		en = itc_len(s) - 1;
	for (long long i = st; i <= en; i++) {
		str += s[i];
	}
	return str;
}

string itc_cmp_str(string s1, string s2, int n) {
	long long l1 = itc_len(s1);
	long long l2 = itc_len(s2);
	string str = s1;
	long long j = 0, t = 0;
	for (long long i = 0; i < l1; i++) {
		if (i < n) {
			str[i] = s1[j];
			j++;
		}
		else if (t < l2) {
			str[i] = s2[t];
			t++;
		}
		else {
			str[i] = s1[j];
			j++;
		}
	}
	return str;
}