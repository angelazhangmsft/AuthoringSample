using System;
using System.IO;
using System.Collections.Generic;

namespace AuthoringSample
{
    public class PackageFinder
    {
        public IDictionary<string, IList<string>> PackageList { get; set; } = new Dictionary<string, IList<string>>();

        /// <summary>
        /// print package info after finding
        /// </summary>
        public void PrintPackages()
        {
            foreach (KeyValuePair<string, IList<string>> entry in PackageList)
            {
                Console.WriteLine(entry.Key);
                foreach (string ver in entry.Value)
                {
                    Console.WriteLine($"----" + ver);
                }     
            }
        }

        /// <summary>
        /// find all nuget packages and versions
        /// </summary>
        public void FindPackages(string nugetPath, bool getVersions)
        {
            var pkgPaths = Directory.GetDirectories(nugetPath);
            foreach (var pkgDir in pkgPaths)
            {
                // get package name by removing path parent
                var indexEnd = pkgDir.LastIndexOf('\\');
                var packageName = pkgDir[(indexEnd + 1)..];

                List<string> versionList = new();
                PackageList.Add(packageName, versionList);

                // get version info
                if (getVersions)
                {
                    var versions = Directory.GetDirectories(pkgDir);
                    foreach (var verPath in versions)
                    {
                        // get version by removing path parent
                        var indexEnd2 = verPath.LastIndexOf('\\');
                        var verNumber = verPath[(indexEnd2 + 1)..];

                        versionList.Add(verNumber);
                    } 
                }
            }
        }
    }
}
