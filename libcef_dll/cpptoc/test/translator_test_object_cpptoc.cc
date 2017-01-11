// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/test/translator_test_object_cpptoc.h"
#include "libcef_dll/cpptoc/test/translator_test_object_child_cpptoc.h"
#include "libcef_dll/cpptoc/test/translator_test_object_child_child_cpptoc.h"


// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_translator_test_object_t* cef_translator_test_object_create(
    int value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefTranslatorTestObject> _retval = CefTranslatorTestObject::Create(
      value);

  // Return type: refptr_same
  return CefTranslatorTestObjectCppToC::Wrap(_retval);
}


namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK translator_test_object_get_value(
    struct _cef_translator_test_object_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefTranslatorTestObjectCppToC::Get(self)->GetValue();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK translator_test_object_set_value(
    struct _cef_translator_test_object_t* self, int value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefTranslatorTestObjectCppToC::Get(self)->SetValue(
      value);
}

}  // namespace


// CONSTRUCTOR - Do not edit by hand.

CefTranslatorTestObjectCppToC::CefTranslatorTestObjectCppToC() {
  GetStruct()->get_value = translator_test_object_get_value;
  GetStruct()->set_value = translator_test_object_set_value;
}

template<> CefRefPtr<CefTranslatorTestObject> CefCppToC<CefTranslatorTestObjectCppToC,
    CefTranslatorTestObject, cef_translator_test_object_t>::UnwrapDerived(
    CefWrapperType type, cef_translator_test_object_t* s) {
  if (type == WT_TRANSLATOR_TEST_OBJECT_CHILD) {
    return CefTranslatorTestObjectChildCppToC::Unwrap(
        reinterpret_cast<cef_translator_test_object_child_t*>(s));
  }
  if (type == WT_TRANSLATOR_TEST_OBJECT_CHILD_CHILD) {
    return CefTranslatorTestObjectChildChildCppToC::Unwrap(
        reinterpret_cast<cef_translator_test_object_child_child_t*>(s));
  }
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template<> base::AtomicRefCount CefCppToC<CefTranslatorTestObjectCppToC,
    CefTranslatorTestObject, cef_translator_test_object_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCppToC<CefTranslatorTestObjectCppToC,
    CefTranslatorTestObject, cef_translator_test_object_t>::kWrapperType =
    WT_TRANSLATOR_TEST_OBJECT;
