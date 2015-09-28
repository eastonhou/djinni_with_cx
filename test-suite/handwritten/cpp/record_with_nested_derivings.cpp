// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#include "record_with_nested_derivings.hpp"  // my header

namespace cppns {


bool operator==(const RecordWithNestedDerivings& lhs, const RecordWithNestedDerivings& rhs) {
    return lhs.key == rhs.key &&
           lhs.rec == rhs.rec;
}

bool operator!=(const RecordWithNestedDerivings& lhs, const RecordWithNestedDerivings& rhs) {
    return !(lhs == rhs);
}

bool operator<(const RecordWithNestedDerivings& lhs, const RecordWithNestedDerivings& rhs) {
    if (lhs.key < rhs.key) {
        return true;
    }
    if (rhs.key < lhs.key) {
        return false;
    }
    if (lhs.rec < rhs.rec) {
        return true;
    }
    if (rhs.rec < lhs.rec) {
        return false;
    }
    return false;
}

bool operator>(const RecordWithNestedDerivings& lhs, const RecordWithNestedDerivings& rhs) {
    return rhs < lhs;
}

bool operator<=(const RecordWithNestedDerivings& lhs, const RecordWithNestedDerivings& rhs) {
    return !(rhs < lhs);
}

bool operator>=(const RecordWithNestedDerivings& lhs, const RecordWithNestedDerivings& rhs) {
    return !(lhs < rhs);
}

}  // namespace cppns
