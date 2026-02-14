#include "pch.h"
#include "CppUnitTest.h"
#include "../BCSRec/main.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CSCN71020Assign2UnitTestDriver
{
	TEST_CLASS(CSCN71020Assign2UnitTestDriver)
	{
	public:
		
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
	};
}
