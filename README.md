# C#/WinRT Authoring Sample

This sample demonstrates how to author a C# Windows Runtime Component using [CsWinRT](aka.ms/cswinrt/repo). Authoring support for C#/WinRT is still in progress, so the sample may not be up to date.

- The C# component is authored using a **Class Library (.NET Core)** project with some project file modifications. There are two classes: **FolderEnumeration** and **DateFormat**, which demonstrate the usage of Windows Runtime types.

- The console app is a **Windows Console Application (C++/WinRT)** with several hosting project hacks to demonstrate using the component.
