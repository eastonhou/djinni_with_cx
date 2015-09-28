// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#pragma once

#include "djinni_support.hpp"
#include "record_with_nested_derivings.hpp"

namespace jnins {

class RecordWithNestedDerivings final {
public:
    using CppType = ::cppns::RecordWithNestedDerivings;
    using JniType = jobject;

    using Boxed = RecordWithNestedDerivings;

    ~RecordWithNestedDerivings();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    RecordWithNestedDerivings();
    friend ::djinni::JniClass<RecordWithNestedDerivings>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("RecordWithNestedDerivings") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(ILRecordWithDerivings;)V") };
    const jfieldID field_key { ::djinni::jniGetFieldID(clazz.get(), "key", "I") };
    const jfieldID field_rec { ::djinni::jniGetFieldID(clazz.get(), "rec", "LRecordWithDerivings;") };
};

}  // namespace jnins