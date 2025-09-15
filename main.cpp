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


const string VERSION = "0.1.0";
int main(int argc,char* argv[])
{
    vector<string> args = get_string_args(argc,argv);

    if(args.size() == 1){
        cout << "cpp " << VERSION << endl;
        cout << "A build tool and pkg manager for C++" << endl;
    }else if(args.size() == 2){
        if(args[1] == "--version" || args[1] == "-v" || args[1] == "version" || args[1] == "-version"){
            cout << "cpp " << VERSION << endl;
        }
    }
    return 0;
}
