#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int *length, int *width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(getPerimeter_WrongFunction_Fails)
		{ //Testing the getPerimeter function by using 1 for length and width
			int length = 1;
			int width = 1;
			int Result = 0;
			Result = getPerimeter(&length,&width);
			Assert::AreEqual(4, Result);
		}

		TEST_METHOD(getArea_CorrectFunction_Passes)
		{//Testing the getArea function by using 1 for length and width
			int length = 1;
			int width = 1;
			int Result = 0;
			Result = getArea(&length, &width);
			Assert::AreEqual(1, Result);
		}

	};
}

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(setLengthTest_Length100_Fails)
		{
			//Testing setLength with a length of 100  
			int length= NULL;
			int Result = 100;
			setLength(100, &length);
			Assert::IsTrue(length > 1 && length < 99);
		}

		TEST_METHOD(setLength_LengthNegative_Fails)
		{
			//Testing setLength with a length of -1
			int length = NULL;
			int Result = -1;
			setLength(-1, &length);
			Assert::IsTrue(length>1&&length<99);
		}

		TEST_METHOD(setLength_Length50_Passes)
		{
			//Testing setLength with a length of 50
			int length = NULL;
			int Result = 50;
			setLength(50, &length);
			Assert::IsTrue(length > 1 && length < 99);
		}

		TEST_METHOD(setWidth_Width100_Fails)
		{
			//Testing setLength with a width of 100
			int width = NULL;
			int Result = 100;
			setLength(100, &width);
			Assert::IsTrue(width > 1 && width < 99);
		}

		TEST_METHOD(setWidth_WidthNegative_Fails)
		{
			//Testing setLength with a width of -1
			int width = NULL;
			int Result = -1;
			setLength(-1, &width);
			Assert::IsTrue(width > 1 && width < 99);
		}

		TEST_METHOD(setWidth_Width50_Passes)
		{
			//Testing setLength with a width of 50
			int width = NULL;
			int Result = 50;
			setLength(50, &width);
			Assert::IsTrue(width > 1 && width < 99);
		}
	};
}
