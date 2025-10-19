#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

// C++
#ifndef SRC_QUESTION_1_TEST_QUESTION1_H
#define SRC_QUESTION_1_TEST_QUESTION1_H

#include <string>

inline bool test_transcribe_simple() {
    return transcribe_dna_into_rna("GATGGAACTTGACTACGTAAATT") == "GAUGGAACUUGACUACGUAAAUU";
}
inline bool test_config_wrapper() {
    // Calls the existing test_config() declared in question1.h
    return test_config();
}

inline bool run_tests_question1() {
    bool ok = true;
    ok = ok && test_transcribe_simple();
    ok = ok && test_config_wrapper();
    return ok;
}

#endif // SRC_QUESTION_1_TEST_QUESTION1_H