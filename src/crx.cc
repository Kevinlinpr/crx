#include "crx.h"
#include "../utils/crx/api/crx.h"

void Crx::Unpack(const std::string& path){
    GoString str;
    str.p = path.c_str();
    str.n = path.length();
    UnpackCrx(str);
}