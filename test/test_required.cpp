#include "catch.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <exception>

#include "../src/BSTLEAF.h"
#include "../src/BSTROOT.h"
#include "../src/BSTRAND.h"
#include "../src/AVL.h"

#include "book/Book.h"

bool compare(const std::string &lhs, const std::string &rhs) {
    return lhs < rhs;
}

bool equals_function(const std::string &lhs, const std::string &rhs) {
    return lhs == rhs;
}

SCENARIO("Sample test") {

    GIVEN("A list of words from a book") {
        Book b;
        WHEN("the words are inserted into a BSTLEAF") {
            cop3530::BSTLEAF<std::string,int, compare, equals_function> leaf;
            std::vector<std::string>::iterator iter = b.begin();
            for(; iter != b.end(); iter++) {
                try {
                    leaf.lookup(*iter)++;
                } catch (std::runtime_error &e) {
                    leaf.insert(*iter, 1);
                }
            }

            REQUIRE(leaf.lookup("for") == 5);
            REQUIRE(leaf.lookup("information") == 26);
            REQUIRE(leaf.lookup("http://www.google.com/search?q=REST") == 1);
            REQUIRE(leaf.lookup("GET") == 5);
        }

        WHEN("the words are inserted into a BSTROOT") {
            cop3530::BSTROOT<std::string,int, compare, equals_function> leaf;
            std::vector<std::string>::iterator iter = b.begin();
            for(; iter != b.end(); iter++) {
                try {
                    leaf.lookup(*iter)++;
                } catch (std::runtime_error &e) {
                    leaf.insert(*iter, 1);
                }
            }

            REQUIRE(leaf.lookup("for") == 5);
            REQUIRE(leaf.lookup("information") == 26);
            REQUIRE(leaf.lookup("http://www.google.com/search?q=REST") == 1);
            REQUIRE(leaf.lookup("GET") == 5);
        }

        WHEN("the words are inserted into a BSTRAND") {
            cop3530::BSTRAND<std::string,int, compare, equals_function> leaf;
            std::vector<std::string>::iterator iter = b.begin();
            for(; iter != b.end(); iter++) {
                try {
                    leaf.lookup(*iter)++;
                } catch (std::runtime_error &e) {
                    leaf.insert(*iter, 1);
                }
            }

            REQUIRE(leaf.lookup("for") == 5);
            REQUIRE(leaf.lookup("information") == 26);
            REQUIRE(leaf.lookup("http://www.google.com/search?q=REST") == 1);
            REQUIRE(leaf.lookup("GET") == 5);
        }

        WHEN("the words are inserted into an AVL") {
            cop3530::AVL<std::string,int, compare, equals_function> leaf;
            std::vector<std::string>::iterator iter = b.begin();
            for(; iter != b.end(); iter++) {
                try {
                    leaf.lookup(*iter)++;
                } catch (std::runtime_error &e) {
                    leaf.insert(*iter, 1);
                }
            }

            REQUIRE(leaf.lookup("for") == 5);
            REQUIRE(leaf.lookup("information") == 26);
            REQUIRE(leaf.lookup("http://www.google.com/search?q=REST") == 1);
            REQUIRE(leaf.lookup("GET") == 5);
        }
    }
}
