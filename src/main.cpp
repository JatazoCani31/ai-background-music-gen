// main.cpp — entry point. Wires config and subsystems together.

#include "aibackgroundmusicgen/settings.h"
#include "aibackgroundmusicgen/compose.h"
#include "aibackgroundmusicgen/mood.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    aibackgroundmusicgen::Settings settings = aibackgroundmusicgen::Settings::load_default();
    aibackgroundmusicgen::Compose compose(settings.store_path);
    aibackgroundmusicgen::Mood mood(settings.store_path);
    std::fprintf(stderr, "[ai-background-music-gen] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
