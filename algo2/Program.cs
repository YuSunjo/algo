using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace algo2
{
    class Program
    {
        static void Main(string[] args)
		{
			//홀짝 판별
			//string input;
			//input = Console.ReadLine();

			//int num = int.Parse(input);

			//if (num % 2 == 0)
			//{
			//	Console.WriteLine("even");
			//}
			//else if(num%2 ==1)
			//{
			//	Console.WriteLine("odd");
			//         }
			//         else
			//         {
			//	Console.WriteLine("잘못입력했습니다.");
			//         }

			//
			//string input1, input2, input3;
			//input1 = Console.ReadLine();
			//input2 = Console.ReadLine();
			//input3 = Console.ReadLine();

			//float korean = float.Parse(input1);
			//float math = float.Parse(input2);
			//float english = float.Parse(input3);

			//float avg = (korean + math + english) / 3;
			//string grade;

			//if(avg >= 90)
			//         {
			//	grade = "A";
			//         }
			//else if(avg>=80)
			//         {
			//	grade = "B";
			//         }
			//else if (avg >= 70)
			//{
			//	grade = "C";
			//}
			//else if (avg >= 60)
			//{
			//	grade = "D";
			//}
			//else
			//         {
			//	grade = "F";
			//         }

			//Console.WriteLine($"{avg:F2},{grade}");

			string[] token;
			string str;
			string grade;
			double[] tab = new double[10];

			double tot = 0, avg;

			str = null;
			str = Console.ReadLine();

			token = str.Split(' ');
			for(int j=0; j<token.Length; j++)
            {
				token[j].Trim();
            }
			for(int j=0; j<token.Length; j++)
            {
				tab[j] = Convert.ToDouble(token[j]);
            }
			
			for(int j=0; j<token.Length; j++)
            {
				tot += tab[j];
            }
			avg = tot / token.Length;

            if (avg >= 90)
            {
                grade = "A";
            }
            else if (avg >= 80)
            {
                grade = "B";
            }
            else if (avg >= 70)
            {
                grade = "C";
            }
            else if (avg >= 60)
            {
                grade = "D";
            }
            else
            {
                grade = "F";
            }

			Console.WriteLine($"{avg:F2} {grade}");





        }
	}
}
