// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from exception.djinni

#include "cpp_exception.hpp"  // my header
#include "Marshal.hpp"
#include "cpp_exception.hpp"

namespace jnins {

CppException::CppException() : ::djinni::JniInterface<::cppns::CppException, CppException>("CppException$CppProxy") {}

CppException::~CppException() = default;


CJNIEXPORT void JNICALL Java_CppException_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<djinni::CppProxyHandle<::cppns::CppException>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jint JNICALL Java_CppException_00024CppProxy_native_1throwAnException(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::CppProxyHandle<::cppns::CppException>::get(nativeRef);
        auto r = ref->throw_an_exception();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_CppException_get(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::cppns::CppException::get();
        return ::djinni::release(::jnins::CppException::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace jnins
