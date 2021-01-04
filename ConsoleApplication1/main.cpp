#include "pch.h"
#include "iostream"

using namespace winrt;
using namespace Windows::Foundation;
using namespace AuthoringSample;
using namespace std;

int main()
{
    init_apartment();
    
    /* FolderEnumeration Component */
    FolderEnumeration folderEnumerator;
    folderEnumerator.GetFilesAndFoldersAsync().get(); 
    wcout << folderEnumerator.AllFiles().c_str() << endl;

    //folderEnumerator.GroupByMonthAsync().get();
    //folderEnumerator.GroupByRatingAsync().get();
    //folderEnumerator.GroupByTagAsync().get();
    //folderEnumerator.PrintGroupedFiles();

    /* DateFormat Component */
    DateFormat dateObject;
    DateTime currentDate = dateObject.CurrentDate();
    hstring dateFormats1 = dateObject.GetDateFormats(dateObject.BasicFormatters());
    //hstring dateFormats2 = dateObject.GetDateFormats(dateObject.DateFormatters());
    //hstring dateFormats3 = dateObject.GetDateFormats(dateObject.TimeFormatters());
    wcout << dateFormats1.c_str() << endl;
    
    /* Shapes Component */
    Shapes s;
    cout << "Rectangle X coordinate before: " << s.RectObject().X << endl;
    s.MoveRight(s.RectObject(), 10);
    cout << "Rectangle X coordinate after: " << s.RectObject().X << endl;

}
