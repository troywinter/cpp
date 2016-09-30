#include "stdafx.h"
#include "CppUnitTest.h"
#include "Square.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here
			Square s;
			s.length = 1;
			s.width = 1;
			Square g(s);
			Assert::AreEqual(g == s, true);
		}

	};
}