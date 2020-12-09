#include "pch.h"
#include "iostream"

using namespace winrt;
using namespace Windows::Foundation;
using namespace AuthoringSample;
using namespace std;

int main()
{
    init_apartment();
    
    FolderEnumeration folderEnumerator;
    folderEnumerator.GetFilesAndFoldersAsync().get(); 
    wcout << folderEnumerator.AllFiles().c_str();

    folderEnumerator.GroupByMonthAsync().get();
    //folderEnumerator.GroupByRatingAsync().get();
    //folderEnumerator.GroupByTagAsync().get();
    folderEnumerator.PrintGroupedFiles();

    wstring path = L"C:/Users/angzhang/.nuget/packages"; // change to your packages path
    PackageFinder packageFinder;
    packageFinder.FindPackages(path, true);
    packageFinder.PrintPackages();

}
