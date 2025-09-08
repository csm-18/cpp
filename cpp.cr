
VERSION = "0.1.0"
def main()
    if ARGV.size == 0
        puts "cpp #{VERSION}"
        puts "A build tool and pkg manager for C++"
    elsif ARGV.size == 1
        if ARGV[0] == "--version" || ARGV[0] == "-v"
            puts "cpp #{VERSION}"
        end    
    end       
end

main()