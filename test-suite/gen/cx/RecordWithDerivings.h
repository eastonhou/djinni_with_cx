// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#pragma once

#include "../cpp/record_with_derivings.hpp"

namespace System { namespace Cxns {

public ref class RecordWithDerivings sealed : public Platform::Object {
    property int32_t Key1;
    property Platform::String^ Key2;
internal:
    ::cppns::RecordWithDerivings toCpp();
    static RecordWithDerivings^ fromCpp(const ::cppns::RecordWithDerivings& value);

    bool Equals(RecordWithDerivings^ rhs);

    int32 CompareTo(RecordWithDerivings^ rhs);
};

} }  // namespace System::Cxns
