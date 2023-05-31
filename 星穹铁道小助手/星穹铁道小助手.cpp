// 星穹铁道小助手.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <windows.h>
using namespace std;

void HideWindow() {
	HWND hwnd = GetForegroundWindow();
	if (hwnd) {
		ShowWindow(hwnd, SW_HIDE);
	}
}

int main() {
	HideWindow();
	system("python gui.py");
}