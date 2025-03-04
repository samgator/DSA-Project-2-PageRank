//#include <catch2/catch_test_macros.hpp>
//#include <iostream>
//#include "AdjacencyList.h"
//using namespace std;
//
//TEST_CASE("Circular Graph Test") {
//
//    AdjacencyList Graph;
//    ostringstream oss;
//    streambuf* testCout = cout.rdbuf();
//    cout.rdbuf(oss.rdbuf());
//
//    string expectedOutput = R"(one.com 0.33
//three.com 0.33
//two.com 0.33
//)";
//
//    int power_iterations = 1;
//    Graph.insert("one.com", "two.com");
//    Graph.insert("two.com", "three.com");
//    Graph.insert("three.com", "one.com");
//
//
//    Graph.PageRank(power_iterations);
//    Graph.printRanks();
//    REQUIRE(oss.str() == expectedOutput);
//    oss.str("");
//
//    cout.rdbuf(testCout);
//}
//
//TEST_CASE("Single Page Test") {
//
//    AdjacencyList Graph;
//    ostringstream oss;
//    streambuf* testCout = cout.rdbuf();
//    cout.rdbuf(oss.rdbuf());
//
//    string expectedOutput = R"(one.com 1.00
//)";
//
//    int power_iterations = 1;
//    Graph.insert("one.com", "one.com");
//
//    Graph.PageRank(power_iterations);
//    Graph.printRanks();
//    REQUIRE(oss.str() == expectedOutput);
//    oss.str("");
//
//    cout.rdbuf(testCout);
//}
//
//TEST_CASE("Disconnected Graph Test") {
//
//    AdjacencyList Graph;
//    ostringstream oss;
//    streambuf* testCout = cout.rdbuf();
//    cout.rdbuf(oss.rdbuf());
//
//    string expectedOutput = R"(four.com 0.25
//one.com 0.25
//three.com 0.25
//two.com 0.25
//)";
//
//    int power_iterations = 1;
//    Graph.insert("one.com", "two.com");
//    Graph.insert("two.com", "one.com");
//    Graph.insert("three.com", "four.com");
//    Graph.insert("four.com", "three.com");
//
//
//    Graph.PageRank(power_iterations);
//    Graph.printRanks();
//    REQUIRE(oss.str() == expectedOutput);
//    oss.str("");
//
//    cout.rdbuf(testCout);
//}
//
//TEST_CASE("Large Input Small P Test") {
//
//    AdjacencyList Graph;
//    ostringstream oss;
//    streambuf* testCout = cout.rdbuf();
//    cout.rdbuf(oss.rdbuf());
//
//    string expectedOutput = R"(apple.com 0.06
//chase.com 0.06
//disney.com 0.06
//facebook.com 0.06
//google.com 0.06
//microsoft.com 0.06
//openai.com 0.06
//pcbuildinguf.com 0.06
//python.org 0.06
//reactjs.org 0.06
//roblox.com 0.06
//samsung.com 0.06
//ufl.edu 0.06
//weather.com 0.06
//wikipedia.org 0.06
//youtube.com 0.06
//)";
//
//    int power_iterations = 1;
//    Graph.insert("openai.com", "roblox.com");
//    Graph.insert("reactjs.org", "samsung.com");
//    Graph.insert("weather.com", "youtube.com");
//    Graph.insert("chase.com", "disney.com");
//    Graph.insert("wikipedia.org", "google.com");
//    Graph.insert("roblox.com", "ufl.edu");
//    Graph.insert("openai.com", "reactjs.org");
//    Graph.insert("python.org", "ufl.edu");
//    Graph.insert("ufl.edu", "youtube.com");
//    Graph.insert("roblox.com", "youtube.com");
//    Graph.insert("chase.com", "pcbuildinguf.com");
//    Graph.insert("roblox.com", "samsung.com");
//    Graph.insert("ufl.edu", "reactjs.org");
//    Graph.insert("wikipedia.org", "chase.com");
//    Graph.insert("facebook.com", "disney.com");
//    Graph.insert("weather.com", "wikipedia.org");
//    Graph.insert("chase.com", "python.org");
//    Graph.insert("reactjs.org", "apple.com");
//    Graph.insert("disney.com", "python.org");
//    Graph.insert("weather.com", "pcbuildinguf.com");
//    Graph.insert("samsung.com", "reactjs.org");
//    Graph.insert("microsoft.com", "chase.com");
//    Graph.insert("roblox.com", "microsoft.com");
//    Graph.insert("microsoft.com", "disney.com");
//    Graph.insert("chase.com", "wikipedia.org");
//    Graph.insert("openai.com", "samsung.com");
//    Graph.insert("weather.com", "microsoft.com");
//    Graph.insert("openai.com", "youtube.com");
//    Graph.insert("disney.com", "openai.com");
//    Graph.insert("facebook.com", "weather.com");
//    Graph.insert("reactjs.org", "microsoft.com");
//    Graph.insert("weather.com", "roblox.com");
//    Graph.insert("wikipedia.org", "python.org");
//    Graph.insert("openai.com", "facebook.com");
//    Graph.insert("openai.com", "pcbuildinguf.com");
//    Graph.insert("youtube.com", "roblox.com");
//    Graph.insert("ufl.edu", "roblox.com");
//    Graph.insert("youtube.com", "wikipedia.org");
//    Graph.insert("roblox.com", "openai.com");
//    Graph.insert("reactjs.org", "wikipedia.org");
//    Graph.insert("pcbuildinguf.com", "openai.com");
//    Graph.insert("python.org", "google.com");
//    Graph.insert("samsung.com", "chase.com");
//    Graph.insert("youtube.com", "apple.com");
//    Graph.insert("reactjs.org", "ufl.edu");
//    Graph.insert("reactjs.org", "facebook.com");
//    Graph.insert("python.org", "microsoft.com");
//    Graph.insert("pcbuildinguf.com", "weather.com");
//    Graph.insert("disney.com", "weather.com");
//    Graph.insert("pcbuildinguf.com", "samsung.com");
//    Graph.insert("weather.com", "apple.com");
//    Graph.insert("openai.com", "python.org");
//    Graph.insert("google.com", "youtube.com");
//    Graph.insert("pcbuildinguf.com", "youtube.com");
//    Graph.insert("chase.com", "apple.com");
//    Graph.insert("roblox.com", "facebook.com");
//    Graph.insert("google.com", "apple.com");
//    Graph.insert("facebook.com", "python.org");
//    Graph.insert("google.com", "openai.com");
//    Graph.insert("google.com", "disney.com");
//    Graph.insert("chase.com", "ufl.edu");
//    Graph.insert("apple.com", "python.org");
//    Graph.insert("disney.com", "wikipedia.org");
//    Graph.insert("chase.com", "reactjs.org");
//    Graph.insert("roblox.com", "pcbuildinguf.com");
//    Graph.insert("chase.com", "openai.com");
//    Graph.insert("ufl.edu", "apple.com");
//    Graph.insert("pcbuildinguf.com", "disney.com");
//    Graph.insert("microsoft.com", "samsung.com");
//    Graph.insert("reactjs.org", "pcbuildinguf.com");
//    Graph.insert("ufl.edu", "wikipedia.org");
//    Graph.insert("microsoft.com", "wikipedia.org");
//    Graph.insert("google.com", "pcbuildinguf.com");
//    Graph.insert("weather.com", "google.com");
//    Graph.insert("apple.com", "disney.com");
//    Graph.insert("python.org", "samsung.com");
//    Graph.insert("python.org", "weather.com");
//    Graph.insert("apple.com", "google.com");
//    Graph.insert("youtube.com", "facebook.com");
//    Graph.insert("youtube.com", "disney.com");
//    Graph.insert("samsung.com", "ufl.edu");
//    Graph.insert("google.com", "samsung.com");
//    Graph.insert("facebook.com", "apple.com");
//    Graph.insert("weather.com", "samsung.com");
//    Graph.insert("disney.com", "reactjs.org");
//    Graph.insert("pcbuildinguf.com", "python.org");
//    Graph.insert("pcbuildinguf.com", "roblox.com");
//    Graph.insert("wikipedia.org", "openai.com");
//    Graph.insert("python.org", "youtube.com");
//    Graph.insert("disney.com", "apple.com");
//    Graph.insert("roblox.com", "reactjs.org");
//    Graph.insert("samsung.com", "pcbuildinguf.com");
//    Graph.insert("weather.com", "openai.com");
//    Graph.insert("ufl.edu", "python.org");
//    Graph.insert("facebook.com", "pcbuildinguf.com");
//    Graph.insert("disney.com", "chase.com");
//    Graph.insert("wikipedia.org", "samsung.com");
//    Graph.insert("wikipedia.org", "youtube.com");
//    Graph.insert("youtube.com", "reactjs.org");
//    Graph.insert("openai.com", "disney.com");
//    Graph.insert("python.org", "roblox.com");
//    Graph.insert("youtube.com", "pcbuildinguf.com");
//    Graph.insert("chase.com", "samsung.com");
//    Graph.insert("python.org", "pcbuildinguf.com");
//    Graph.insert("reactjs.org", "weather.com");
//    Graph.insert("wikipedia.org", "ufl.edu");
//    Graph.insert("google.com", "roblox.com");
//    Graph.insert("microsoft.com", "reactjs.org");
//    Graph.insert("samsung.com", "youtube.com");
//    Graph.insert("wikipedia.org", "reactjs.org");
//    Graph.insert("wikipedia.org", "weather.com");
//
//
//    Graph.PageRank(power_iterations);
//    Graph.printRanks();
//    REQUIRE(oss.str() == expectedOutput);
//    oss.str("");
//
//    cout.rdbuf(testCout);
//}
//
//TEST_CASE("Large Input Large P Test") {
//
//    AdjacencyList Graph;
//    ostringstream oss;
//    streambuf* testCout = cout.rdbuf();
//    cout.rdbuf(oss.rdbuf());
//
//    string expectedOutput = R"(chase.com 0.09
//facebook.com 0.05
//getbootstrap.com 0.08
//github.com 0.07
//instagram.com 0.09
//microsoft.com 0.03
//mozilla.org 0.05
//pcbuildinguf.com 0.11
//python.org 0.02
//reactjs.org 0.08
//roblox.com 0.10
//samsung.com 0.04
//stackoverflow.com 0.03
//twitter.com 0.09
//ufl.edu 0.03
//weather.com 0.00
//wikipedia.org 0.04
//)";
//
//    int power_iterations = 13;
//    Graph.insert("reactjs.org", "instagram.com");
//    Graph.insert("samsung.com", "mozilla.org");
//    Graph.insert("microsoft.com", "twitter.com");
//    Graph.insert("github.com", "twitter.com");
//    Graph.insert("getbootstrap.com", "reactjs.org");
//    Graph.insert("weather.com", "instagram.com");
//    Graph.insert("pcbuildinguf.com", "getbootstrap.com");
//    Graph.insert("python.org", "ufl.edu");
//    Graph.insert("pcbuildinguf.com", "reactjs.org");
//    Graph.insert("roblox.com", "chase.com");
//    Graph.insert("getbootstrap.com", "twitter.com");
//    Graph.insert("mozilla.org", "wikipedia.org");
//    Graph.insert("github.com", "stackoverflow.com");
//    Graph.insert("reactjs.org", "pcbuildinguf.com");
//    Graph.insert("facebook.com", "mozilla.org");
//    Graph.insert("python.org", "getbootstrap.com");
//    Graph.insert("facebook.com", "instagram.com");
//    Graph.insert("stackoverflow.com", "chase.com");
//    Graph.insert("twitter.com", "roblox.com");
//    Graph.insert("github.com", "roblox.com");
//    Graph.insert("stackoverflow.com", "getbootstrap.com");
//    Graph.insert("getbootstrap.com", "github.com");
//    Graph.insert("samsung.com", "pcbuildinguf.com");
//    Graph.insert("chase.com", "roblox.com");
//    Graph.insert("twitter.com", "getbootstrap.com");
//    Graph.insert("pcbuildinguf.com", "twitter.com");
//    Graph.insert("github.com", "pcbuildinguf.com");
//    Graph.insert("wikipedia.org", "chase.com");
//    Graph.insert("weather.com", "python.org");
//    Graph.insert("ufl.edu", "microsoft.com");
//    Graph.insert("stackoverflow.com", "wikipedia.org");
//    Graph.insert("samsung.com", "stackoverflow.com");
//    Graph.insert("instagram.com", "samsung.com");
//    Graph.insert("mozilla.org", "pcbuildinguf.com");
//    Graph.insert("mozilla.org", "instagram.com");
//    Graph.insert("github.com", "mozilla.org");
//    Graph.insert("chase.com", "instagram.com");
//    Graph.insert("twitter.com", "reactjs.org");
//    Graph.insert("weather.com", "ufl.edu");
//    Graph.insert("microsoft.com", "facebook.com");
//    Graph.insert("mozilla.org", "chase.com");
//    Graph.insert("chase.com", "python.org");
//    Graph.insert("stackoverflow.com", "twitter.com");
//    Graph.insert("facebook.com", "stackoverflow.com");
//    Graph.insert("wikipedia.org", "reactjs.org");
//    Graph.insert("ufl.edu", "samsung.com");
//    Graph.insert("wikipedia.org", "github.com");
//    Graph.insert("wikipedia.org", "pcbuildinguf.com");
//    Graph.insert("chase.com", "microsoft.com");
//    Graph.insert("ufl.edu", "roblox.com");
//    Graph.insert("pcbuildinguf.com", "roblox.com");
//    Graph.insert("facebook.com", "pcbuildinguf.com");
//    Graph.insert("roblox.com", "getbootstrap.com");
//    Graph.insert("instagram.com", "chase.com");
//    Graph.insert("chase.com", "github.com");
//    Graph.insert("instagram.com", "facebook.com");
//    Graph.insert("ufl.edu", "mozilla.org");
//    Graph.insert("mozilla.org", "roblox.com");
//    Graph.insert("facebook.com", "chase.com");
//    Graph.insert("roblox.com", "wikipedia.org");
//    Graph.insert("roblox.com", "instagram.com");
//    Graph.insert("facebook.com", "samsung.com");
//    Graph.insert("wikipedia.org", "microsoft.com");
//    Graph.insert("python.org", "pcbuildinguf.com");
//    Graph.insert("roblox.com", "pcbuildinguf.com");
//    Graph.insert("ufl.edu", "getbootstrap.com");
//    Graph.insert("stackoverflow.com", "roblox.com");
//    Graph.insert("facebook.com", "wikipedia.org");
//    Graph.insert("github.com", "ufl.edu");
//    Graph.insert("python.org", "twitter.com");
//    Graph.insert("twitter.com", "chase.com");
//    Graph.insert("microsoft.com", "mozilla.org");
//    Graph.insert("roblox.com", "github.com");
//    Graph.insert("ufl.edu", "facebook.com");
//    Graph.insert("twitter.com", "ufl.edu");
//
//
//    Graph.PageRank(power_iterations);
//    Graph.printRanks();
//    REQUIRE(oss.str() == expectedOutput);
//    oss.str("");
//
//    cout.rdbuf(testCout);
//}
