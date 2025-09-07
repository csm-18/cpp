-- configuration file for cpp project
return {
    compiler = "g++",
    compiler_options = "-Wall -Wextra",
    cpp_standard = "c++17",
    source_files = {"src/*.cpp","src/**/*.cpp"}
    include_dirs = {"src",},
    output = "hello"

}    
    