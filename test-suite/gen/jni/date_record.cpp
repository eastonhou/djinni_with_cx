// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from date.djinni

#include "date_record.hpp"  // my header
#include "Marshal.hpp"

namespace jnins {

DateRecord::DateRecord() = default;

DateRecord::~DateRecord() = default;

auto DateRecord::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<DateRecord>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::Date::fromCpp(jniEnv, c.created_at)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto DateRecord::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 2);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<DateRecord>::get();
    return {::djinni::Date::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_createdAt))};
}

}  // namespace jnins
