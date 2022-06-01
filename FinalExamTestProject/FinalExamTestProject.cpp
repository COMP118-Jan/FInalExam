#include "pch.h"
#include "CppUnitTest.h"
#include "../FInalExam/FInalExam.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FinalExamTestProject
{
	TEST_CLASS(FinalExamTestProject)
	{
	public:
		
		TEST_METHOD(lookingForElementsInMatrixUnitTest)
		{
			//arrange
			const double valueToLookFor = 1.0;
			double  matrixToBeSearched[4][3];
 
			//act
			int result = lookForElementsInMatrix(valueToLookFor, matrixToBeSearched);

			//assert
			assert(result == 0);
		}
	};
}
