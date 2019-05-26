#include <cppunit/TestCase.h>
#include "../figure.h"

/*
 * This TestCase simply checks the creation of figures
 * by running it and returning true if no exceptions
 * were caught.
 */
class FigureCreationTestCase: public CppUnit::TestCase {
public:
    bool canCreatePawns() {
        try {
            Pawn p1(true);
            Pawn p2(false);
        }
        catch (const std::exception& ex) {
            std::cout << "Exception while creating Pawn: "
                      << ex.what() << std::endl;
            return false;
        }
        return true;
    }

    bool canCreateRooks() {
        try {
            Rook p1(true);
            Rook p2(false);
        }
        catch (const std::exception& ex) {
            std::cout << "Exception while creating Rook: "
                      << ex.what() << std::endl;
            return false;
        }
        return true;
    }

    bool canCreateBishops() {
        try {
            Bishop p1(true);
            Bishop p2(false);
        }
        catch (const std::exception& ex) {
            std::cout << "Exception while creating Bishop: "
                      << ex.what() << std::endl;
            return false;
        }
        return true;
    }

    bool canCreateKnights()
    {
        try {
            Knight p1(true);
            Knight p2(false);
        }
        catch (const std::exception& ex) {
            std::cout << "Exception while creating Knight: "
                      << ex.what() << std::endl;
            return false;
        }
        return true;
    }

    bool canCreateKings()
    {
        try {
            King p1(true);
            King p2(false);
        }
        catch (const std::exception& ex) {
            std::cout << "Exception while creating King: "
                      << ex.what() << std::endl;
            return false;
        }
        return true;
    }

    bool canCreateQueens()
    {
        try {
            Queen p1(true);
            Queen p2(false);
        }
        catch (const std::exception& ex) {
            std::cout << "Exception while creating Queen: "
                      << ex.what() << std::endl;
            return false;
        }
        return true;
    }

    void runTest() {
        CPPUNIT_ASSERT(canCreatePawns());
        CPPUNIT_ASSERT(canCreateRooks());
        CPPUNIT_ASSERT(canCreateKnights());
        CPPUNIT_ASSERT(canCreateBishops());
        CPPUNIT_ASSERT(canCreateKings());
        CPPUNIT_ASSERT(canCreateQueens());
    }
};