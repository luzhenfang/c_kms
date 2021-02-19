#ifndef __EXEC__
#define __EXEC__

#include <string>
#include <sstream>

class Exec
{
    public:
    static auto Command(std::string cmd);
};

auto Exec::Command(std::string cmd){
    auto pipe = _popen(cmd.c_str(),"r");
    std::stringstream ss;
    char buffer[128];
    if(pipe==0){
        return std::string{"error can not open the pipe"};
    }
    while(!feof(pipe)){
        fgets(buffer,128,pipe);
        ss<<buffer;
    }
    return ss.str();
}

#endif


