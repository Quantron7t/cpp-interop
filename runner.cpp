#include "shared_impl.h"

void strCat(const char *str1, const char *str2, char *newStr)
{
    string str = string(str1) + string(str2);
    strcpy(newStr, str.c_str());
}

void executeCommand(const char *strCmd)
{
    std::array<char, 80> buffer;
    FILE *pipe = popen(strCmd, "r");

    if (!pipe)
    {
        std::cerr << "cannot open pipe for reading" << endl;
    }
    int i = 0;
    while (fgets(buffer.data(), 80, pipe) != NULL)
    {
        i++;
        std::cout << i << "\t" << buffer.data();
    }
    pclose(pipe);
}

int add(int a, int b)
{
    return a + b;
}

void printSomething(const char *str)
{
    std::cout << "Printing \\ : " << str << endl;
}
