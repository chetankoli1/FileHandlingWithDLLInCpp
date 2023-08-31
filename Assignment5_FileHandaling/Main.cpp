#include <iostream>
#include<writefile.h>
#include<readfile.h>

int main()
{
    Write write("D:/chetan/", "sagar.txt");
    write.execute();

    std::string path = write.getCompletePath();

    Read read(path);
    read.execute();
}
