using System;
using System.Text;
using System.Runtime.InteropServices;

namespace MyApp
{
    internal class Program
    {

        [DllImport("C:\\_wspace\\cpp\\cpp-interop\\shared_lib.dll", CallingConvention = CallingConvention.Cdecl)]
        static extern int add(int a, int b);
        [DllImport("C:\\_wspace\\cpp\\cpp-interop\\shared_lib.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.Cdecl)]
        static extern void strCat(string str1, string str2, StringBuilder newStr);
        [DllImport("C:\\_wspace\\cpp\\cpp-interop\\shared_lib.dll", CallingConvention = CallingConvention.Cdecl)]
        static extern void executeCommand(string command);
         [DllImport("C:\\_wspace\\cpp\\cpp-interop\\shared_lib.dll", CallingConvention = CallingConvention.Cdecl)]
        static extern void printSomething(string str);
        static void Main(string[] args)
        {
            Console.WriteLine("Hello Mars!");

            int c = add(10, 20);
            System.Console.WriteLine($"Sum of two numbers is : {c}");
            StringBuilder sBuilder = new StringBuilder("Huh!");
            strCat("I like"," Beer. Ok?",sBuilder);
            System.Console.WriteLine(sBuilder);
            executeCommand(@"dir c:\");
            printSomething("Hello Pluto?");
        }
    }
}