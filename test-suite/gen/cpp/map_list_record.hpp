// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from map.djinni

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

namespace cppns {

struct MapListRecord final {
    std::vector<std::unordered_map<std::string, int64_t>> map_list;

    MapListRecord(std::vector<std::unordered_map<std::string, int64_t>> map_list)
    : map_list(std::move(map_list))
    {}
    MapListRecord() {}
};

}  // namespace cppns
