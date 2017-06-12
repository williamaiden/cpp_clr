using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using csharp_clr;

namespace csharp_console
{
    class csharp
    {
        static void Main(string[] args)
        {
            MyClr clr = new MyClr();
            clr.showInt(123);
            //Console.WriteLine("balabala");
            clr.showString("balabala");
        }
    }
}
