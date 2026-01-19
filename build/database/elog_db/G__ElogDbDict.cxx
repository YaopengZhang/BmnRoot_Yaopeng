// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdatabasedIelog_dbdIG__ElogDbDict
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
#include "ElogPerson.h"
#include "ElogType.h"
#include "ElogTrigger.h"
#include "ElogBeam.h"
#include "ElogTarget.h"
#include "ElogRecord.h"
#include "ElogAttachment.h"
#include "ElogConnection.h"
#include "ElogSearchCondition.h"
#include "elog_db_settings.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_ElogConnection(void *p);
   static void deleteArray_ElogConnection(void *p);
   static void destruct_ElogConnection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElogConnection*)
   {
      ::ElogConnection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ElogConnection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ElogConnection", ::ElogConnection::Class_Version(), "ElogConnection.h", 27,
                  typeid(::ElogConnection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ElogConnection::Dictionary, isa_proxy, 4,
                  sizeof(::ElogConnection) );
      instance.SetDelete(&delete_ElogConnection);
      instance.SetDeleteArray(&deleteArray_ElogConnection);
      instance.SetDestructor(&destruct_ElogConnection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElogConnection*)
   {
      return GenerateInitInstanceLocal((::ElogConnection*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ElogConnection*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ElogPerson(void *p);
   static void deleteArray_ElogPerson(void *p);
   static void destruct_ElogPerson(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElogPerson*)
   {
      ::ElogPerson *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ElogPerson >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ElogPerson", ::ElogPerson::Class_Version(), "ElogPerson.h", 18,
                  typeid(::ElogPerson), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ElogPerson::Dictionary, isa_proxy, 4,
                  sizeof(::ElogPerson) );
      instance.SetDelete(&delete_ElogPerson);
      instance.SetDeleteArray(&deleteArray_ElogPerson);
      instance.SetDestructor(&destruct_ElogPerson);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElogPerson*)
   {
      return GenerateInitInstanceLocal((::ElogPerson*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ElogPerson*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ElogType(void *p);
   static void deleteArray_ElogType(void *p);
   static void destruct_ElogType(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElogType*)
   {
      ::ElogType *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ElogType >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ElogType", ::ElogType::Class_Version(), "ElogType.h", 18,
                  typeid(::ElogType), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ElogType::Dictionary, isa_proxy, 4,
                  sizeof(::ElogType) );
      instance.SetDelete(&delete_ElogType);
      instance.SetDeleteArray(&deleteArray_ElogType);
      instance.SetDestructor(&destruct_ElogType);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElogType*)
   {
      return GenerateInitInstanceLocal((::ElogType*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ElogType*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ElogTrigger(void *p);
   static void deleteArray_ElogTrigger(void *p);
   static void destruct_ElogTrigger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElogTrigger*)
   {
      ::ElogTrigger *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ElogTrigger >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ElogTrigger", ::ElogTrigger::Class_Version(), "ElogTrigger.h", 18,
                  typeid(::ElogTrigger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ElogTrigger::Dictionary, isa_proxy, 4,
                  sizeof(::ElogTrigger) );
      instance.SetDelete(&delete_ElogTrigger);
      instance.SetDeleteArray(&deleteArray_ElogTrigger);
      instance.SetDestructor(&destruct_ElogTrigger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElogTrigger*)
   {
      return GenerateInitInstanceLocal((::ElogTrigger*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ElogTrigger*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ElogBeam(void *p);
   static void deleteArray_ElogBeam(void *p);
   static void destruct_ElogBeam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElogBeam*)
   {
      ::ElogBeam *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ElogBeam >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ElogBeam", ::ElogBeam::Class_Version(), "ElogBeam.h", 18,
                  typeid(::ElogBeam), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ElogBeam::Dictionary, isa_proxy, 4,
                  sizeof(::ElogBeam) );
      instance.SetDelete(&delete_ElogBeam);
      instance.SetDeleteArray(&deleteArray_ElogBeam);
      instance.SetDestructor(&destruct_ElogBeam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElogBeam*)
   {
      return GenerateInitInstanceLocal((::ElogBeam*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ElogBeam*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ElogTarget(void *p);
   static void deleteArray_ElogTarget(void *p);
   static void destruct_ElogTarget(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElogTarget*)
   {
      ::ElogTarget *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ElogTarget >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ElogTarget", ::ElogTarget::Class_Version(), "ElogTarget.h", 18,
                  typeid(::ElogTarget), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ElogTarget::Dictionary, isa_proxy, 4,
                  sizeof(::ElogTarget) );
      instance.SetDelete(&delete_ElogTarget);
      instance.SetDeleteArray(&deleteArray_ElogTarget);
      instance.SetDestructor(&destruct_ElogTarget);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElogTarget*)
   {
      return GenerateInitInstanceLocal((::ElogTarget*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ElogTarget*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ElogSearchCondition(void *p);
   static void deleteArray_ElogSearchCondition(void *p);
   static void destruct_ElogSearchCondition(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElogSearchCondition*)
   {
      ::ElogSearchCondition *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ElogSearchCondition >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ElogSearchCondition", ::ElogSearchCondition::Class_Version(), "ElogSearchCondition.h", 7,
                  typeid(::ElogSearchCondition), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ElogSearchCondition::Dictionary, isa_proxy, 4,
                  sizeof(::ElogSearchCondition) );
      instance.SetDelete(&delete_ElogSearchCondition);
      instance.SetDeleteArray(&deleteArray_ElogSearchCondition);
      instance.SetDestructor(&destruct_ElogSearchCondition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElogSearchCondition*)
   {
      return GenerateInitInstanceLocal((::ElogSearchCondition*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ElogSearchCondition*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ElogRecord(void *p);
   static void deleteArray_ElogRecord(void *p);
   static void destruct_ElogRecord(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElogRecord*)
   {
      ::ElogRecord *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ElogRecord >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ElogRecord", ::ElogRecord::Class_Version(), "ElogRecord.h", 20,
                  typeid(::ElogRecord), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ElogRecord::Dictionary, isa_proxy, 4,
                  sizeof(::ElogRecord) );
      instance.SetDelete(&delete_ElogRecord);
      instance.SetDeleteArray(&deleteArray_ElogRecord);
      instance.SetDestructor(&destruct_ElogRecord);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElogRecord*)
   {
      return GenerateInitInstanceLocal((::ElogRecord*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ElogRecord*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ElogAttachment(void *p);
   static void deleteArray_ElogAttachment(void *p);
   static void destruct_ElogAttachment(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElogAttachment*)
   {
      ::ElogAttachment *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ElogAttachment >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ElogAttachment", ::ElogAttachment::Class_Version(), "ElogAttachment.h", 18,
                  typeid(::ElogAttachment), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ElogAttachment::Dictionary, isa_proxy, 4,
                  sizeof(::ElogAttachment) );
      instance.SetDelete(&delete_ElogAttachment);
      instance.SetDeleteArray(&deleteArray_ElogAttachment);
      instance.SetDestructor(&destruct_ElogAttachment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElogAttachment*)
   {
      return GenerateInitInstanceLocal((::ElogAttachment*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ElogAttachment*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr ElogConnection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ElogConnection::Class_Name()
{
   return "ElogConnection";
}

//______________________________________________________________________________
const char *ElogConnection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogConnection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ElogConnection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogConnection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ElogConnection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogConnection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ElogConnection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogConnection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ElogPerson::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ElogPerson::Class_Name()
{
   return "ElogPerson";
}

//______________________________________________________________________________
const char *ElogPerson::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogPerson*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ElogPerson::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogPerson*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ElogPerson::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogPerson*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ElogPerson::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogPerson*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ElogType::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ElogType::Class_Name()
{
   return "ElogType";
}

//______________________________________________________________________________
const char *ElogType::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogType*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ElogType::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogType*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ElogType::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogType*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ElogType::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogType*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ElogTrigger::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ElogTrigger::Class_Name()
{
   return "ElogTrigger";
}

//______________________________________________________________________________
const char *ElogTrigger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogTrigger*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ElogTrigger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogTrigger*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ElogTrigger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogTrigger*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ElogTrigger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogTrigger*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ElogBeam::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ElogBeam::Class_Name()
{
   return "ElogBeam";
}

//______________________________________________________________________________
const char *ElogBeam::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogBeam*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ElogBeam::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogBeam*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ElogBeam::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogBeam*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ElogBeam::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogBeam*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ElogTarget::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ElogTarget::Class_Name()
{
   return "ElogTarget";
}

//______________________________________________________________________________
const char *ElogTarget::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogTarget*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ElogTarget::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogTarget*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ElogTarget::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogTarget*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ElogTarget::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogTarget*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ElogSearchCondition::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ElogSearchCondition::Class_Name()
{
   return "ElogSearchCondition";
}

//______________________________________________________________________________
const char *ElogSearchCondition::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogSearchCondition*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ElogSearchCondition::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogSearchCondition*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ElogSearchCondition::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogSearchCondition*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ElogSearchCondition::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogSearchCondition*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ElogRecord::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ElogRecord::Class_Name()
{
   return "ElogRecord";
}

//______________________________________________________________________________
const char *ElogRecord::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogRecord*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ElogRecord::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogRecord*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ElogRecord::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogRecord*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ElogRecord::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogRecord*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ElogAttachment::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ElogAttachment::Class_Name()
{
   return "ElogAttachment";
}

//______________________________________________________________________________
const char *ElogAttachment::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogAttachment*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ElogAttachment::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogAttachment*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ElogAttachment::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogAttachment*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ElogAttachment::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogAttachment*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void ElogConnection::Streamer(TBuffer &R__b)
{
   // Stream an object of class ElogConnection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ElogConnection::Class(),this);
   } else {
      R__b.WriteClassBuffer(ElogConnection::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ElogConnection(void *p) {
      delete ((::ElogConnection*)p);
   }
   static void deleteArray_ElogConnection(void *p) {
      delete [] ((::ElogConnection*)p);
   }
   static void destruct_ElogConnection(void *p) {
      typedef ::ElogConnection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ElogConnection

//______________________________________________________________________________
void ElogPerson::Streamer(TBuffer &R__b)
{
   // Stream an object of class ElogPerson.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ElogPerson::Class(),this);
   } else {
      R__b.WriteClassBuffer(ElogPerson::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ElogPerson(void *p) {
      delete ((::ElogPerson*)p);
   }
   static void deleteArray_ElogPerson(void *p) {
      delete [] ((::ElogPerson*)p);
   }
   static void destruct_ElogPerson(void *p) {
      typedef ::ElogPerson current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ElogPerson

//______________________________________________________________________________
void ElogType::Streamer(TBuffer &R__b)
{
   // Stream an object of class ElogType.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ElogType::Class(),this);
   } else {
      R__b.WriteClassBuffer(ElogType::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ElogType(void *p) {
      delete ((::ElogType*)p);
   }
   static void deleteArray_ElogType(void *p) {
      delete [] ((::ElogType*)p);
   }
   static void destruct_ElogType(void *p) {
      typedef ::ElogType current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ElogType

//______________________________________________________________________________
void ElogTrigger::Streamer(TBuffer &R__b)
{
   // Stream an object of class ElogTrigger.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ElogTrigger::Class(),this);
   } else {
      R__b.WriteClassBuffer(ElogTrigger::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ElogTrigger(void *p) {
      delete ((::ElogTrigger*)p);
   }
   static void deleteArray_ElogTrigger(void *p) {
      delete [] ((::ElogTrigger*)p);
   }
   static void destruct_ElogTrigger(void *p) {
      typedef ::ElogTrigger current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ElogTrigger

//______________________________________________________________________________
void ElogBeam::Streamer(TBuffer &R__b)
{
   // Stream an object of class ElogBeam.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ElogBeam::Class(),this);
   } else {
      R__b.WriteClassBuffer(ElogBeam::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ElogBeam(void *p) {
      delete ((::ElogBeam*)p);
   }
   static void deleteArray_ElogBeam(void *p) {
      delete [] ((::ElogBeam*)p);
   }
   static void destruct_ElogBeam(void *p) {
      typedef ::ElogBeam current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ElogBeam

//______________________________________________________________________________
void ElogTarget::Streamer(TBuffer &R__b)
{
   // Stream an object of class ElogTarget.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ElogTarget::Class(),this);
   } else {
      R__b.WriteClassBuffer(ElogTarget::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ElogTarget(void *p) {
      delete ((::ElogTarget*)p);
   }
   static void deleteArray_ElogTarget(void *p) {
      delete [] ((::ElogTarget*)p);
   }
   static void destruct_ElogTarget(void *p) {
      typedef ::ElogTarget current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ElogTarget

//______________________________________________________________________________
void ElogSearchCondition::Streamer(TBuffer &R__b)
{
   // Stream an object of class ElogSearchCondition.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ElogSearchCondition::Class(),this);
   } else {
      R__b.WriteClassBuffer(ElogSearchCondition::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ElogSearchCondition(void *p) {
      delete ((::ElogSearchCondition*)p);
   }
   static void deleteArray_ElogSearchCondition(void *p) {
      delete [] ((::ElogSearchCondition*)p);
   }
   static void destruct_ElogSearchCondition(void *p) {
      typedef ::ElogSearchCondition current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ElogSearchCondition

//______________________________________________________________________________
void ElogRecord::Streamer(TBuffer &R__b)
{
   // Stream an object of class ElogRecord.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ElogRecord::Class(),this);
   } else {
      R__b.WriteClassBuffer(ElogRecord::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ElogRecord(void *p) {
      delete ((::ElogRecord*)p);
   }
   static void deleteArray_ElogRecord(void *p) {
      delete [] ((::ElogRecord*)p);
   }
   static void destruct_ElogRecord(void *p) {
      typedef ::ElogRecord current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ElogRecord

//______________________________________________________________________________
void ElogAttachment::Streamer(TBuffer &R__b)
{
   // Stream an object of class ElogAttachment.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ElogAttachment::Class(),this);
   } else {
      R__b.WriteClassBuffer(ElogAttachment::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ElogAttachment(void *p) {
      delete ((::ElogAttachment*)p);
   }
   static void deleteArray_ElogAttachment(void *p) {
      delete [] ((::ElogAttachment*)p);
   }
   static void destruct_ElogAttachment(void *p) {
      typedef ::ElogAttachment current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ElogAttachment

namespace {
  void TriggerDictionaryInitialization_G__ElogDbDict_Impl() {
    static const char* headers[] = {
"ElogPerson.h",
"ElogType.h",
"ElogTrigger.h",
"ElogBeam.h",
"ElogTarget.h",
"ElogRecord.h",
"ElogAttachment.h",
"ElogConnection.h",
"ElogSearchCondition.h",
"elog_db_settings.h",
nullptr
    };
    static const char* includePaths[] = {
"/data/yaopeng/bmnroot_Yaopeng/database/elog_db",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/database/elog_db/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__ElogDbDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$ElogConnection.h")))  __attribute__((annotate("$clingAutoload$ElogPerson.h")))  ElogConnection;
class __attribute__((annotate("$clingAutoload$ElogPerson.h")))  ElogPerson;
class __attribute__((annotate("$clingAutoload$ElogType.h")))  ElogType;
class __attribute__((annotate("$clingAutoload$ElogTrigger.h")))  ElogTrigger;
class __attribute__((annotate("$clingAutoload$ElogBeam.h")))  ElogBeam;
class __attribute__((annotate("$clingAutoload$ElogTarget.h")))  ElogTarget;
class __attribute__((annotate("$clingAutoload$ElogSearchCondition.h")))  __attribute__((annotate("$clingAutoload$ElogRecord.h")))  ElogSearchCondition;
class __attribute__((annotate("$clingAutoload$ElogRecord.h")))  ElogRecord;
class __attribute__((annotate("$clingAutoload$ElogAttachment.h")))  ElogAttachment;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__ElogDbDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "ElogPerson.h"
#include "ElogType.h"
#include "ElogTrigger.h"
#include "ElogBeam.h"
#include "ElogTarget.h"
#include "ElogRecord.h"
#include "ElogAttachment.h"
#include "ElogConnection.h"
#include "ElogSearchCondition.h"
#include "elog_db_settings.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ElogAttachment", payloadCode, "@",
"ElogBeam", payloadCode, "@",
"ElogConnection", payloadCode, "@",
"ElogPerson", payloadCode, "@",
"ElogRecord", payloadCode, "@",
"ElogSearchCondition", payloadCode, "@",
"ElogTarget", payloadCode, "@",
"ElogTrigger", payloadCode, "@",
"ElogType", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__ElogDbDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__ElogDbDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__ElogDbDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__ElogDbDict() {
  TriggerDictionaryInitialization_G__ElogDbDict_Impl();
}
