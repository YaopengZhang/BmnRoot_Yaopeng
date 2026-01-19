// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdatabasedIuni_dbdIG__UniDbDict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "UniRunPeriod.h"
#include "UniRun.h"
#include "UniRunGeometry.h"
#include "UniDetector.h"
#include "UniParameter.h"
#include "UniDetectorParameter.h"
#include "UniSimulationFile.h"
#include "UniConnection.h"
#include "UniSearchCondition.h"
#include "uni_db_settings.h"
#include "UniValue.h"
#include "uni_db_structures.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_UniConnection(void *p);
   static void deleteArray_UniConnection(void *p);
   static void destruct_UniConnection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniConnection*)
   {
      ::UniConnection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniConnection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("UniConnection", ::UniConnection::Class_Version(), "UniConnection.h", 27,
                  typeid(::UniConnection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniConnection::Dictionary, isa_proxy, 4,
                  sizeof(::UniConnection) );
      instance.SetDelete(&delete_UniConnection);
      instance.SetDeleteArray(&deleteArray_UniConnection);
      instance.SetDestructor(&destruct_UniConnection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniConnection*)
   {
      return GenerateInitInstanceLocal((::UniConnection*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniConnection*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *UniValue_Dictionary();
   static void UniValue_TClassManip(TClass*);
   static void delete_UniValue(void *p);
   static void deleteArray_UniValue(void *p);
   static void destruct_UniValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniValue*)
   {
      ::UniValue *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::UniValue));
      static ::ROOT::TGenericClassInfo 
         instance("UniValue", "UniValue.h", 27,
                  typeid(::UniValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &UniValue_Dictionary, isa_proxy, 4,
                  sizeof(::UniValue) );
      instance.SetDelete(&delete_UniValue);
      instance.SetDeleteArray(&deleteArray_UniValue);
      instance.SetDestructor(&destruct_UniValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniValue*)
   {
      return GenerateInitInstanceLocal((::UniValue*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniValue*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *UniValue_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::UniValue*)nullptr)->GetClass();
      UniValue_TClassManip(theClass);
   return theClass;
   }

   static void UniValue_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *UniqueRunNumber_Dictionary();
   static void UniqueRunNumber_TClassManip(TClass*);
   static void *new_UniqueRunNumber(void *p = nullptr);
   static void *newArray_UniqueRunNumber(Long_t size, void *p);
   static void delete_UniqueRunNumber(void *p);
   static void deleteArray_UniqueRunNumber(void *p);
   static void destruct_UniqueRunNumber(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniqueRunNumber*)
   {
      ::UniqueRunNumber *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::UniqueRunNumber));
      static ::ROOT::TGenericClassInfo 
         instance("UniqueRunNumber", "uni_db_structures.h", 12,
                  typeid(::UniqueRunNumber), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &UniqueRunNumber_Dictionary, isa_proxy, 4,
                  sizeof(::UniqueRunNumber) );
      instance.SetNew(&new_UniqueRunNumber);
      instance.SetNewArray(&newArray_UniqueRunNumber);
      instance.SetDelete(&delete_UniqueRunNumber);
      instance.SetDeleteArray(&deleteArray_UniqueRunNumber);
      instance.SetDestructor(&destruct_UniqueRunNumber);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniqueRunNumber*)
   {
      return GenerateInitInstanceLocal((::UniqueRunNumber*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniqueRunNumber*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *UniqueRunNumber_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::UniqueRunNumber*)nullptr)->GetClass();
      UniqueRunNumber_TClassManip(theClass);
   return theClass;
   }

   static void UniqueRunNumber_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BoolValue_Dictionary();
   static void BoolValue_TClassManip(TClass*);
   static void *new_BoolValue(void *p = nullptr);
   static void *newArray_BoolValue(Long_t size, void *p);
   static void delete_BoolValue(void *p);
   static void deleteArray_BoolValue(void *p);
   static void destruct_BoolValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BoolValue*)
   {
      ::BoolValue *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BoolValue));
      static ::ROOT::TGenericClassInfo 
         instance("BoolValue", "uni_db_structures.h", 34,
                  typeid(::BoolValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BoolValue_Dictionary, isa_proxy, 4,
                  sizeof(::BoolValue) );
      instance.SetNew(&new_BoolValue);
      instance.SetNewArray(&newArray_BoolValue);
      instance.SetDelete(&delete_BoolValue);
      instance.SetDeleteArray(&deleteArray_BoolValue);
      instance.SetDestructor(&destruct_BoolValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BoolValue*)
   {
      return GenerateInitInstanceLocal((::BoolValue*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BoolValue*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BoolValue_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BoolValue*)nullptr)->GetClass();
      BoolValue_TClassManip(theClass);
   return theClass;
   }

   static void BoolValue_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *IntValue_Dictionary();
   static void IntValue_TClassManip(TClass*);
   static void *new_IntValue(void *p = nullptr);
   static void *newArray_IntValue(Long_t size, void *p);
   static void delete_IntValue(void *p);
   static void deleteArray_IntValue(void *p);
   static void destruct_IntValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::IntValue*)
   {
      ::IntValue *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::IntValue));
      static ::ROOT::TGenericClassInfo 
         instance("IntValue", "uni_db_structures.h", 44,
                  typeid(::IntValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &IntValue_Dictionary, isa_proxy, 4,
                  sizeof(::IntValue) );
      instance.SetNew(&new_IntValue);
      instance.SetNewArray(&newArray_IntValue);
      instance.SetDelete(&delete_IntValue);
      instance.SetDeleteArray(&deleteArray_IntValue);
      instance.SetDestructor(&destruct_IntValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::IntValue*)
   {
      return GenerateInitInstanceLocal((::IntValue*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::IntValue*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *IntValue_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::IntValue*)nullptr)->GetClass();
      IntValue_TClassManip(theClass);
   return theClass;
   }

   static void IntValue_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *UIntValue_Dictionary();
   static void UIntValue_TClassManip(TClass*);
   static void *new_UIntValue(void *p = nullptr);
   static void *newArray_UIntValue(Long_t size, void *p);
   static void delete_UIntValue(void *p);
   static void deleteArray_UIntValue(void *p);
   static void destruct_UIntValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UIntValue*)
   {
      ::UIntValue *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::UIntValue));
      static ::ROOT::TGenericClassInfo 
         instance("UIntValue", "uni_db_structures.h", 54,
                  typeid(::UIntValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &UIntValue_Dictionary, isa_proxy, 4,
                  sizeof(::UIntValue) );
      instance.SetNew(&new_UIntValue);
      instance.SetNewArray(&newArray_UIntValue);
      instance.SetDelete(&delete_UIntValue);
      instance.SetDeleteArray(&deleteArray_UIntValue);
      instance.SetDestructor(&destruct_UIntValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UIntValue*)
   {
      return GenerateInitInstanceLocal((::UIntValue*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UIntValue*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *UIntValue_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::UIntValue*)nullptr)->GetClass();
      UIntValue_TClassManip(theClass);
   return theClass;
   }

   static void UIntValue_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *DoubleValue_Dictionary();
   static void DoubleValue_TClassManip(TClass*);
   static void *new_DoubleValue(void *p = nullptr);
   static void *newArray_DoubleValue(Long_t size, void *p);
   static void delete_DoubleValue(void *p);
   static void deleteArray_DoubleValue(void *p);
   static void destruct_DoubleValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DoubleValue*)
   {
      ::DoubleValue *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DoubleValue));
      static ::ROOT::TGenericClassInfo 
         instance("DoubleValue", "uni_db_structures.h", 64,
                  typeid(::DoubleValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DoubleValue_Dictionary, isa_proxy, 4,
                  sizeof(::DoubleValue) );
      instance.SetNew(&new_DoubleValue);
      instance.SetNewArray(&newArray_DoubleValue);
      instance.SetDelete(&delete_DoubleValue);
      instance.SetDeleteArray(&deleteArray_DoubleValue);
      instance.SetDestructor(&destruct_DoubleValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DoubleValue*)
   {
      return GenerateInitInstanceLocal((::DoubleValue*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DoubleValue*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DoubleValue_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::DoubleValue*)nullptr)->GetClass();
      DoubleValue_TClassManip(theClass);
   return theClass;
   }

   static void DoubleValue_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StringValue_Dictionary();
   static void StringValue_TClassManip(TClass*);
   static void *new_StringValue(void *p = nullptr);
   static void *newArray_StringValue(Long_t size, void *p);
   static void delete_StringValue(void *p);
   static void deleteArray_StringValue(void *p);
   static void destruct_StringValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StringValue*)
   {
      ::StringValue *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StringValue));
      static ::ROOT::TGenericClassInfo 
         instance("StringValue", "uni_db_structures.h", 74,
                  typeid(::StringValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StringValue_Dictionary, isa_proxy, 4,
                  sizeof(::StringValue) );
      instance.SetNew(&new_StringValue);
      instance.SetNewArray(&newArray_StringValue);
      instance.SetDelete(&delete_StringValue);
      instance.SetDeleteArray(&deleteArray_StringValue);
      instance.SetDestructor(&destruct_StringValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StringValue*)
   {
      return GenerateInitInstanceLocal((::StringValue*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::StringValue*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StringValue_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::StringValue*)nullptr)->GetClass();
      StringValue_TClassManip(theClass);
   return theClass;
   }

   static void StringValue_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BinaryValue_Dictionary();
   static void BinaryValue_TClassManip(TClass*);
   static void *new_BinaryValue(void *p = nullptr);
   static void *newArray_BinaryValue(Long_t size, void *p);
   static void delete_BinaryValue(void *p);
   static void deleteArray_BinaryValue(void *p);
   static void destruct_BinaryValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BinaryValue*)
   {
      ::BinaryValue *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BinaryValue));
      static ::ROOT::TGenericClassInfo 
         instance("BinaryValue", "uni_db_structures.h", 84,
                  typeid(::BinaryValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BinaryValue_Dictionary, isa_proxy, 4,
                  sizeof(::BinaryValue) );
      instance.SetNew(&new_BinaryValue);
      instance.SetNewArray(&newArray_BinaryValue);
      instance.SetDelete(&delete_BinaryValue);
      instance.SetDeleteArray(&deleteArray_BinaryValue);
      instance.SetDestructor(&destruct_BinaryValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BinaryValue*)
   {
      return GenerateInitInstanceLocal((::BinaryValue*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BinaryValue*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BinaryValue_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BinaryValue*)nullptr)->GetClass();
      BinaryValue_TClassManip(theClass);
   return theClass;
   }

   static void BinaryValue_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *IIValue_Dictionary();
   static void IIValue_TClassManip(TClass*);
   static void *new_IIValue(void *p = nullptr);
   static void *newArray_IIValue(Long_t size, void *p);
   static void delete_IIValue(void *p);
   static void deleteArray_IIValue(void *p);
   static void destruct_IIValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::IIValue*)
   {
      ::IIValue *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::IIValue));
      static ::ROOT::TGenericClassInfo 
         instance("IIValue", "uni_db_structures.h", 95,
                  typeid(::IIValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &IIValue_Dictionary, isa_proxy, 4,
                  sizeof(::IIValue) );
      instance.SetNew(&new_IIValue);
      instance.SetNewArray(&newArray_IIValue);
      instance.SetDelete(&delete_IIValue);
      instance.SetDeleteArray(&deleteArray_IIValue);
      instance.SetDestructor(&destruct_IIValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::IIValue*)
   {
      return GenerateInitInstanceLocal((::IIValue*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::IIValue*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *IIValue_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::IIValue*)nullptr)->GetClass();
      IIValue_TClassManip(theClass);
   return theClass;
   }

   static void IIValue_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *DchMapValue_Dictionary();
   static void DchMapValue_TClassManip(TClass*);
   static void *new_DchMapValue(void *p = nullptr);
   static void *newArray_DchMapValue(Long_t size, void *p);
   static void delete_DchMapValue(void *p);
   static void deleteArray_DchMapValue(void *p);
   static void destruct_DchMapValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DchMapValue*)
   {
      ::DchMapValue *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DchMapValue));
      static ::ROOT::TGenericClassInfo 
         instance("DchMapValue", "uni_db_structures.h", 106,
                  typeid(::DchMapValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DchMapValue_Dictionary, isa_proxy, 4,
                  sizeof(::DchMapValue) );
      instance.SetNew(&new_DchMapValue);
      instance.SetNewArray(&newArray_DchMapValue);
      instance.SetDelete(&delete_DchMapValue);
      instance.SetDeleteArray(&deleteArray_DchMapValue);
      instance.SetDestructor(&destruct_DchMapValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DchMapValue*)
   {
      return GenerateInitInstanceLocal((::DchMapValue*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DchMapValue*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DchMapValue_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::DchMapValue*)nullptr)->GetClass();
      DchMapValue_TClassManip(theClass);
   return theClass;
   }

   static void DchMapValue_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *GemMapValue_Dictionary();
   static void GemMapValue_TClassManip(TClass*);
   static void *new_GemMapValue(void *p = nullptr);
   static void *newArray_GemMapValue(Long_t size, void *p);
   static void delete_GemMapValue(void *p);
   static void deleteArray_GemMapValue(void *p);
   static void destruct_GemMapValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GemMapValue*)
   {
      ::GemMapValue *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::GemMapValue));
      static ::ROOT::TGenericClassInfo 
         instance("GemMapValue", "uni_db_structures.h", 121,
                  typeid(::GemMapValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &GemMapValue_Dictionary, isa_proxy, 4,
                  sizeof(::GemMapValue) );
      instance.SetNew(&new_GemMapValue);
      instance.SetNewArray(&newArray_GemMapValue);
      instance.SetDelete(&delete_GemMapValue);
      instance.SetDeleteArray(&deleteArray_GemMapValue);
      instance.SetDestructor(&destruct_GemMapValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GemMapValue*)
   {
      return GenerateInitInstanceLocal((::GemMapValue*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GemMapValue*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *GemMapValue_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::GemMapValue*)nullptr)->GetClass();
      GemMapValue_TClassManip(theClass);
   return theClass;
   }

   static void GemMapValue_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *GemPedestalValue_Dictionary();
   static void GemPedestalValue_TClassManip(TClass*);
   static void *new_GemPedestalValue(void *p = nullptr);
   static void *newArray_GemPedestalValue(Long_t size, void *p);
   static void delete_GemPedestalValue(void *p);
   static void deleteArray_GemPedestalValue(void *p);
   static void destruct_GemPedestalValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GemPedestalValue*)
   {
      ::GemPedestalValue *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::GemPedestalValue));
      static ::ROOT::TGenericClassInfo 
         instance("GemPedestalValue", "uni_db_structures.h", 136,
                  typeid(::GemPedestalValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &GemPedestalValue_Dictionary, isa_proxy, 4,
                  sizeof(::GemPedestalValue) );
      instance.SetNew(&new_GemPedestalValue);
      instance.SetNewArray(&newArray_GemPedestalValue);
      instance.SetDelete(&delete_GemPedestalValue);
      instance.SetDeleteArray(&deleteArray_GemPedestalValue);
      instance.SetDestructor(&destruct_GemPedestalValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GemPedestalValue*)
   {
      return GenerateInitInstanceLocal((::GemPedestalValue*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GemPedestalValue*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *GemPedestalValue_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::GemPedestalValue*)nullptr)->GetClass();
      GemPedestalValue_TClassManip(theClass);
   return theClass;
   }

   static void GemPedestalValue_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TriggerMapValue_Dictionary();
   static void TriggerMapValue_TClassManip(TClass*);
   static void *new_TriggerMapValue(void *p = nullptr);
   static void *newArray_TriggerMapValue(Long_t size, void *p);
   static void delete_TriggerMapValue(void *p);
   static void deleteArray_TriggerMapValue(void *p);
   static void destruct_TriggerMapValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TriggerMapValue*)
   {
      ::TriggerMapValue *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TriggerMapValue));
      static ::ROOT::TGenericClassInfo 
         instance("TriggerMapValue", "uni_db_structures.h", 149,
                  typeid(::TriggerMapValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TriggerMapValue_Dictionary, isa_proxy, 4,
                  sizeof(::TriggerMapValue) );
      instance.SetNew(&new_TriggerMapValue);
      instance.SetNewArray(&newArray_TriggerMapValue);
      instance.SetDelete(&delete_TriggerMapValue);
      instance.SetDeleteArray(&deleteArray_TriggerMapValue);
      instance.SetDestructor(&destruct_TriggerMapValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TriggerMapValue*)
   {
      return GenerateInitInstanceLocal((::TriggerMapValue*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TriggerMapValue*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TriggerMapValue_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TriggerMapValue*)nullptr)->GetClass();
      TriggerMapValue_TClassManip(theClass);
   return theClass;
   }

   static void TriggerMapValue_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MapBoolValue_Dictionary();
   static void MapBoolValue_TClassManip(TClass*);
   static void *new_MapBoolValue(void *p = nullptr);
   static void *newArray_MapBoolValue(Long_t size, void *p);
   static void delete_MapBoolValue(void *p);
   static void deleteArray_MapBoolValue(void *p);
   static void destruct_MapBoolValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MapBoolValue*)
   {
      ::MapBoolValue *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MapBoolValue));
      static ::ROOT::TGenericClassInfo 
         instance("MapBoolValue", "uni_db_structures.h", 161,
                  typeid(::MapBoolValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MapBoolValue_Dictionary, isa_proxy, 4,
                  sizeof(::MapBoolValue) );
      instance.SetNew(&new_MapBoolValue);
      instance.SetNewArray(&newArray_MapBoolValue);
      instance.SetDelete(&delete_MapBoolValue);
      instance.SetDeleteArray(&deleteArray_MapBoolValue);
      instance.SetDestructor(&destruct_MapBoolValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MapBoolValue*)
   {
      return GenerateInitInstanceLocal((::MapBoolValue*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MapBoolValue*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MapBoolValue_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MapBoolValue*)nullptr)->GetClass();
      MapBoolValue_TClassManip(theClass);
   return theClass;
   }

   static void MapBoolValue_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MapIntValue_Dictionary();
   static void MapIntValue_TClassManip(TClass*);
   static void *new_MapIntValue(void *p = nullptr);
   static void *newArray_MapIntValue(Long_t size, void *p);
   static void delete_MapIntValue(void *p);
   static void deleteArray_MapIntValue(void *p);
   static void destruct_MapIntValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MapIntValue*)
   {
      ::MapIntValue *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MapIntValue));
      static ::ROOT::TGenericClassInfo 
         instance("MapIntValue", "uni_db_structures.h", 173,
                  typeid(::MapIntValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MapIntValue_Dictionary, isa_proxy, 4,
                  sizeof(::MapIntValue) );
      instance.SetNew(&new_MapIntValue);
      instance.SetNewArray(&newArray_MapIntValue);
      instance.SetDelete(&delete_MapIntValue);
      instance.SetDeleteArray(&deleteArray_MapIntValue);
      instance.SetDestructor(&destruct_MapIntValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MapIntValue*)
   {
      return GenerateInitInstanceLocal((::MapIntValue*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MapIntValue*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MapIntValue_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MapIntValue*)nullptr)->GetClass();
      MapIntValue_TClassManip(theClass);
   return theClass;
   }

   static void MapIntValue_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MapDVectorValue_Dictionary();
   static void MapDVectorValue_TClassManip(TClass*);
   static void *new_MapDVectorValue(void *p = nullptr);
   static void *newArray_MapDVectorValue(Long_t size, void *p);
   static void delete_MapDVectorValue(void *p);
   static void deleteArray_MapDVectorValue(void *p);
   static void destruct_MapDVectorValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MapDVectorValue*)
   {
      ::MapDVectorValue *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MapDVectorValue));
      static ::ROOT::TGenericClassInfo 
         instance("MapDVectorValue", "uni_db_structures.h", 185,
                  typeid(::MapDVectorValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MapDVectorValue_Dictionary, isa_proxy, 4,
                  sizeof(::MapDVectorValue) );
      instance.SetNew(&new_MapDVectorValue);
      instance.SetNewArray(&newArray_MapDVectorValue);
      instance.SetDelete(&delete_MapDVectorValue);
      instance.SetDeleteArray(&deleteArray_MapDVectorValue);
      instance.SetDestructor(&destruct_MapDVectorValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MapDVectorValue*)
   {
      return GenerateInitInstanceLocal((::MapDVectorValue*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MapDVectorValue*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MapDVectorValue_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MapDVectorValue*)nullptr)->GetClass();
      MapDVectorValue_TClassManip(theClass);
   return theClass;
   }

   static void MapDVectorValue_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *LorentzShiftValue_Dictionary();
   static void LorentzShiftValue_TClassManip(TClass*);
   static void *new_LorentzShiftValue(void *p = nullptr);
   static void *newArray_LorentzShiftValue(Long_t size, void *p);
   static void delete_LorentzShiftValue(void *p);
   static void deleteArray_LorentzShiftValue(void *p);
   static void destruct_LorentzShiftValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LorentzShiftValue*)
   {
      ::LorentzShiftValue *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::LorentzShiftValue));
      static ::ROOT::TGenericClassInfo 
         instance("LorentzShiftValue", "uni_db_structures.h", 197,
                  typeid(::LorentzShiftValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &LorentzShiftValue_Dictionary, isa_proxy, 4,
                  sizeof(::LorentzShiftValue) );
      instance.SetNew(&new_LorentzShiftValue);
      instance.SetNewArray(&newArray_LorentzShiftValue);
      instance.SetDelete(&delete_LorentzShiftValue);
      instance.SetDeleteArray(&deleteArray_LorentzShiftValue);
      instance.SetDestructor(&destruct_LorentzShiftValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LorentzShiftValue*)
   {
      return GenerateInitInstanceLocal((::LorentzShiftValue*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LorentzShiftValue*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *LorentzShiftValue_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::LorentzShiftValue*)nullptr)->GetClass();
      LorentzShiftValue_TClassManip(theClass);
   return theClass;
   }

   static void LorentzShiftValue_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_UniRunPeriod(void *p);
   static void deleteArray_UniRunPeriod(void *p);
   static void destruct_UniRunPeriod(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniRunPeriod*)
   {
      ::UniRunPeriod *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniRunPeriod >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("UniRunPeriod", ::UniRunPeriod::Class_Version(), "UniRunPeriod.h", 19,
                  typeid(::UniRunPeriod), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniRunPeriod::Dictionary, isa_proxy, 4,
                  sizeof(::UniRunPeriod) );
      instance.SetDelete(&delete_UniRunPeriod);
      instance.SetDeleteArray(&deleteArray_UniRunPeriod);
      instance.SetDestructor(&destruct_UniRunPeriod);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniRunPeriod*)
   {
      return GenerateInitInstanceLocal((::UniRunPeriod*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniRunPeriod*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_UniSearchCondition(void *p);
   static void deleteArray_UniSearchCondition(void *p);
   static void destruct_UniSearchCondition(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniSearchCondition*)
   {
      ::UniSearchCondition *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniSearchCondition >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("UniSearchCondition", ::UniSearchCondition::Class_Version(), "UniSearchCondition.h", 7,
                  typeid(::UniSearchCondition), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniSearchCondition::Dictionary, isa_proxy, 4,
                  sizeof(::UniSearchCondition) );
      instance.SetDelete(&delete_UniSearchCondition);
      instance.SetDeleteArray(&deleteArray_UniSearchCondition);
      instance.SetDestructor(&destruct_UniSearchCondition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniSearchCondition*)
   {
      return GenerateInitInstanceLocal((::UniSearchCondition*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniSearchCondition*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_UniRun(void *p);
   static void deleteArray_UniRun(void *p);
   static void destruct_UniRun(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniRun*)
   {
      ::UniRun *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniRun >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("UniRun", ::UniRun::Class_Version(), "UniRun.h", 21,
                  typeid(::UniRun), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniRun::Dictionary, isa_proxy, 4,
                  sizeof(::UniRun) );
      instance.SetDelete(&delete_UniRun);
      instance.SetDeleteArray(&deleteArray_UniRun);
      instance.SetDestructor(&destruct_UniRun);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniRun*)
   {
      return GenerateInitInstanceLocal((::UniRun*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniRun*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_UniRunGeometry(void *p);
   static void deleteArray_UniRunGeometry(void *p);
   static void destruct_UniRunGeometry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniRunGeometry*)
   {
      ::UniRunGeometry *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniRunGeometry >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("UniRunGeometry", ::UniRunGeometry::Class_Version(), "UniRunGeometry.h", 19,
                  typeid(::UniRunGeometry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniRunGeometry::Dictionary, isa_proxy, 4,
                  sizeof(::UniRunGeometry) );
      instance.SetDelete(&delete_UniRunGeometry);
      instance.SetDeleteArray(&deleteArray_UniRunGeometry);
      instance.SetDestructor(&destruct_UniRunGeometry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniRunGeometry*)
   {
      return GenerateInitInstanceLocal((::UniRunGeometry*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniRunGeometry*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_UniDetector(void *p);
   static void deleteArray_UniDetector(void *p);
   static void destruct_UniDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniDetector*)
   {
      ::UniDetector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniDetector >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("UniDetector", ::UniDetector::Class_Version(), "UniDetector.h", 18,
                  typeid(::UniDetector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniDetector::Dictionary, isa_proxy, 4,
                  sizeof(::UniDetector) );
      instance.SetDelete(&delete_UniDetector);
      instance.SetDeleteArray(&deleteArray_UniDetector);
      instance.SetDestructor(&destruct_UniDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniDetector*)
   {
      return GenerateInitInstanceLocal((::UniDetector*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniDetector*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_UniParameter(void *p);
   static void deleteArray_UniParameter(void *p);
   static void destruct_UniParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniParameter*)
   {
      ::UniParameter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniParameter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("UniParameter", ::UniParameter::Class_Version(), "UniParameter.h", 22,
                  typeid(::UniParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniParameter::Dictionary, isa_proxy, 4,
                  sizeof(::UniParameter) );
      instance.SetDelete(&delete_UniParameter);
      instance.SetDeleteArray(&deleteArray_UniParameter);
      instance.SetDestructor(&destruct_UniParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniParameter*)
   {
      return GenerateInitInstanceLocal((::UniParameter*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniParameter*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_UniDetectorParameter(void *p);
   static void deleteArray_UniDetectorParameter(void *p);
   static void destruct_UniDetectorParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniDetectorParameter*)
   {
      ::UniDetectorParameter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniDetectorParameter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("UniDetectorParameter", ::UniDetectorParameter::Class_Version(), "UniDetectorParameter.h", 23,
                  typeid(::UniDetectorParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniDetectorParameter::Dictionary, isa_proxy, 4,
                  sizeof(::UniDetectorParameter) );
      instance.SetDelete(&delete_UniDetectorParameter);
      instance.SetDeleteArray(&deleteArray_UniDetectorParameter);
      instance.SetDestructor(&destruct_UniDetectorParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniDetectorParameter*)
   {
      return GenerateInitInstanceLocal((::UniDetectorParameter*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniDetectorParameter*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_UniSimulationFile(void *p);
   static void deleteArray_UniSimulationFile(void *p);
   static void destruct_UniSimulationFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniSimulationFile*)
   {
      ::UniSimulationFile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniSimulationFile >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("UniSimulationFile", ::UniSimulationFile::Class_Version(), "UniSimulationFile.h", 19,
                  typeid(::UniSimulationFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniSimulationFile::Dictionary, isa_proxy, 4,
                  sizeof(::UniSimulationFile) );
      instance.SetDelete(&delete_UniSimulationFile);
      instance.SetDeleteArray(&deleteArray_UniSimulationFile);
      instance.SetDestructor(&destruct_UniSimulationFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniSimulationFile*)
   {
      return GenerateInitInstanceLocal((::UniSimulationFile*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniSimulationFile*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr UniConnection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *UniConnection::Class_Name()
{
   return "UniConnection";
}

//______________________________________________________________________________
const char *UniConnection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniConnection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int UniConnection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniConnection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniConnection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniConnection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniConnection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniConnection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UniRunPeriod::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *UniRunPeriod::Class_Name()
{
   return "UniRunPeriod";
}

//______________________________________________________________________________
const char *UniRunPeriod::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniRunPeriod*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int UniRunPeriod::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniRunPeriod*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniRunPeriod::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniRunPeriod*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniRunPeriod::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniRunPeriod*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UniSearchCondition::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *UniSearchCondition::Class_Name()
{
   return "UniSearchCondition";
}

//______________________________________________________________________________
const char *UniSearchCondition::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniSearchCondition*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int UniSearchCondition::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniSearchCondition*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniSearchCondition::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniSearchCondition*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniSearchCondition::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniSearchCondition*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UniRun::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *UniRun::Class_Name()
{
   return "UniRun";
}

//______________________________________________________________________________
const char *UniRun::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniRun*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int UniRun::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniRun*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniRun::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniRun*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniRun::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniRun*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UniRunGeometry::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *UniRunGeometry::Class_Name()
{
   return "UniRunGeometry";
}

//______________________________________________________________________________
const char *UniRunGeometry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniRunGeometry*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int UniRunGeometry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniRunGeometry*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniRunGeometry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniRunGeometry*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniRunGeometry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniRunGeometry*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UniDetector::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *UniDetector::Class_Name()
{
   return "UniDetector";
}

//______________________________________________________________________________
const char *UniDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDetector*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int UniDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDetector*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDetector*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDetector*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UniParameter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *UniParameter::Class_Name()
{
   return "UniParameter";
}

//______________________________________________________________________________
const char *UniParameter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniParameter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int UniParameter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniParameter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniParameter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniParameter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniParameter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniParameter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UniDetectorParameter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *UniDetectorParameter::Class_Name()
{
   return "UniDetectorParameter";
}

//______________________________________________________________________________
const char *UniDetectorParameter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDetectorParameter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int UniDetectorParameter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDetectorParameter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniDetectorParameter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDetectorParameter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniDetectorParameter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDetectorParameter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UniSimulationFile::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *UniSimulationFile::Class_Name()
{
   return "UniSimulationFile";
}

//______________________________________________________________________________
const char *UniSimulationFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniSimulationFile*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int UniSimulationFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniSimulationFile*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniSimulationFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniSimulationFile*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniSimulationFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniSimulationFile*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void UniConnection::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniConnection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniConnection::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniConnection::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_UniConnection(void *p) {
      delete ((::UniConnection*)p);
   }
   static void deleteArray_UniConnection(void *p) {
      delete [] ((::UniConnection*)p);
   }
   static void destruct_UniConnection(void *p) {
      typedef ::UniConnection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniConnection

namespace ROOT {
   // Wrapper around operator delete
   static void delete_UniValue(void *p) {
      delete ((::UniValue*)p);
   }
   static void deleteArray_UniValue(void *p) {
      delete [] ((::UniValue*)p);
   }
   static void destruct_UniValue(void *p) {
      typedef ::UniValue current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniValue

namespace ROOT {
   // Wrappers around operator new
   static void *new_UniqueRunNumber(void *p) {
      return  p ? new(p) ::UniqueRunNumber : new ::UniqueRunNumber;
   }
   static void *newArray_UniqueRunNumber(Long_t nElements, void *p) {
      return p ? new(p) ::UniqueRunNumber[nElements] : new ::UniqueRunNumber[nElements];
   }
   // Wrapper around operator delete
   static void delete_UniqueRunNumber(void *p) {
      delete ((::UniqueRunNumber*)p);
   }
   static void deleteArray_UniqueRunNumber(void *p) {
      delete [] ((::UniqueRunNumber*)p);
   }
   static void destruct_UniqueRunNumber(void *p) {
      typedef ::UniqueRunNumber current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniqueRunNumber

namespace ROOT {
   // Wrappers around operator new
   static void *new_BoolValue(void *p) {
      return  p ? new(p) ::BoolValue : new ::BoolValue;
   }
   static void *newArray_BoolValue(Long_t nElements, void *p) {
      return p ? new(p) ::BoolValue[nElements] : new ::BoolValue[nElements];
   }
   // Wrapper around operator delete
   static void delete_BoolValue(void *p) {
      delete ((::BoolValue*)p);
   }
   static void deleteArray_BoolValue(void *p) {
      delete [] ((::BoolValue*)p);
   }
   static void destruct_BoolValue(void *p) {
      typedef ::BoolValue current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BoolValue

namespace ROOT {
   // Wrappers around operator new
   static void *new_IntValue(void *p) {
      return  p ? new(p) ::IntValue : new ::IntValue;
   }
   static void *newArray_IntValue(Long_t nElements, void *p) {
      return p ? new(p) ::IntValue[nElements] : new ::IntValue[nElements];
   }
   // Wrapper around operator delete
   static void delete_IntValue(void *p) {
      delete ((::IntValue*)p);
   }
   static void deleteArray_IntValue(void *p) {
      delete [] ((::IntValue*)p);
   }
   static void destruct_IntValue(void *p) {
      typedef ::IntValue current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::IntValue

namespace ROOT {
   // Wrappers around operator new
   static void *new_UIntValue(void *p) {
      return  p ? new(p) ::UIntValue : new ::UIntValue;
   }
   static void *newArray_UIntValue(Long_t nElements, void *p) {
      return p ? new(p) ::UIntValue[nElements] : new ::UIntValue[nElements];
   }
   // Wrapper around operator delete
   static void delete_UIntValue(void *p) {
      delete ((::UIntValue*)p);
   }
   static void deleteArray_UIntValue(void *p) {
      delete [] ((::UIntValue*)p);
   }
   static void destruct_UIntValue(void *p) {
      typedef ::UIntValue current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UIntValue

namespace ROOT {
   // Wrappers around operator new
   static void *new_DoubleValue(void *p) {
      return  p ? new(p) ::DoubleValue : new ::DoubleValue;
   }
   static void *newArray_DoubleValue(Long_t nElements, void *p) {
      return p ? new(p) ::DoubleValue[nElements] : new ::DoubleValue[nElements];
   }
   // Wrapper around operator delete
   static void delete_DoubleValue(void *p) {
      delete ((::DoubleValue*)p);
   }
   static void deleteArray_DoubleValue(void *p) {
      delete [] ((::DoubleValue*)p);
   }
   static void destruct_DoubleValue(void *p) {
      typedef ::DoubleValue current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DoubleValue

namespace ROOT {
   // Wrappers around operator new
   static void *new_StringValue(void *p) {
      return  p ? new(p) ::StringValue : new ::StringValue;
   }
   static void *newArray_StringValue(Long_t nElements, void *p) {
      return p ? new(p) ::StringValue[nElements] : new ::StringValue[nElements];
   }
   // Wrapper around operator delete
   static void delete_StringValue(void *p) {
      delete ((::StringValue*)p);
   }
   static void deleteArray_StringValue(void *p) {
      delete [] ((::StringValue*)p);
   }
   static void destruct_StringValue(void *p) {
      typedef ::StringValue current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::StringValue

namespace ROOT {
   // Wrappers around operator new
   static void *new_BinaryValue(void *p) {
      return  p ? new(p) ::BinaryValue : new ::BinaryValue;
   }
   static void *newArray_BinaryValue(Long_t nElements, void *p) {
      return p ? new(p) ::BinaryValue[nElements] : new ::BinaryValue[nElements];
   }
   // Wrapper around operator delete
   static void delete_BinaryValue(void *p) {
      delete ((::BinaryValue*)p);
   }
   static void deleteArray_BinaryValue(void *p) {
      delete [] ((::BinaryValue*)p);
   }
   static void destruct_BinaryValue(void *p) {
      typedef ::BinaryValue current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BinaryValue

namespace ROOT {
   // Wrappers around operator new
   static void *new_IIValue(void *p) {
      return  p ? new(p) ::IIValue : new ::IIValue;
   }
   static void *newArray_IIValue(Long_t nElements, void *p) {
      return p ? new(p) ::IIValue[nElements] : new ::IIValue[nElements];
   }
   // Wrapper around operator delete
   static void delete_IIValue(void *p) {
      delete ((::IIValue*)p);
   }
   static void deleteArray_IIValue(void *p) {
      delete [] ((::IIValue*)p);
   }
   static void destruct_IIValue(void *p) {
      typedef ::IIValue current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::IIValue

namespace ROOT {
   // Wrappers around operator new
   static void *new_DchMapValue(void *p) {
      return  p ? new(p) ::DchMapValue : new ::DchMapValue;
   }
   static void *newArray_DchMapValue(Long_t nElements, void *p) {
      return p ? new(p) ::DchMapValue[nElements] : new ::DchMapValue[nElements];
   }
   // Wrapper around operator delete
   static void delete_DchMapValue(void *p) {
      delete ((::DchMapValue*)p);
   }
   static void deleteArray_DchMapValue(void *p) {
      delete [] ((::DchMapValue*)p);
   }
   static void destruct_DchMapValue(void *p) {
      typedef ::DchMapValue current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DchMapValue

namespace ROOT {
   // Wrappers around operator new
   static void *new_GemMapValue(void *p) {
      return  p ? new(p) ::GemMapValue : new ::GemMapValue;
   }
   static void *newArray_GemMapValue(Long_t nElements, void *p) {
      return p ? new(p) ::GemMapValue[nElements] : new ::GemMapValue[nElements];
   }
   // Wrapper around operator delete
   static void delete_GemMapValue(void *p) {
      delete ((::GemMapValue*)p);
   }
   static void deleteArray_GemMapValue(void *p) {
      delete [] ((::GemMapValue*)p);
   }
   static void destruct_GemMapValue(void *p) {
      typedef ::GemMapValue current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GemMapValue

namespace ROOT {
   // Wrappers around operator new
   static void *new_GemPedestalValue(void *p) {
      return  p ? new(p) ::GemPedestalValue : new ::GemPedestalValue;
   }
   static void *newArray_GemPedestalValue(Long_t nElements, void *p) {
      return p ? new(p) ::GemPedestalValue[nElements] : new ::GemPedestalValue[nElements];
   }
   // Wrapper around operator delete
   static void delete_GemPedestalValue(void *p) {
      delete ((::GemPedestalValue*)p);
   }
   static void deleteArray_GemPedestalValue(void *p) {
      delete [] ((::GemPedestalValue*)p);
   }
   static void destruct_GemPedestalValue(void *p) {
      typedef ::GemPedestalValue current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GemPedestalValue

namespace ROOT {
   // Wrappers around operator new
   static void *new_TriggerMapValue(void *p) {
      return  p ? new(p) ::TriggerMapValue : new ::TriggerMapValue;
   }
   static void *newArray_TriggerMapValue(Long_t nElements, void *p) {
      return p ? new(p) ::TriggerMapValue[nElements] : new ::TriggerMapValue[nElements];
   }
   // Wrapper around operator delete
   static void delete_TriggerMapValue(void *p) {
      delete ((::TriggerMapValue*)p);
   }
   static void deleteArray_TriggerMapValue(void *p) {
      delete [] ((::TriggerMapValue*)p);
   }
   static void destruct_TriggerMapValue(void *p) {
      typedef ::TriggerMapValue current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TriggerMapValue

namespace ROOT {
   // Wrappers around operator new
   static void *new_MapBoolValue(void *p) {
      return  p ? new(p) ::MapBoolValue : new ::MapBoolValue;
   }
   static void *newArray_MapBoolValue(Long_t nElements, void *p) {
      return p ? new(p) ::MapBoolValue[nElements] : new ::MapBoolValue[nElements];
   }
   // Wrapper around operator delete
   static void delete_MapBoolValue(void *p) {
      delete ((::MapBoolValue*)p);
   }
   static void deleteArray_MapBoolValue(void *p) {
      delete [] ((::MapBoolValue*)p);
   }
   static void destruct_MapBoolValue(void *p) {
      typedef ::MapBoolValue current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MapBoolValue

namespace ROOT {
   // Wrappers around operator new
   static void *new_MapIntValue(void *p) {
      return  p ? new(p) ::MapIntValue : new ::MapIntValue;
   }
   static void *newArray_MapIntValue(Long_t nElements, void *p) {
      return p ? new(p) ::MapIntValue[nElements] : new ::MapIntValue[nElements];
   }
   // Wrapper around operator delete
   static void delete_MapIntValue(void *p) {
      delete ((::MapIntValue*)p);
   }
   static void deleteArray_MapIntValue(void *p) {
      delete [] ((::MapIntValue*)p);
   }
   static void destruct_MapIntValue(void *p) {
      typedef ::MapIntValue current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MapIntValue

namespace ROOT {
   // Wrappers around operator new
   static void *new_MapDVectorValue(void *p) {
      return  p ? new(p) ::MapDVectorValue : new ::MapDVectorValue;
   }
   static void *newArray_MapDVectorValue(Long_t nElements, void *p) {
      return p ? new(p) ::MapDVectorValue[nElements] : new ::MapDVectorValue[nElements];
   }
   // Wrapper around operator delete
   static void delete_MapDVectorValue(void *p) {
      delete ((::MapDVectorValue*)p);
   }
   static void deleteArray_MapDVectorValue(void *p) {
      delete [] ((::MapDVectorValue*)p);
   }
   static void destruct_MapDVectorValue(void *p) {
      typedef ::MapDVectorValue current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MapDVectorValue

namespace ROOT {
   // Wrappers around operator new
   static void *new_LorentzShiftValue(void *p) {
      return  p ? new(p) ::LorentzShiftValue : new ::LorentzShiftValue;
   }
   static void *newArray_LorentzShiftValue(Long_t nElements, void *p) {
      return p ? new(p) ::LorentzShiftValue[nElements] : new ::LorentzShiftValue[nElements];
   }
   // Wrapper around operator delete
   static void delete_LorentzShiftValue(void *p) {
      delete ((::LorentzShiftValue*)p);
   }
   static void deleteArray_LorentzShiftValue(void *p) {
      delete [] ((::LorentzShiftValue*)p);
   }
   static void destruct_LorentzShiftValue(void *p) {
      typedef ::LorentzShiftValue current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LorentzShiftValue

//______________________________________________________________________________
void UniRunPeriod::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniRunPeriod.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniRunPeriod::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniRunPeriod::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_UniRunPeriod(void *p) {
      delete ((::UniRunPeriod*)p);
   }
   static void deleteArray_UniRunPeriod(void *p) {
      delete [] ((::UniRunPeriod*)p);
   }
   static void destruct_UniRunPeriod(void *p) {
      typedef ::UniRunPeriod current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniRunPeriod

//______________________________________________________________________________
void UniSearchCondition::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniSearchCondition.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniSearchCondition::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniSearchCondition::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_UniSearchCondition(void *p) {
      delete ((::UniSearchCondition*)p);
   }
   static void deleteArray_UniSearchCondition(void *p) {
      delete [] ((::UniSearchCondition*)p);
   }
   static void destruct_UniSearchCondition(void *p) {
      typedef ::UniSearchCondition current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniSearchCondition

//______________________________________________________________________________
void UniRun::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniRun.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniRun::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniRun::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_UniRun(void *p) {
      delete ((::UniRun*)p);
   }
   static void deleteArray_UniRun(void *p) {
      delete [] ((::UniRun*)p);
   }
   static void destruct_UniRun(void *p) {
      typedef ::UniRun current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniRun

//______________________________________________________________________________
void UniRunGeometry::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniRunGeometry.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniRunGeometry::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniRunGeometry::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_UniRunGeometry(void *p) {
      delete ((::UniRunGeometry*)p);
   }
   static void deleteArray_UniRunGeometry(void *p) {
      delete [] ((::UniRunGeometry*)p);
   }
   static void destruct_UniRunGeometry(void *p) {
      typedef ::UniRunGeometry current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniRunGeometry

//______________________________________________________________________________
void UniDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniDetector::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_UniDetector(void *p) {
      delete ((::UniDetector*)p);
   }
   static void deleteArray_UniDetector(void *p) {
      delete [] ((::UniDetector*)p);
   }
   static void destruct_UniDetector(void *p) {
      typedef ::UniDetector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniDetector

//______________________________________________________________________________
void UniParameter::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniParameter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniParameter::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniParameter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_UniParameter(void *p) {
      delete ((::UniParameter*)p);
   }
   static void deleteArray_UniParameter(void *p) {
      delete [] ((::UniParameter*)p);
   }
   static void destruct_UniParameter(void *p) {
      typedef ::UniParameter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniParameter

//______________________________________________________________________________
void UniDetectorParameter::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniDetectorParameter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniDetectorParameter::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniDetectorParameter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_UniDetectorParameter(void *p) {
      delete ((::UniDetectorParameter*)p);
   }
   static void deleteArray_UniDetectorParameter(void *p) {
      delete [] ((::UniDetectorParameter*)p);
   }
   static void destruct_UniDetectorParameter(void *p) {
      typedef ::UniDetectorParameter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniDetectorParameter

//______________________________________________________________________________
void UniSimulationFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniSimulationFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniSimulationFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniSimulationFile::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_UniSimulationFile(void *p) {
      delete ((::UniSimulationFile*)p);
   }
   static void deleteArray_UniSimulationFile(void *p) {
      delete [] ((::UniSimulationFile*)p);
   }
   static void destruct_UniSimulationFile(void *p) {
      typedef ::UniSimulationFile current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniSimulationFile

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = nullptr);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 386,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      ::ROOT::AddClassAlternate("vector<double>","std::vector<double, std::allocator<double> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)nullptr)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace {
  void TriggerDictionaryInitialization_G__UniDbDict_Impl() {
    static const char* headers[] = {
"UniRunPeriod.h",
"UniRun.h",
"UniRunGeometry.h",
"UniDetector.h",
"UniParameter.h",
"UniDetectorParameter.h",
"UniSimulationFile.h",
"UniConnection.h",
"UniSearchCondition.h",
"uni_db_settings.h",
"UniValue.h",
"uni_db_structures.h",
nullptr
    };
    static const char* includePaths[] = {
"/data/yaopeng/bmnroot_Yaopeng/database/uni_db",
"/home/tools/FairSoft/fairsoft/install/include",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/usr/include/libxml2",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/database/uni_db/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__UniDbDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$UniConnection.h")))  __attribute__((annotate("$clingAutoload$UniRunPeriod.h")))  UniConnection;
struct __attribute__((annotate("$clingAutoload$UniValue.h")))  __attribute__((annotate("$clingAutoload$UniRunPeriod.h")))  UniValue;
struct __attribute__((annotate("$clingAutoload$uni_db_structures.h")))  __attribute__((annotate("$clingAutoload$UniRunPeriod.h")))  UniqueRunNumber;
struct __attribute__((annotate("$clingAutoload$uni_db_structures.h")))  __attribute__((annotate("$clingAutoload$UniRunPeriod.h")))  BoolValue;
struct __attribute__((annotate("$clingAutoload$uni_db_structures.h")))  __attribute__((annotate("$clingAutoload$UniRunPeriod.h")))  IntValue;
struct __attribute__((annotate("$clingAutoload$uni_db_structures.h")))  __attribute__((annotate("$clingAutoload$UniRunPeriod.h")))  UIntValue;
struct __attribute__((annotate("$clingAutoload$uni_db_structures.h")))  __attribute__((annotate("$clingAutoload$UniRunPeriod.h")))  DoubleValue;
struct __attribute__((annotate("$clingAutoload$uni_db_structures.h")))  __attribute__((annotate("$clingAutoload$UniRunPeriod.h")))  StringValue;
struct __attribute__((annotate("$clingAutoload$uni_db_structures.h")))  __attribute__((annotate("$clingAutoload$UniRunPeriod.h")))  BinaryValue;
struct __attribute__((annotate("$clingAutoload$uni_db_structures.h")))  __attribute__((annotate("$clingAutoload$UniRunPeriod.h")))  IIValue;
struct __attribute__((annotate("$clingAutoload$uni_db_structures.h")))  __attribute__((annotate("$clingAutoload$UniRunPeriod.h")))  DchMapValue;
struct __attribute__((annotate("$clingAutoload$uni_db_structures.h")))  __attribute__((annotate("$clingAutoload$UniRunPeriod.h")))  GemMapValue;
struct __attribute__((annotate("$clingAutoload$uni_db_structures.h")))  __attribute__((annotate("$clingAutoload$UniRunPeriod.h")))  GemPedestalValue;
struct __attribute__((annotate("$clingAutoload$uni_db_structures.h")))  __attribute__((annotate("$clingAutoload$UniRunPeriod.h")))  TriggerMapValue;
struct __attribute__((annotate("$clingAutoload$uni_db_structures.h")))  __attribute__((annotate("$clingAutoload$UniRunPeriod.h")))  MapBoolValue;
struct __attribute__((annotate("$clingAutoload$uni_db_structures.h")))  __attribute__((annotate("$clingAutoload$UniRunPeriod.h")))  MapIntValue;
struct __attribute__((annotate("$clingAutoload$uni_db_structures.h")))  __attribute__((annotate("$clingAutoload$UniRunPeriod.h")))  MapDVectorValue;
struct __attribute__((annotate("$clingAutoload$uni_db_structures.h")))  __attribute__((annotate("$clingAutoload$UniRunPeriod.h")))  LorentzShiftValue;
class __attribute__((annotate("$clingAutoload$UniRunPeriod.h")))  UniRunPeriod;
class __attribute__((annotate("$clingAutoload$UniSearchCondition.h")))  __attribute__((annotate("$clingAutoload$UniRun.h")))  UniSearchCondition;
class __attribute__((annotate("$clingAutoload$UniRun.h")))  UniRun;
class __attribute__((annotate("$clingAutoload$UniRunGeometry.h")))  UniRunGeometry;
class __attribute__((annotate("$clingAutoload$UniDetector.h")))  UniDetector;
class __attribute__((annotate("$clingAutoload$UniParameter.h")))  UniParameter;
class __attribute__((annotate("$clingAutoload$UniDetectorParameter.h")))  UniDetectorParameter;
class __attribute__((annotate("$clingAutoload$UniSimulationFile.h")))  UniSimulationFile;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__UniDbDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "UniRunPeriod.h"
#include "UniRun.h"
#include "UniRunGeometry.h"
#include "UniDetector.h"
#include "UniParameter.h"
#include "UniDetectorParameter.h"
#include "UniSimulationFile.h"
#include "UniConnection.h"
#include "UniSearchCondition.h"
#include "uni_db_settings.h"
#include "UniValue.h"
#include "uni_db_structures.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BinaryValue", payloadCode, "@",
"BoolValue", payloadCode, "@",
"DchMapValue", payloadCode, "@",
"DoubleValue", payloadCode, "@",
"GemMapValue", payloadCode, "@",
"GemPedestalValue", payloadCode, "@",
"IIValue", payloadCode, "@",
"IntValue", payloadCode, "@",
"LorentzShiftValue", payloadCode, "@",
"MapBoolValue", payloadCode, "@",
"MapDVectorValue", payloadCode, "@",
"MapIntValue", payloadCode, "@",
"StringValue", payloadCode, "@",
"TriggerMapValue", payloadCode, "@",
"UIntValue", payloadCode, "@",
"UniConnection", payloadCode, "@",
"UniDetector", payloadCode, "@",
"UniDetectorParameter", payloadCode, "@",
"UniParameter", payloadCode, "@",
"UniRun", payloadCode, "@",
"UniRunGeometry", payloadCode, "@",
"UniRunPeriod", payloadCode, "@",
"UniSearchCondition", payloadCode, "@",
"UniSimulationFile", payloadCode, "@",
"UniValue", payloadCode, "@",
"UniqueRunNumber", payloadCode, "@",
"enumValueType", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__UniDbDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__UniDbDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__UniDbDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__UniDbDict() {
  TriggerDictionaryInitialization_G__UniDbDict_Impl();
}
