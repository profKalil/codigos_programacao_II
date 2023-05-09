#include <iostream>
#include <fstream>
#include <vector>
#include <utility>

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


    //contagem
    vector< pair<char, size_t> > chcounter;

    for(size_t i=0; i<filecontent.size(); i++) //laço do texto
    {
        char ch = filecontent.at(i);

        bool hasfound = false;
        for(size_t j=0; j<chcounter.size(); j++) //laço da lista
        {
            char ch2 = chcounter.at(j).first;
            if(ch == ch2)
            {
                chcounter.at(j).second++;
                hasfound = true;
                break;
            }
        }

        if(hasfound == false)
        {
            pair<char, size_t> newpair;
            newpair.first = ch;
            newpair.second = 1;
            chcounter.push_back(newpair);
        }
    }

    //show results
    for(size_t j=0; j<chcounter.size(); j++)
    {
        cout << "Character: " << chcounter.at(j).first <<
        " Id ASCII: " << (int) chcounter.at(j).first <<
        " -> Counts: " << chcounter.at(j).second << endl;
    }

    return 0;
}

bool ReadFile(string path, string &content)
{
    ifstream FileReader(path.c_str());
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

