using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace algo3
{
    
    class Program
    {
        //static void Main(string[] args)
        //{
        //    string str;
        //    str = Console.ReadLine();
        //    int num;
        //    num = int.Parse(str);

        //    int sum = 0;
        //    for(int i=0; i<num; i++)
        //    {
        //        sum += i;
        //    }
        //    Console.WriteLine($"{sum}");
        //}

        //369에서 박수 친 숫자 세기 
        static void Main(string[] args)
        {
            string str;
            str = Console.ReadLine();
            int num,j;
            num = int.Parse(str);
            int count = 0;

            for (int i = 1; i < num; i++)
            {
                j = i;
                while (j > 0)
                {
                    if (j % 10 == 3 || j % 10 == 6 || j % 10 == 9)
                    {
                        count += 1;
                    }
                    j = j / 10;
                }
            }
            Console.WriteLine(count);

            //for(int i=0; i<num; i++)
            //{
            //    //10이상인 경우 
            //    if(i>=10)
            //    {
            //        //ten 10자리 숫자 ,one 1의 자리숫자
            //        int ten = i / 10;
            //        int one = i % 10;
            //        if(ten ==3 || ten ==6 || ten ==9)
            //        {
            //            count += 1;
            //        }

            //        if(one ==3 || one ==6 || one==9)
            //        {
            //            count += 1;
            //        }

            //    }
            //    else
            //    {
            //        //10보다 작을 경우 
            //        if(i ==3 || i ==6 || i ==9)
            //        {
            //            count += 1;
            //        }
            //    }

            //}
            //Console.WriteLine(count);




        }
    }
}
