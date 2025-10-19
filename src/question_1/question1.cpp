#include "question1.h"
#include <string>
#include <iostream>

std::string transcribe_dna_into_rna(const std::string &in) {
    std::string out;
    out.reserve(in.size());
    for (char c : in) out.push_back(c == 'T' ? 'U' : c);
    return out;
}

bool test_config()
{
    return true;
}