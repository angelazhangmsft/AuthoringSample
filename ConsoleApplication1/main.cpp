#include "pch.h"
#include "iostream"

using namespace winrt;
using namespace Windows::Foundation;
using namespace AuthoringSample;
using namespace std;

int main()
{
    init_apartment();
    //
    try {
        PackageFinder x;
        cout << "Enter your packages path, for example C:\\Users\\*username*\\.nuget\\packages: " << endl;
        wstring path;
        wcin >> path;
        x.FindPackages(path, true); // needs const winrt::param::hstring?
    }
    catch (winrt::hresult_error) {
        cout << "Invalid path";
    }

    FolderEnumeration folderEnumerator;
    folderEnumerator.GetFilesAndFoldersAsync();
    

}
