#include "pch.h"
#include "iostream"

using namespace winrt;
using namespace Windows::Foundation;
using namespace AuthoringSample;
using namespace std;

int main()
{
    init_apartment();
    
    /*FolderEnumeration folderEnumerator;
    folderEnumerator.GetFilesAndFoldersAsync().get(); 
    printf("%ls\n", folderEnumerator.AllFiles().c_str());*/

    //folderEnumerator.GroupByMonthAsync().get();
    ////folderEnumerator.GroupByRatingAsync().get();
    ////folderEnumerator.GroupByTagAsync().get();
    //folderEnumerator.PrintGroupedFiles();

    //wstring path = L"C:/Users/angzhang/.nuget/packages"; // change to your packages path
    //PackageFinder packageFinder;
    //packageFinder.FindPackages(path, true);
    //packageFinder.PrintPackages();



    DateFormat dateObject;
    DateTime currentDate = dateObject.CurrentDate();
    hstring dateFormats = dateObject.GetDateFormats(dateObject.BasicFormatters());

    printf("%ls\n", dateFormats.c_str());
    OutputDebugString(dateFormats.c_str()); 

    //wcout << L"shortdate: ‎12‎/‎22‎/‎2020\nlongdate: ‎Tuesday‎, ‎December‎ ‎22‎, ‎2020\nshorttime: ‎10‎:‎48‎ ‎AM\nlongtime: ‎10‎:‎48‎:‎11‎ ‎AM\n\n";
    //cout << "shortdate: ‎12‎/‎22‎/‎2020\nlongdate: ‎Tuesday‎, ‎December‎ ‎22‎, ‎2020\nshorttime: ‎10‎:‎48‎ ‎AM\nlongtime: ‎10‎:‎48‎:‎11‎ ‎AM\n\n";
    
    

    /*std::wostringstream results;
    results << std::wstring_view(dateFormats) << std::endl;
    auto x = results.str();
    auto y = x.c_str();
    OutputDebugString(results.str().c_str());*/

    /*std::string c = winrt::to_string(output);
    cout << c << endl;*/

    //wcout << output.c_str() << std::endl;

}
