#include "../../../utils/crx/api/crx.h"
#include <iostream>
#include <string>
#include "../../../base/base_export.h"

int main(){
    std::string path{"./tampermonkey.crx"};
    GoString str;
    str.p = path.c_str();
    str.n = path.length();
    UnpackCrx(str);
}