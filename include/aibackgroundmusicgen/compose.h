// compose — part of ai-background-music-gen.

#pragma once

#include <string>
#include <vector>

namespace aibackgroundmusicgen {

class Compose {
public:
    explicit Compose(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace aibackgroundmusicgen
