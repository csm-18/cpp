#include <iostream>
#include <vector>
#include <filesystem>
#include <cstdlib>
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
        }else if(args[1] == "init"){
            filesystem::path src = "src";
            if(filesystem::exists(src)){
                cout << "src/ folder already exists in current directory!\n";
                exit(EXIT_FAILURE);
            }else if(filesystem::create_directory(src)){
                cout << "created src/" << "\n";
            }else {
                cout << "Error: Failed to create src/ directory!\n";
                exit(EXIT_FAILURE);
            }
        }
    }
    return 0;
}
