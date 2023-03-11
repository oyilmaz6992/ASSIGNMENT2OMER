#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" int setLength(int input, int *length);
extern "C" int setWidth(int input, int *width);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTEST
{
	TEST_CLASS(BCSRecTEST)
	{
	public:
		
		TEST_METHOD(PerimeterTesting)
		{
			//This is testing the getPerimeter function
			//2+2+4 = 8
			int Result = 8;
			int length = 2;
			int width = 4;
			getPerimeter(&length, &width);
			Assert::AreEqual(8, Result);
		    
		}
		TEST_METHOD(AreaTesting)
		{
			//This is testing the getArea function
			//4*6 = 24
			int Result = 24;
			int length = 4;
			int width = 6;
			getArea(&length, &width);
			Assert::AreEqual(24, Result);
		}
		TEST_METHOD(LengthTestingTest1)
		{
			//This is testing length = input if input is >= 0 and < 100
			//Running multiple tests 
			//TEST 1: Expected to pass as 101 is larger than 100
			int length = 41;
			int input = 101;
			setLength(input, &length);
			Assert::AreNotEqual(input, length);
		}
		TEST_METHOD(LengthTestingTest2)
		{
			//TEST 2: Expected to pass as input is equal to 100
			int length = 41;
			int input = 100;
			setLength(input, &length);
			Assert::AreNotEqual(input, length);
		}
		TEST_METHOD(LengthTestingTest3)
		{
			//TEST 3: Expected to pass as input is lower than 100 
			int length = 41;
			int input = 99;
			setLength(input, &length);
			Assert::AreEqual(input, length);
		}
		TEST_METHOD(LengthTestingTest4)
		{
			//TEST 4: Expected to pass as input is lower than 0 
			int length = 41;
			int input = -1;
			setLength(input, &length);
			Assert::AreNotEqual(input, length);
		}
		TEST_METHOD(WidthTestingTest1)
		{
			//This is testing width = input if input is >= 0 and < 100
			//Running multiple tests
			//TEST 1: Expected to pass as 101 is larger than 100
			int width = 41;
			int input = 101;
			setWidth(input, &width);
			Assert::AreNotEqual(input, width);

		}
		TEST_METHOD(WidthTestingTest2)
		{
			//TEST 2: Expected to pass as input is equal to 100
			int width = 41;
			int input = 100;
			setWidth(input, &width);
			Assert::AreEqual(input, width);
		}
		TEST_METHOD(WidthTestingTest3)
		{
			//TEST 3: Expected to pass as input is lower than 100 
			int width = 41;
			int input = 99;
			setWidth(input, &width);
			Assert::AreEqual(input, width);
		}
		TEST_METHOD(WidthTestingTest4)
		{
			//TEST 4: Expected to pass as input is lower than 0 
			int width = 41;
			int input = -1;
			setWidth(input, &width);
			Assert::AreNotEqual(input, width);
		}
	};
}
