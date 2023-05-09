#include <iostream>
#include <fstream>

using namespace std;

bool ReadFile(string path, string &content);

//int main(int argc, const char* argv[])
int main()
{
    string filecontent = "";
    if(!ReadFile("manuscript2.txt", filecontent))
    //if(!ReadFile(argv[1], filecontent))
    {
        cout << "error" << endl;
        return 1;
    }
    cout << "File is: " << filecontent << endl;

    return 0;
}

bool ReadFile(string path, string &content)
{
    ifstream FileReader(path);
    if(FileReader.is_open() == false)
        return false;

    string tmp;
    while(getline(FileReader, tmp))
    {
        content += tmp;
    }

    FileReader.close();
    return true;
}

