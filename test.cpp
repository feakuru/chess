#include <cppunit/ui/text/TextTestRunner.h>
#include "./tests/FigureCreationTestCase.cpp"

int main() {
    CppUnit::TextTestRunner runner;
    runner.addTest(new FigureCreationTestCase());
    runner.run();
    return 0;
}