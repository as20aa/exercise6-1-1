// exercise6-1-1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int call_count(void)
{
	static int count = 0;
	count++;
	cout << count << endl;
	return count;
}
int main()
{
	for (int i=0; i != 10; i++) {
		call_count();
	}
	system("pause");
    return 0;
}

