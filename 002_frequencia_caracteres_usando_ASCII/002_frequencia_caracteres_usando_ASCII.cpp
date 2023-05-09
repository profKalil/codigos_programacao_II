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
    for(size_t i=0; i<256; i++)
    {
        pair<char, size_t> newpair;
        newpair.first = i;
        newpair.second = 0;
        chcounter.push_back(newpair);
    }

    for(size_t i=0; i<filecontent.size(); i++) //laço do texto
    {
        char ch = filecontent.at(i);
        chcounter.at(ch).second++;
    }

    //show results
    for(size_t j=0; j<chcounter.size(); j++)
    {
        cout << "Character: " << chcounter.at(j).first <<
        " Id ASCII: " << (int) chcounter.at(j).first <<
        " -> Counts: " << chcounter.at(j).second << endl;
    }

    //eliminar todas as ocorrencias de caracteres nulos
    //ordenar em ordem descendente
    //std::sort std::stable_sort

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

