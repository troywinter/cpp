#include "stdafx.h"
#include "CppUnitTest.h"
#include "Square.h"
#include "Cube.h"
#include "Utility.h"
#include <vector>

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

		TEST_METHOD(Slicing)
		{
			/*
			 * Unit test for object slicing when passing object by value,
			 * when we are passing an derived class of a base class type parameter, 
			 * the parameter will be constructed using base class constructor, causing 
			 * we lose data except the base class part
			 * here we are not getting 3 item in the display function, but we only get 2
			 * that's why this test will fail
			 */
			std::vector<int> v { 2, 4, 8 };
			Cube c;
			c.length = 2;
			c.width = 4;
			c.height = 8;
			std::vector<int> r = print_info(c);
			Assert::AreEqual(v.size() == r.size(), true);

		}

	};
}