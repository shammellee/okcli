#include <iostream>  /* cout */
#include <stdlib.h>  /* getenv */

#define OKC_USER "OKC_USER"
#define OKC_PASS "OKC_PASS"
#define OKC_PATH "OKC_PATH"
#define UPDATE_INTERVAL 60

using namespace std;

char* okc_cmd(char *path, const int update_interval);

int main()
{
	//string okc_user;
	//string okc_pass;
	//string okc_dir;

	char *ptr_user(getenv("OKC_USER"));
	char *ptr_pass(getenv("OKC_PASS"));
	char *ptr_path(getenv("OKC_PATH"));

	if(ptr_user == NULL || ptr_pass == NULL)
	{
		cout << "Login Error: " << OKC_USER << " and " << OKC_PASS << " environment variables must be set" << endl;
		cout << "Refer to Readme.md for more info" << endl;
		exit(1);
	}

	if(ptr_path == NULL)
	{
		cout << "Path Error: " << OKC_PATH << " environment variable must be set" << endl;
		cout << "Refer to Readme.md for more info" << endl;
		exit(1);
	}

	system(okc_cmd(ptr_path, UPDATE_INTERVAL));

	return 0;
}

char* okc_cmd(char *path, const int update_interval)
{
	char *buffer = new char[256];

	sprintf(buffer, "while true; do clear; %s/okcd; sleep %d; done", path, update_interval);

	return buffer;
}

