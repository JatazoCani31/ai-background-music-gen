// compose.cpp — part of ai-background-music-gen.

#include "aibackgroundmusicgen/compose.h"

#include <cstdio>

namespace aibackgroundmusicgen {

Compose::Compose(const std::string& config_path)
    : config_path_(config_path) {}

void Compose::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Compose::run() {
    if (verbose_) std::fprintf(stderr, "[ai-background-music-gen] compose: run\n");
    // core logic lives here
    return true;
}

}  // namespace aibackgroundmusicgen
