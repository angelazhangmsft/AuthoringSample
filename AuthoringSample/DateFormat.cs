using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using Windows.Globalization.DateTimeFormatting;

namespace AuthoringSample
{
    public sealed class DateFormat
    {
        public DateTimeOffset CurrentDate { get; } = DateTime.Now;
        StringBuilder results = new();

        public DateTimeFormatter[] BasicFormatters { get; set; } = new[]
           {
                // Default date formatters
                new DateTimeFormatter("shortdate"),
                new DateTimeFormatter("longdate"),

                // Default time formatters
                new DateTimeFormatter("shorttime"),
                new DateTimeFormatter("longtime"),
             };

        public DateTimeFormatter[] DateFormatters { get; set; } = new[]
            {
                // Formatters for dates.
                new DateTimeFormatter("month day"),
                new DateTimeFormatter("month year"),
                new DateTimeFormatter("month day year"),
                new DateTimeFormatter("month day dayofweek year"),
                new DateTimeFormatter("dayofweek.abbreviated"),
                new DateTimeFormatter("month.abbreviated"),
                new DateTimeFormatter("year.abbreviated")
            };

        public DateTimeFormatter[] TimeFormatters { get; set; } = new[]
            {
                // Formatters for time.
                new DateTimeFormatter("hour minute"),
                new DateTimeFormatter("hour minute second"),
                new DateTimeFormatter("hour")
            };

        public string GetDateFormats(DateTimeFormatter[] formats)
        {
            results.Clear();
            foreach (DateTimeFormatter formatter in formats)
            {
                // Format and display date/time.
                string input = formatter.Template + ": " + formatter.Format(CurrentDate) + "\n";
                var newstr = new string(input.Where(c => c < 128).ToArray()); //workaround to remove Left to Right chars
                results.AppendLine(newstr);

            }
            return results.ToString();
        }

        public DateTimeOffset GetUTCTime()
        {
            return CurrentDate.UtcDateTime;
        }
    }
}
