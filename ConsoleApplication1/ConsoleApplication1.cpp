
#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <vector>
#include <windows.h>//
#include <stdio.h>  //i/o
#include "mainTitle.h"
#include <conio.h>

using namespace std;

void funny_game_question_B(){
	int q;
	cin >> q;
	int n;
	vector<int> s;
	vector<int> t;
	for (int i = 0; i < q; ++i) {
		cin >> n;
		char inp;
		for (int j = 0; j < n; ++j) {
			cin >> inp;
			s.push_back(inp);
		}
		for (int j = 0; j < n; ++j) {
			cin >> inp;
			t.push_back(inp);
		}
		bool flag = true;
		int minl = 0;
		for (int j = 0; j < n; ++j) {
			if (s[j] == '1') {
				minl = j;
				break;
			}
			if (s[j] == '0' && t[j] == '1') {
				flag = false;
			}
		}
		for (int j = minl; j < 2 * minl; ++j) {
			if (s[j] == '0' && t[j] == '1') {
				flag = false;
			}
		}
		if (flag) {
			n -= 1;
			for (int j = n - 1 + n % 2; j <= n; ++j) {
				if (s[j] == '0' && t[j] == '1') {
					flag = false;
					break;
				}
			}
		}
		if (flag) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
	}
	
}


int wmain(int args, wchar_t* argv[]) {
	_setmode(_fileno(stdout), _O_U16TEXT);
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stderr), _O_U16TEXT);
	wcout << L"Введите ваше число: ";
	wchar_t inchar; long outnum=_getche()-'0';
	for (int i = 0; i < 5; ++i) {
		inchar = _getche();
		inchar -= '0';
		outnum = outnum * 10 + inchar;
	}
	wcout << L"\nВаше число: ";
	wcout<< outnum;
	return 0;
}