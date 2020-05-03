#include "pch.h"
#include "leetcode-cpp/p3/a2/p3_a2_solution.h"


namespace leetcode {
    namespace p3 {
        namespace a2 {

            // Runtime: 20 ms (63.39%)
            // Memory Usage: 10 MB (73.13%)
            int Solution::lengthOfLongestSubstring(const std::string& s) const noexcept {

                std::unordered_map<char, int> letter_to_last_index;
                auto substring_start_index{ 0 };
                auto max_substring_length{ 0 };
                const auto size{ s.size() };

                for (auto i{ 0 }; i < size; ++i) {
                    if (letter_to_last_index.find(s[i]) != letter_to_last_index.cend() &&
                        letter_to_last_index[s[i]] >= substring_start_index) {
                        substring_start_index = letter_to_last_index[s[i]] + 1;
                    }

                    max_substring_length =
                        std::max(max_substring_length, i - substring_start_index + 1);

                    letter_to_last_index[s[i]] = i;
                }

                return max_substring_length;
            }

        } // namespace p3_runtime
    }
}