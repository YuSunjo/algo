using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace algo11_cSharp
{
    
    class Program
    {
        public static int WordNum(string str, string word)
        {
            int num;
            num = str.Length - str.Replace(word, "").Length;
            num = num / word.Length;
            return num;
        }
        static void Main(string[] args)
        {
            string input;
            input = Console.ReadLine();

            Console.WriteLine($"{WordNum(input, "1")}");
            Console.WriteLine($"{WordNum(input, "I")}");
            Console.WriteLine($"{WordNum(input, "l")}");
            Console.WriteLine($"{WordNum(input, "|")}");
        }
    }
}
