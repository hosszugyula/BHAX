#include <iostream>
#include <vector>
#include <boost/filesystem.hpp>
using namespace std;
using namespace boost::filesystem;
int i;
vector<path> v;  
void read_acts (path p)
    {
 
    if (is_regular_file(p)) {
        string ext (".java");
  
        if (!ext.compare(extension(p))) 
        {
        i++;
        v.push_back(p); 
        }
        } else if (is_directory (p))
            for (directory_entry & entry:directory_iterator(p))
            read_acts (entry.path());  
    }
  
int main(int argc, char *argv[])
    {
    /* cout << argc << "\n";
    cout << *argv << "\n"; */
     path p("srczip");
    if(!exists(p) || !is_directory(p))
        {
            cout<<p<<"Valami nem oké a könyvtárral, próbáld újra!\n";
            return 1;
        }
    read_acts(p);  
    for(auto&& x : v)
    cout << x.filename()<< endl;
    cout << i << " JDK osztályt találtunk.\n";
    }