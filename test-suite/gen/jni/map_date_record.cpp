// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from date.djinni

#include "map_date_record.hpp"  // my header
#include "Marshal.hpp"

namespace jnins {

MapDateRecord::MapDateRecord() = default;

MapDateRecord::~MapDateRecord() = default;

auto MapDateRecord::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<MapDateRecord>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::Map<::djinni::String, ::djinni::Date>::fromCpp(jniEnv, c.dates_by_id)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto MapDateRecord::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 2);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<MapDateRecord>::get();
    return {::djinni::Map<::djinni::String, ::djinni::Date>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_datesById))};
}

}  // namespace jnins
