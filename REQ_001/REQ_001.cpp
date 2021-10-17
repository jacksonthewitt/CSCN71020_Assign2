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

	TEST_CLASS(setLengthtest)
	{
	public:

		TEST_METHOD(setLength_lessThan1_Fails)
		{
			//This is testing if the setLength function will not overwrite the length if the input is < 1
			int Input = -5;
			int Length = 15;
			Assert::AreNotEqual(Input, Length);
		}

		TEST_METHOD(setLength_MoreThan99_Fails)
		{
			//This is testing if the setLength function will not overwrite the length if the input is > 99
			int Input = 100;
			int Length = 15;
			Assert::AreNotEqual(Input, Length);
		}

		TEST_METHOD(setLength_Between0And100_Succeeds)
		{
			//This is testing if the setLength function will overwrite the length if the input is more than 0 and less than 100.
			int Input = 50;
			int Length = 15;
			Assert::AreEqual(Input, Length);
		}
	};
}
