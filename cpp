#!/usr/bin/env lua

VERSION = "0.1.0"
function main()
    local cpp_helloworld = [[
#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
]]
    local cpp_config = [[
-- configuration file for cpp project
return {
    compiler = "g++",
    compiler_options = "-Wall -Wextra",
    cpp_standard = "c++17",
    output = "hello"

}    
    ]]



    if #arg == 0 then
        print("cpp "..VERSION)
        print("A build tool and pkg manager for C++")
    elseif #arg == 1 then
        if arg[1] == "init" then

            -- create cpp-config.lua file
            local file = io.open("cpp-config.lua", "w") 
            file:write(cpp_config)
            file:close()
            print("created cpp-config.lua")

            -- create src directory
            os.execute("mkdir -p src")
            print("created src/")

            -- create main.cpp file
            local file = io.open("src/main.cpp", "w") 
            file:write(cpp_helloworld)
            file:close()
            print("created src/main.cpp")

            -- create build directory
            os.execute("mkdir -p build")
            print("created build/")


        end        
    end    
end

main()