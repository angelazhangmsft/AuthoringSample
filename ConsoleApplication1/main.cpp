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
    //folderEnumerator.GetFilesAndFoldersAsync().get(); 
    folderEnumerator.GroupByMonthAsync().get();
    folderEnumerator.PrintGroupedFiles();
    

}
