#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main() {
	freopen("vultrlist","r",stdin);
	string s,t;
	string head = "ping -c 4 ";
	string tail = " >> result.txt";
	for(int i=1;i<=15;i++) {
		cin>>s;
		t = head + s + tail;
		system(t.c_str());
	}
	fclose(stdin);
	return 0;
}

