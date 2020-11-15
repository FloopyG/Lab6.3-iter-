#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.3(iter).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab63iterTest
{
	TEST_CLASS(Lab63iterTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int a = 4;
			int c[a] = {1, 1, 1, 1};
			t = arrCountT(c, a, 0);
			Assert::AreEqual(t, 4);
		}
	};
}
