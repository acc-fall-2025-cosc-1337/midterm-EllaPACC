#include "question1.h"
#include <string>
#include <iostream>

int main() {
    std::string s = "GATGGAACTTGACTACGTAAATT";
    std::cout << transcribe_dna_into_rna(s) << '\n';
}