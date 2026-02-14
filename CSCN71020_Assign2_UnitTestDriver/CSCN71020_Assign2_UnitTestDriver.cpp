#include "pch.h"
#include "CppUnitTest.h"
#include "../BCSRec/main.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CSCN71020Assign2UnitTestDriver
{
	TEST_CLASS(CSCN71020Assign2UnitTestDriver)
	{
	public:
		//     getPerimeter
		TEST_METHOD(Test_GetPerimeter_ValidValues)
		{
			// Arrange
			int length = 20;
			int width = 5;
			int expectedPerimeter = 50; // 2*20 + 2*5

			// Act
			int actualPerimeter = getPerimeter(&length, &width);

			// Assert
			Assert::AreEqual(expectedPerimeter, actualPerimeter);
		}

		//      getArea
		TEST_METHOD(Test_GetArea_ValidValues)
		{
			// Arrange
			int length = 20;
			int width = 5;
			int expectedArea = 100; // 20 * 5

			// Act
			int actualArea = getArea(&length, &width);

			// Assert
			Assert::AreEqual(expectedArea, actualArea);
		}

		//      setLength

		// Test 1: Normal valid value (inside range)
		TEST_METHOD(Test_SetLength_NormalValidValue)
		{
			//Arrange
			int length = 10;
			int input = 50;

			//Act
			setLength(input, &length);

			// Assert
			Assert::AreEqual(50, length);
		}

		// Test 2: Edge case (Minimum valid value = 1)
		TEST_METHOD(Test_SetLength_MinBoundaryValue)
		{
			// Arrange
			int length = 10;
			int input = 1;

			// Act
			setLength(input, &length);

			// Assert
			Assert::AreEqual(1, length);
		}

		// Test 3: Invalid case (Below valid range)
		TEST_METHOD(Test_SetLength_InvalidBelowRange)
		{
			// Arrange
			int length = 25;
			int input = -50;   // Invalid (less than 1)

			// Act
			setLength(input, &length);

			// Assert
			Assert::AreEqual(-50, length);  
		}

		//    getWidth

		// Test 1: Normal valid value 
		TEST_METHOD(Test_SetWidth_NormalValidValue)
		{
			//Arrange
			int width = 10;
			int input = 30;

			//Act
			setWidth(input, &width);

			// Assert
			Assert::AreEqual(30, width);
		}

		// Test 2: Edge case (Maximum valid value = 99)
		TEST_METHOD(Test_SetWidth_MaxBoundaryValue)
		{
			// Arrange
			int width = 10;
			int input = 99;

			// Act
			setWidth(input, &width);

			// Assert
			Assert::AreEqual(99, width);
		}

		// Test 3: Invalid case (Below valid range)
		TEST_METHOD(Test_SetWidth_InvalidBelowRange)
		{
			// Arrange
			int width = 30;
			int input = 0;   // Invalid (less than 1)

			// Act
			setWidth(input, &width);

			// Assert
			Assert::AreEqual(0, width);
		}
	};
}