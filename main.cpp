#include <iostream>
#include <vector>
using namespace std;


vector<string> get_string_args(int argc,char* argv[]){
    vector<string> args;

    for(int i = 0; i < argc; ++i){
        args.push_back(string(argv[i]));
    }
    return args;
}

int main(int argc,char* argv[])
{
    vector<string> args = get_string_args(argc,argv);
    cout << args.size() << endl;
    for(string arg:args){
        cout << arg<<endl;
    }
    return 0;
}
