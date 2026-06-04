#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // strcpy()
    char str1[100];
    strcpy(str1, "hello world");
    cout << str1 << endl;

    //strcat
    char str2[] = "Chitti X ";
    char str3[] = "Ninja";
    cout << strcat(str2, str3) << endl;

    //strcmp
    char str4[] = "xyz";
    char str5[] = "atel";
    cout << strcmp(str4, str5) << endl;


    return 0;
}