#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int, int);
extern "C" int getArea(int, int);
extern "C" void setLength(int, int);
extern "C" void setWidth(int, int);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(Perimetertest)
	{
	public:
		
		TEST_METHOD(getPerimeter_2PositiveIntegers_Succeeds)
		{
			//This is testing the getPerimeter function by using (5+10)*2.
			int Result = 0;
			Result = getPerimeter(5, 10);
			Assert::AreEqual(30, Result);
		}
	};

	TEST_CLASS(Areatest)
	{
	public:

		TEST_METHOD(getArea_2PositiveIntegers_Succeeds)
		{
			//This is testing the getArea function by using 5*10
			int Result = 0;
			Result = getArea(5, 10);
			Assert::AreEqual(50, Result);
		}
	};
}
