#include "pch.h"
#include "CppUnitTest.h"
#include "C://Users/User/source/repos/5.1E/5.1E/myerror.h"
#include "C://Users/User/source/repos/5.1E/5.1E/myerror.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			myerror e("q");
			string s = e.what();
			string s2 = "q";
			Assert::AreEqual(s2, s);
		}
	};
}
