// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from set.djinni

#pragma once

#include "djinni_support.hpp"
#include "set_record.hpp"

namespace jnins {

class SetRecord final {
public:
    using CppType = ::SetRecord;
    using JniType = jobject;

    using Boxed = SetRecord;

    ~SetRecord();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    SetRecord();
    friend ::djinni::JniClass<SetRecord>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("SetRecord") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/util/HashSet;Ljava/util/HashSet;)V") };
    const jfieldID field_set { ::djinni::jniGetFieldID(clazz.get(), "set", "Ljava/util/HashSet;") };
    const jfieldID field_iset { ::djinni::jniGetFieldID(clazz.get(), "iset", "Ljava/util/HashSet;") };
};

}  // namespace jnins
