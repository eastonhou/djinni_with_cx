// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from exception.djinni

#pragma once

#include <cstdint>
#include <memory>

namespace cppns {

class CppException {
public:
    virtual ~CppException() {}

    virtual int32_t throw_an_exception() = 0;

    static std::shared_ptr<CppException> get();
};

}  // namespace cppns
