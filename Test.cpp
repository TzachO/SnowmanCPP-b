/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Tzach itshak Ofir>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	input.erase(' ');
	input.erase('\t');
	input.erase('\n');
	input.erase('\r');

	/*
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	*/

	return input;
}


TEST_CASE("Good snowman code") {
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    /* Add more checks here */
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    /* Add more checks here */
}


/* Add more test cases here */

TEST_CASE("Good snowman code") {
	//                     HNLRXYTB
	CHECK(nospaces(snowman(14221332)) == nospaces("      \n _===_\n (o..) \n<(> <)\\\n (\" \")"));
	/* Add more checks here */
}
/*

 HHHHH
 HHHHH
X(LNR)Y
X(TTT)Y
 (BBB) */
 
TEST_CASE("Good snowman code") {
	CHECK(nospaces(snowman(14221331)) == nospaces("      \n _===_\n (o..) \n<(> <)\\\n ( : )"));
	/* Add more checks here */
}

TEST_CASE("Good snowman code") {
	CHECK(nospaces(snowman(14221333)) == nospaces("      \n _===_\n (o..) \n<(> <)\\\n (___)"));
	/* Add more checks here */
}

TEST_CASE("Good snowman code") {
	CHECK(nospaces(snowman(14221334)) == nospaces("      \n _===_\n (o..) \n<(> <)\\\n (   )"));
	/* Add more checks here */
}

TEST_CASE("Good snowman code") {
	CHECK(nospaces(snowman(14221312)) == nospaces("      \n _===_\n (o..) \n<( : )\\\n (\" \")"));
	/* Add more checks here */
}

TEST_CASE("Good snowman code") {
	CHECK(nospaces(snowman(94221322)) == nospaces("      \n _===_\n (o..) \n<(] [)\\\n (\" \")"));
	/* Add more checks here */
}

TEST_CASE("Good snowman code") {
	CHECK(nospaces(snowman(14221342)) == nospaces("      \n _===_\n (o..) \n<(   )\\\n (\" \")"));
	/* Add more checks here */
}

TEST_CASE("Good snowman code") {
	CHECK(nospaces(snowman(11114412)) == nospaces("_===_\n(.,.)\n( : )\n(" ")"));
	/* Add more checks here */
}

TEST_CASE("Good snowman code") {
	CHECK(nospaces(snowman(11114413)) == nospaces("_===_\n(.,.)\n( : )\n(___)"));
	/* Add more checks here */
}

TEST_CASE("Good snowman code") {
	CHECK(nospaces(snowman(11114414)) == nospaces("_===_\n(.,.)\n( : )\n(   )"));
	/* Add more checks here */
}


TEST_CASE("Bad snowman code") {
	CHECK_THROWS(snowman(11111119));
	/* Add more checks here */
}

TEST_CASE("Bad snowman code") {
	CHECK_THROWS(snowman(11111181));
	/* Add more checks here */
}

TEST_CASE("Bad snowman code") {
	CHECK_THROWS(snowman(11111711));
	/* Add more checks here */
}

TEST_CASE("Bad snowman code") {
	CHECK_THROWS(snowman(11116111));
	/* Add more checks here */
}

TEST_CASE("Bad snowman code") {
	CHECK_THROWS(snowman(11151111));
	/* Add more checks here */
}

TEST_CASE("Bad snowman code") {
	CHECK_THROWS(snowman(11611111));
	/* Add more checks here */
}

TEST_CASE("Bad snowman code") {
	CHECK_THROWS(snowman(17111111));
	/* Add more checks here */
}

TEST_CASE("Bad snowman code") {
	CHECK_THROWS(snowman(81111111));
	/* Add more checks here */
}

TEST_CASE("Bad snowman code") {
	CHECK_THROWS(snowman(123));
	/* Add more checks here */
}

TEST_CASE("Bad snowman code") {
	CHECK_THROWS(snowman(1));
	/* Add more checks here */
}