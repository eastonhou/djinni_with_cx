// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#pragma once

#include "djinni_support.hpp"
#include "sort_items.hpp"

namespace djinni_generated {

class SortItems final : ::djinni::JniInterface<::SortItems, SortItems> {
public:
    using CppType = std::shared_ptr<::SortItems>;
    using JniType = jobject;

    using Boxed = SortItems;

    ~SortItems();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<SortItems>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return {jniEnv, ::djinni::JniClass<SortItems>::get()._toJava(jniEnv, c)}; }

private:
    SortItems();
    friend ::djinni::JniClass<SortItems>;
    friend ::djinni::JniInterface<::SortItems, SortItems>;

};

}  // namespace djinni_generated
