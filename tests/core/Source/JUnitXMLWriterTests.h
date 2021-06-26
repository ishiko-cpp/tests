/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/tests/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_TESTFRAMEWORK_TESTS_CORE_JUNITXMLWRITERTESTS_H_
#define _ISHIKO_TESTFRAMEWORK_TESTS_CORE_JUNITXMLWRITERTESTS_H_

#include <Ishiko/Tests/TestFrameworkCore.h>

class JUnitXMLWriterTests : public Ishiko::Tests::TestSequence
{
public:
    JUnitXMLWriterTests(const Ishiko::Tests::TestNumber& number, const Ishiko::Tests::TestEnvironment& environment);

private:
    static void ConstructorTest1(Ishiko::Tests::Test& test);
};

#endif