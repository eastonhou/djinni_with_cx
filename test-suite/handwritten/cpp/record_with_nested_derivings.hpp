// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#pragma once

#include "record_with_derivings.hpp"
#include <cstdint>
#include <utility>

namespace cppns {

struct RecordWithNestedDerivings final {
    int32_t key;
    RecordWithDerivings rec;

    friend bool operator==(const RecordWithNestedDerivings& lhs, const RecordWithNestedDerivings& rhs);
    friend bool operator!=(const RecordWithNestedDerivings& lhs, const RecordWithNestedDerivings& rhs);

    friend bool operator<(const RecordWithNestedDerivings& lhs, const RecordWithNestedDerivings& rhs);
    friend bool operator>(const RecordWithNestedDerivings& lhs, const RecordWithNestedDerivings& rhs);

    friend bool operator<=(const RecordWithNestedDerivings& lhs, const RecordWithNestedDerivings& rhs);
    friend bool operator>=(const RecordWithNestedDerivings& lhs, const RecordWithNestedDerivings& rhs);

    RecordWithNestedDerivings(int32_t key,
                              RecordWithDerivings rec)
    : key(std::move(key))
    , rec(std::move(rec))
    {}
    RecordWithNestedDerivings() {}
};

}  // namespace cppns
