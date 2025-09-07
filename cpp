#!/usr/bin/env lua

VERSION = "0.1.0"
function main()
    if #arg == 0 then
        print("cpp "..VERSION)
        print("A build tool and pkg manager for C++")
    end    
end

main()