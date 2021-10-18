#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int *, int *);
extern "C" int getArea(int *, int *);
extern "C" void setLength(int, int *);
extern "C" void setWidth(int, int *);

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
			int Num1 = 5;
			int Num2 = 10;
			Result = getPerimeter(&Num1, &Num2);
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
			int Num1 = 5;
			int Num2 = 10;
			Result = getArea(&Num1, &Num2);
			Assert::AreEqual(50, Result);
		}
	};

	TEST_CLASS(setLengthtest)
	{
	public:

		TEST_METHOD(setLength_lessThan1_Fails)
		{
			//This is testing if the setLength function will not overwrite the length if the input is < 1
			int Input = 0;
			int Length = 15;
			setLength(Input, &Length);
			Assert::AreNotEqual(Input, Length);
		}

		TEST_METHOD(setLength_MoreThan99_Fails)
		{
			//This is testing if the setLength function will not overwrite the length if the input is > 99
			int Input = 100;
			int Length = 15;
			setLength(Input, &Length);
			Assert::AreNotEqual(Input, Length);
		}

		TEST_METHOD(setLength_Between0And100_Succeeds)
		{
			//This is testing if the setLength function will overwrite the length if the input is more than 0 and less than 100.
			int Input = 50;
			int Length = 15;
			setLength(Input, &Length);
			Assert::AreEqual(Input, Length);
		}
	};

	TEST_CLASS(setWidthtest)
	{
	public:

		TEST_METHOD(setWidth_lessThan1_Fails)
		{
			//This is testing if the setWidth function will not overwrite the width if the input is < 1
			int Input = 0;
			int Width = 15;
			setWidth(Input, &Width);
			Assert::AreNotEqual(Input, Width);
		}

		TEST_METHOD(setWidth_MoreThan99_Fails)
		{
			//This is testing if the setWidth function will not overwrite the width if the input is > 99
			int Input = 100;
			int Width = 15;
			setWidth(Input, &Width);
			Assert::AreNotEqual(Input, Width);
		}

		TEST_METHOD(setWidth_Between0And100_Succeeds)
		{
			//This is testing if the setWidth function will overwrite the width if the input is more than 0 and less than 100.
			int Input = 50;
			int Width = 15;
			setWidth(Input, &Width);
			Assert::AreEqual(Input, Width);
		}
	};
}
