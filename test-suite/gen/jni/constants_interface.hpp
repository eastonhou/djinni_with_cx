// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constants.djinni

#pragma once

#include "constants_interface.hpp"
#include "djinni_support.hpp"

namespace jnins {

class ConstantsInterface final : ::djinni::JniInterface<::ConstantsInterface, ConstantsInterface> {
public:
    using CppType = std::shared_ptr<::ConstantsInterface>;
    using JniType = jobject;

    using Boxed = ConstantsInterface;

    ~ConstantsInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<ConstantsInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return {jniEnv, ::djinni::JniClass<ConstantsInterface>::get()._toJava(jniEnv, c)}; }

private:
    ConstantsInterface();
    friend ::djinni::JniClass<ConstantsInterface>;
    friend ::djinni::JniInterface<::ConstantsInterface, ConstantsInterface>;

};

}  // namespace jnins
