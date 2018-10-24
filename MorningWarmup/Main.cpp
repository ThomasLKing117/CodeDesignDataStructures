#include <iostream>

int main()
{

}





////Write a function called SumTo that accepts an integer parameter N and returns the sum of all integers from 1 to N, including N.
//
//int SumTo(int N)
//{
//	/*int temp = 1;
//	int sum = 0;
//	if (sum != N % 2)
//	{
//		for (int i = 0; i < N / 2 + 1; i++)
//		{
//			sum = N * i;
//			temp++;
//		}
//	}
//
//	if (sum == N % 2)
//	{
//		for (int i = 0; i < N / 2 + 1; i++)
//		{
//			sum = N * i - (N /2);
//			temp++;
//		}
//	}
//	return sum + N;*/
//
//	int sum = 0;
//	for (int i = 0; i <= N; i++)
//	{
//		sum += i;
//	}
//	return sum;
//}
//
//int main()
//{
//	SumTo(9);
//	return 0;
//}






////Create a template function that will return the sum of two values passed in.
////Test Cases must include the use of the following types, integer, floating point, and a custom data type.
//
//template <typename T>
//T Add(T x, T y)
//{
//	return x + y;
//}
//
//
//class Test
//{
//public:
//	int num = 0;
//	
//	Test operator+(Test other)
//	{
//		Test temp;
//		 temp.num = num + other.num;
//		 return temp;
//	}
//};
//
//
//int main()
//{
//	int numSum = Add(116, 1);
//	float floatSum = Add(4.8f, 1.117f);
//
//	Test one;
//	one.num = 5;
//	Test two;
//	two.num = 10;
//
//	Test newCustomSum = Add(one, two);
//
//	return 0;
//}