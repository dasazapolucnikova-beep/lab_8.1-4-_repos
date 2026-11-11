#include "pch.h"
#include "CppUnitTest.h"
#include "../Project 8.1 (4)/Project 8.1 (4).cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81
{
	TEST_CLASS(UnitTest81)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// 1. Тест функції Count
			string str1 = "xyaabbccz";
			int count = Count(str1);
			Assert::AreEqual(3, count);

			// 2. Тест функції Change
			string str2 = "xyaabbccz";
			string dest = Change(str2);

			Assert::AreEqual(string("xy*********z"), dest);
		}
	};
}