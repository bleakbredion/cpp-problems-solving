#include <iostream>
#include <io.h>
#include <fcntl.h>

using namespace std;

int wmain(int argc, wchar_t* argv[])
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stderr), _O_U16TEXT);

    std::wcout << L"Unicode -- English -- Русский -- Ελληνικά -- Español." << std::endl;
    // или
    wprintf(L"%s", L"Unicode -- English -- Русский -- Ελληνικά -- Español.\n");
    wcout << L"Нажмите 1, для перевода из шкалы цельсия в шкалу Фарингейта";
    return 0;
}