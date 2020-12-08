using System;
using System.IO;
using System.Collections.Generic;

namespace AuthoringSample
{
    public class PackageFinder
    {
        public Dictionary<string, List<string>> PackageList = new Dictionary<string, List<string>>();

        /// <summary>
        /// list all nuget packages and versions
        /// </summary>
        public void FindPackages(string nugetPath, bool getVersions)
        {
            var pkgPaths = Directory.GetDirectories(nugetPath);
            foreach (var pkgDir in pkgPaths)
            {
                // get package name by removing path parent
                var indexEnd = pkgDir.LastIndexOf('\\');
                var packageName = pkgDir.Substring(indexEnd + 1);

                List<string> versionList = new List<string>();
                PackageList.Add(packageName, versionList);
                Console.WriteLine(packageName);

                // get version info
                if (getVersions)
                {
                    var versions = Directory.GetDirectories(pkgDir);
                    foreach (var verPath in versions)
                    {
                        // get version by removing path parent
                        var indexEnd2 = verPath.LastIndexOf('\\');
                        var verNumber = verPath.Substring(indexEnd2 + 1);

                        versionList.Add(verNumber);
                        Console.WriteLine($"----" + verNumber);
                    } 
                }
            }
        }
    }
}
