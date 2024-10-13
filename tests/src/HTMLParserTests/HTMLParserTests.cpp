// SPDX-FileCopyrightText: 2005-2024 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#include "HTMLParserTests.h"
#include "Ishiko/HTML/HTMLParser.h"

using namespace Ishiko;

HTMLParserTests::HTMLParserTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "HTMLParser tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void HTMLParserTests::ConstructorTest1(Test & test)
{
    HTMLParser html_parser;

    ISHIKO_TEST_PASS();
}
