#include <iostream>  // cout
#include <cstdio>    // sprintf
#include <stdlib.h>  // getenv

#define OKCLI_USER "OKCLI_USER"
#define OKCLI_PASS "OKCLI_PASS"
#define OKCLI_PATH "OKCLI_PATH"
#define OKCLI_LOGIN_TOOL "oklogin"
#define UPDATE_INTERVAL 60

using namespace std;

char* okcli_cmd(char *path, const char *login_tool, const int update_interval);

int main()
{
	char *ptr_user(getenv(OKCLI_USER));
	char *ptr_pass(getenv(OKCLI_PASS));
	char *ptr_path(getenv(OKCLI_PATH));

	if(ptr_user == NULL || ptr_pass == NULL)
	{
		cout << "Login Error: " << OKCLI_USER << " and " << OKCLI_PASS << " environment variables must be set" << endl;
		cout << "Refer to Readme.md for more info" << endl;
		exit(1);
	}

	if(ptr_path == NULL)
	{
		cout << "Path Error: " << OKCLI_PATH << " environment variable must be set" << endl;
		cout << "Refer to Readme.md for more info" << endl;
		exit(1);
	}

	system(okcli_cmd(ptr_path, OKCLI_LOGIN_TOOL, UPDATE_INTERVAL));

	return 0;
}

char* okcli_cmd(char *path, const char *login_tool, const int update_interval)
{
	char *buffer = new char[256];

	sprintf(buffer, "while true; do clear; %s/%s; sleep %d; done", path, login_tool, update_interval);

	return buffer;
}

