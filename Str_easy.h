#include <string>
#include <iostream>
using namespace std;

#ifndef STR_EASY_H_INCLUDED
#define STR_EASY_H_INCLUDED

string itc_hello_str(string);

long long itc_len(string);

void itc_print_copy_str(string, int);

void itc_first_end_three(string);

int itc_count_char_in_str(char, string);

string itc_even_place(string);

double itc_percent_lower_uppercase(string s);

string itc_reverse_str(string);

string itc_slice_str(string, int, int);

string itc_cmp_str(string, string, int);

bool itc_equal_reverse(string);

int itc_find_str(string, string);

string itc_three_str(string, string, string);

int itc_max_char_on_end(string);

#endif