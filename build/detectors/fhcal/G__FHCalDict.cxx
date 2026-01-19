// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdIfhcaldIG__FHCalDict
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
#include "BmnFHCal.h"
#include "BmnFHCalPoint.h"
#include "BmnFHCalAddress.h"
#include "BmnFHCalContFact.h"
#include "BmnFHCalGeo.h"
#include "BmnFHCalGeoPar.h"
#include "BmnFHCalDigitizer.h"
#include "BmnFHCalDigi.h"
#include "BmnFHCalDigit.h"
#include "BmnFHCalModule.h"
#include "BmnFHCalEvent.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnFHCalGeoPar(void *p = nullptr);
   static void *newArray_BmnFHCalGeoPar(Long_t size, void *p);
   static void delete_BmnFHCalGeoPar(void *p);
   static void deleteArray_BmnFHCalGeoPar(void *p);
   static void destruct_BmnFHCalGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFHCalGeoPar*)
   {
      ::BmnFHCalGeoPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFHCalGeoPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFHCalGeoPar", ::BmnFHCalGeoPar::Class_Version(), "BmnFHCalGeoPar.h", 13,
                  typeid(::BmnFHCalGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFHCalGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFHCalGeoPar) );
      instance.SetNew(&new_BmnFHCalGeoPar);
      instance.SetNewArray(&newArray_BmnFHCalGeoPar);
      instance.SetDelete(&delete_BmnFHCalGeoPar);
      instance.SetDeleteArray(&deleteArray_BmnFHCalGeoPar);
      instance.SetDestructor(&destruct_BmnFHCalGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFHCalGeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnFHCalGeoPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFHCalGeoPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFHCal(void *p = nullptr);
   static void *newArray_BmnFHCal(Long_t size, void *p);
   static void delete_BmnFHCal(void *p);
   static void deleteArray_BmnFHCal(void *p);
   static void destruct_BmnFHCal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFHCal*)
   {
      ::BmnFHCal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFHCal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFHCal", ::BmnFHCal::Class_Version(), "BmnFHCal.h", 28,
                  typeid(::BmnFHCal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFHCal::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFHCal) );
      instance.SetNew(&new_BmnFHCal);
      instance.SetNewArray(&newArray_BmnFHCal);
      instance.SetDelete(&delete_BmnFHCal);
      instance.SetDeleteArray(&deleteArray_BmnFHCal);
      instance.SetDestructor(&destruct_BmnFHCal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFHCal*)
   {
      return GenerateInitInstanceLocal((::BmnFHCal*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFHCal*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFHCalPoint(void *p = nullptr);
   static void *newArray_BmnFHCalPoint(Long_t size, void *p);
   static void delete_BmnFHCalPoint(void *p);
   static void deleteArray_BmnFHCalPoint(void *p);
   static void destruct_BmnFHCalPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFHCalPoint*)
   {
      ::BmnFHCalPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFHCalPoint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFHCalPoint", ::BmnFHCalPoint::Class_Version(), "BmnFHCalPoint.h", 19,
                  typeid(::BmnFHCalPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFHCalPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFHCalPoint) );
      instance.SetNew(&new_BmnFHCalPoint);
      instance.SetNewArray(&newArray_BmnFHCalPoint);
      instance.SetDelete(&delete_BmnFHCalPoint);
      instance.SetDeleteArray(&deleteArray_BmnFHCalPoint);
      instance.SetDestructor(&destruct_BmnFHCalPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFHCalPoint*)
   {
      return GenerateInitInstanceLocal((::BmnFHCalPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFHCalPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnFHCalAddress_Dictionary();
   static void BmnFHCalAddress_TClassManip(TClass*);
   static void *new_BmnFHCalAddress(void *p = nullptr);
   static void *newArray_BmnFHCalAddress(Long_t size, void *p);
   static void delete_BmnFHCalAddress(void *p);
   static void deleteArray_BmnFHCalAddress(void *p);
   static void destruct_BmnFHCalAddress(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFHCalAddress*)
   {
      ::BmnFHCalAddress *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnFHCalAddress));
      static ::ROOT::TGenericClassInfo 
         instance("BmnFHCalAddress", "BmnFHCalAddress.h", 28,
                  typeid(::BmnFHCalAddress), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnFHCalAddress_Dictionary, isa_proxy, 4,
                  sizeof(::BmnFHCalAddress) );
      instance.SetNew(&new_BmnFHCalAddress);
      instance.SetNewArray(&newArray_BmnFHCalAddress);
      instance.SetDelete(&delete_BmnFHCalAddress);
      instance.SetDeleteArray(&deleteArray_BmnFHCalAddress);
      instance.SetDestructor(&destruct_BmnFHCalAddress);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFHCalAddress*)
   {
      return GenerateInitInstanceLocal((::BmnFHCalAddress*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFHCalAddress*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnFHCalAddress_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalAddress*)nullptr)->GetClass();
      BmnFHCalAddress_TClassManip(theClass);
   return theClass;
   }

   static void BmnFHCalAddress_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFHCalContFact(void *p = nullptr);
   static void *newArray_BmnFHCalContFact(Long_t size, void *p);
   static void delete_BmnFHCalContFact(void *p);
   static void deleteArray_BmnFHCalContFact(void *p);
   static void destruct_BmnFHCalContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFHCalContFact*)
   {
      ::BmnFHCalContFact *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFHCalContFact >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFHCalContFact", ::BmnFHCalContFact::Class_Version(), "BmnFHCalContFact.h", 12,
                  typeid(::BmnFHCalContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFHCalContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFHCalContFact) );
      instance.SetNew(&new_BmnFHCalContFact);
      instance.SetNewArray(&newArray_BmnFHCalContFact);
      instance.SetDelete(&delete_BmnFHCalContFact);
      instance.SetDeleteArray(&deleteArray_BmnFHCalContFact);
      instance.SetDestructor(&destruct_BmnFHCalContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFHCalContFact*)
   {
      return GenerateInitInstanceLocal((::BmnFHCalContFact*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFHCalContFact*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFHCalGeo(void *p = nullptr);
   static void *newArray_BmnFHCalGeo(Long_t size, void *p);
   static void delete_BmnFHCalGeo(void *p);
   static void deleteArray_BmnFHCalGeo(void *p);
   static void destruct_BmnFHCalGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFHCalGeo*)
   {
      ::BmnFHCalGeo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFHCalGeo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFHCalGeo", ::BmnFHCalGeo::Class_Version(), "BmnFHCalGeo.h", 12,
                  typeid(::BmnFHCalGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFHCalGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFHCalGeo) );
      instance.SetNew(&new_BmnFHCalGeo);
      instance.SetNewArray(&newArray_BmnFHCalGeo);
      instance.SetDelete(&delete_BmnFHCalGeo);
      instance.SetDeleteArray(&deleteArray_BmnFHCalGeo);
      instance.SetDestructor(&destruct_BmnFHCalGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFHCalGeo*)
   {
      return GenerateInitInstanceLocal((::BmnFHCalGeo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFHCalGeo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFHCalDigit(void *p = nullptr);
   static void *newArray_BmnFHCalDigit(Long_t size, void *p);
   static void delete_BmnFHCalDigit(void *p);
   static void deleteArray_BmnFHCalDigit(void *p);
   static void destruct_BmnFHCalDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFHCalDigit*)
   {
      ::BmnFHCalDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFHCalDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFHCalDigit", ::BmnFHCalDigit::Class_Version(), "BmnFHCalDigit.h", 16,
                  typeid(::BmnFHCalDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFHCalDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFHCalDigit) );
      instance.SetNew(&new_BmnFHCalDigit);
      instance.SetNewArray(&newArray_BmnFHCalDigit);
      instance.SetDelete(&delete_BmnFHCalDigit);
      instance.SetDeleteArray(&deleteArray_BmnFHCalDigit);
      instance.SetDestructor(&destruct_BmnFHCalDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFHCalDigit*)
   {
      return GenerateInitInstanceLocal((::BmnFHCalDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFHCalDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFHCalDigitizer(void *p = nullptr);
   static void *newArray_BmnFHCalDigitizer(Long_t size, void *p);
   static void delete_BmnFHCalDigitizer(void *p);
   static void deleteArray_BmnFHCalDigitizer(void *p);
   static void destruct_BmnFHCalDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFHCalDigitizer*)
   {
      ::BmnFHCalDigitizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFHCalDigitizer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFHCalDigitizer", ::BmnFHCalDigitizer::Class_Version(), "BmnFHCalDigitizer.h", 21,
                  typeid(::BmnFHCalDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFHCalDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFHCalDigitizer) );
      instance.SetNew(&new_BmnFHCalDigitizer);
      instance.SetNewArray(&newArray_BmnFHCalDigitizer);
      instance.SetDelete(&delete_BmnFHCalDigitizer);
      instance.SetDeleteArray(&deleteArray_BmnFHCalDigitizer);
      instance.SetDestructor(&destruct_BmnFHCalDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFHCalDigitizer*)
   {
      return GenerateInitInstanceLocal((::BmnFHCalDigitizer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFHCalDigitizer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFHCalDigi(void *p = nullptr);
   static void *newArray_BmnFHCalDigi(Long_t size, void *p);
   static void delete_BmnFHCalDigi(void *p);
   static void deleteArray_BmnFHCalDigi(void *p);
   static void destruct_BmnFHCalDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFHCalDigi*)
   {
      ::BmnFHCalDigi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFHCalDigi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFHCalDigi", ::BmnFHCalDigi::Class_Version(), "BmnFHCalDigi.h", 22,
                  typeid(::BmnFHCalDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFHCalDigi::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFHCalDigi) );
      instance.SetNew(&new_BmnFHCalDigi);
      instance.SetNewArray(&newArray_BmnFHCalDigi);
      instance.SetDelete(&delete_BmnFHCalDigi);
      instance.SetDeleteArray(&deleteArray_BmnFHCalDigi);
      instance.SetDestructor(&destruct_BmnFHCalDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFHCalDigi*)
   {
      return GenerateInitInstanceLocal((::BmnFHCalDigi*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFHCalDigi*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFHCalModule(void *p = nullptr);
   static void *newArray_BmnFHCalModule(Long_t size, void *p);
   static void delete_BmnFHCalModule(void *p);
   static void deleteArray_BmnFHCalModule(void *p);
   static void destruct_BmnFHCalModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFHCalModule*)
   {
      ::BmnFHCalModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFHCalModule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFHCalModule", ::BmnFHCalModule::Class_Version(), "BmnFHCalModule.h", 20,
                  typeid(::BmnFHCalModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFHCalModule::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFHCalModule) );
      instance.SetNew(&new_BmnFHCalModule);
      instance.SetNewArray(&newArray_BmnFHCalModule);
      instance.SetDelete(&delete_BmnFHCalModule);
      instance.SetDeleteArray(&deleteArray_BmnFHCalModule);
      instance.SetDestructor(&destruct_BmnFHCalModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFHCalModule*)
   {
      return GenerateInitInstanceLocal((::BmnFHCalModule*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFHCalModule*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFHCalEvent(void *p = nullptr);
   static void *newArray_BmnFHCalEvent(Long_t size, void *p);
   static void delete_BmnFHCalEvent(void *p);
   static void deleteArray_BmnFHCalEvent(void *p);
   static void destruct_BmnFHCalEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFHCalEvent*)
   {
      ::BmnFHCalEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFHCalEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFHCalEvent", ::BmnFHCalEvent::Class_Version(), "BmnFHCalEvent.h", 21,
                  typeid(::BmnFHCalEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFHCalEvent::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFHCalEvent) );
      instance.SetNew(&new_BmnFHCalEvent);
      instance.SetNewArray(&newArray_BmnFHCalEvent);
      instance.SetDelete(&delete_BmnFHCalEvent);
      instance.SetDeleteArray(&deleteArray_BmnFHCalEvent);
      instance.SetDestructor(&destruct_BmnFHCalEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFHCalEvent*)
   {
      return GenerateInitInstanceLocal((::BmnFHCalEvent*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFHCalEvent*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnFHCalGeoPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFHCalGeoPar::Class_Name()
{
   return "BmnFHCalGeoPar";
}

//______________________________________________________________________________
const char *BmnFHCalGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalGeoPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFHCalGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalGeoPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFHCalGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalGeoPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFHCalGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalGeoPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFHCal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFHCal::Class_Name()
{
   return "BmnFHCal";
}

//______________________________________________________________________________
const char *BmnFHCal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFHCal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFHCal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFHCal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCal*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFHCalPoint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFHCalPoint::Class_Name()
{
   return "BmnFHCalPoint";
}

//______________________________________________________________________________
const char *BmnFHCalPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalPoint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFHCalPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalPoint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFHCalPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalPoint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFHCalPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalPoint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFHCalContFact::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFHCalContFact::Class_Name()
{
   return "BmnFHCalContFact";
}

//______________________________________________________________________________
const char *BmnFHCalContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalContFact*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFHCalContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalContFact*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFHCalContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalContFact*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFHCalContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalContFact*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFHCalGeo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFHCalGeo::Class_Name()
{
   return "BmnFHCalGeo";
}

//______________________________________________________________________________
const char *BmnFHCalGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalGeo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFHCalGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalGeo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFHCalGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalGeo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFHCalGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalGeo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFHCalDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFHCalDigit::Class_Name()
{
   return "BmnFHCalDigit";
}

//______________________________________________________________________________
const char *BmnFHCalDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFHCalDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFHCalDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFHCalDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFHCalDigitizer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFHCalDigitizer::Class_Name()
{
   return "BmnFHCalDigitizer";
}

//______________________________________________________________________________
const char *BmnFHCalDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalDigitizer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFHCalDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalDigitizer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFHCalDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalDigitizer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFHCalDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalDigitizer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFHCalDigi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFHCalDigi::Class_Name()
{
   return "BmnFHCalDigi";
}

//______________________________________________________________________________
const char *BmnFHCalDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalDigi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFHCalDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalDigi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFHCalDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalDigi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFHCalDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalDigi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFHCalModule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFHCalModule::Class_Name()
{
   return "BmnFHCalModule";
}

//______________________________________________________________________________
const char *BmnFHCalModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalModule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFHCalModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalModule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFHCalModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalModule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFHCalModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalModule*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFHCalEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFHCalEvent::Class_Name()
{
   return "BmnFHCalEvent";
}

//______________________________________________________________________________
const char *BmnFHCalEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFHCalEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFHCalEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFHCalEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFHCalEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnFHCalGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFHCalGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFHCalGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFHCalGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFHCalGeoPar(void *p) {
      return  p ? new(p) ::BmnFHCalGeoPar : new ::BmnFHCalGeoPar;
   }
   static void *newArray_BmnFHCalGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFHCalGeoPar[nElements] : new ::BmnFHCalGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFHCalGeoPar(void *p) {
      delete ((::BmnFHCalGeoPar*)p);
   }
   static void deleteArray_BmnFHCalGeoPar(void *p) {
      delete [] ((::BmnFHCalGeoPar*)p);
   }
   static void destruct_BmnFHCalGeoPar(void *p) {
      typedef ::BmnFHCalGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFHCalGeoPar

//______________________________________________________________________________
void BmnFHCal::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFHCal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFHCal::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFHCal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFHCal(void *p) {
      return  p ? new(p) ::BmnFHCal : new ::BmnFHCal;
   }
   static void *newArray_BmnFHCal(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFHCal[nElements] : new ::BmnFHCal[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFHCal(void *p) {
      delete ((::BmnFHCal*)p);
   }
   static void deleteArray_BmnFHCal(void *p) {
      delete [] ((::BmnFHCal*)p);
   }
   static void destruct_BmnFHCal(void *p) {
      typedef ::BmnFHCal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFHCal

//______________________________________________________________________________
void BmnFHCalPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFHCalPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFHCalPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFHCalPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFHCalPoint(void *p) {
      return  p ? new(p) ::BmnFHCalPoint : new ::BmnFHCalPoint;
   }
   static void *newArray_BmnFHCalPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFHCalPoint[nElements] : new ::BmnFHCalPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFHCalPoint(void *p) {
      delete ((::BmnFHCalPoint*)p);
   }
   static void deleteArray_BmnFHCalPoint(void *p) {
      delete [] ((::BmnFHCalPoint*)p);
   }
   static void destruct_BmnFHCalPoint(void *p) {
      typedef ::BmnFHCalPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFHCalPoint

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFHCalAddress(void *p) {
      return  p ? new(p) ::BmnFHCalAddress : new ::BmnFHCalAddress;
   }
   static void *newArray_BmnFHCalAddress(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFHCalAddress[nElements] : new ::BmnFHCalAddress[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFHCalAddress(void *p) {
      delete ((::BmnFHCalAddress*)p);
   }
   static void deleteArray_BmnFHCalAddress(void *p) {
      delete [] ((::BmnFHCalAddress*)p);
   }
   static void destruct_BmnFHCalAddress(void *p) {
      typedef ::BmnFHCalAddress current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFHCalAddress

//______________________________________________________________________________
void BmnFHCalContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFHCalContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFHCalContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFHCalContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFHCalContFact(void *p) {
      return  p ? new(p) ::BmnFHCalContFact : new ::BmnFHCalContFact;
   }
   static void *newArray_BmnFHCalContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFHCalContFact[nElements] : new ::BmnFHCalContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFHCalContFact(void *p) {
      delete ((::BmnFHCalContFact*)p);
   }
   static void deleteArray_BmnFHCalContFact(void *p) {
      delete [] ((::BmnFHCalContFact*)p);
   }
   static void destruct_BmnFHCalContFact(void *p) {
      typedef ::BmnFHCalContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFHCalContFact

//______________________________________________________________________________
void BmnFHCalGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFHCalGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFHCalGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFHCalGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFHCalGeo(void *p) {
      return  p ? new(p) ::BmnFHCalGeo : new ::BmnFHCalGeo;
   }
   static void *newArray_BmnFHCalGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFHCalGeo[nElements] : new ::BmnFHCalGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFHCalGeo(void *p) {
      delete ((::BmnFHCalGeo*)p);
   }
   static void deleteArray_BmnFHCalGeo(void *p) {
      delete [] ((::BmnFHCalGeo*)p);
   }
   static void destruct_BmnFHCalGeo(void *p) {
      typedef ::BmnFHCalGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFHCalGeo

//______________________________________________________________________________
void BmnFHCalDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFHCalDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFHCalDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFHCalDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFHCalDigit(void *p) {
      return  p ? new(p) ::BmnFHCalDigit : new ::BmnFHCalDigit;
   }
   static void *newArray_BmnFHCalDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFHCalDigit[nElements] : new ::BmnFHCalDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFHCalDigit(void *p) {
      delete ((::BmnFHCalDigit*)p);
   }
   static void deleteArray_BmnFHCalDigit(void *p) {
      delete [] ((::BmnFHCalDigit*)p);
   }
   static void destruct_BmnFHCalDigit(void *p) {
      typedef ::BmnFHCalDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFHCalDigit

//______________________________________________________________________________
void BmnFHCalDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFHCalDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFHCalDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFHCalDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFHCalDigitizer(void *p) {
      return  p ? new(p) ::BmnFHCalDigitizer : new ::BmnFHCalDigitizer;
   }
   static void *newArray_BmnFHCalDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFHCalDigitizer[nElements] : new ::BmnFHCalDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFHCalDigitizer(void *p) {
      delete ((::BmnFHCalDigitizer*)p);
   }
   static void deleteArray_BmnFHCalDigitizer(void *p) {
      delete [] ((::BmnFHCalDigitizer*)p);
   }
   static void destruct_BmnFHCalDigitizer(void *p) {
      typedef ::BmnFHCalDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFHCalDigitizer

//______________________________________________________________________________
void BmnFHCalDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFHCalDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFHCalDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFHCalDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFHCalDigi(void *p) {
      return  p ? new(p) ::BmnFHCalDigi : new ::BmnFHCalDigi;
   }
   static void *newArray_BmnFHCalDigi(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFHCalDigi[nElements] : new ::BmnFHCalDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFHCalDigi(void *p) {
      delete ((::BmnFHCalDigi*)p);
   }
   static void deleteArray_BmnFHCalDigi(void *p) {
      delete [] ((::BmnFHCalDigi*)p);
   }
   static void destruct_BmnFHCalDigi(void *p) {
      typedef ::BmnFHCalDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFHCalDigi

//______________________________________________________________________________
void BmnFHCalModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFHCalModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFHCalModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFHCalModule::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFHCalModule(void *p) {
      return  p ? new(p) ::BmnFHCalModule : new ::BmnFHCalModule;
   }
   static void *newArray_BmnFHCalModule(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFHCalModule[nElements] : new ::BmnFHCalModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFHCalModule(void *p) {
      delete ((::BmnFHCalModule*)p);
   }
   static void deleteArray_BmnFHCalModule(void *p) {
      delete [] ((::BmnFHCalModule*)p);
   }
   static void destruct_BmnFHCalModule(void *p) {
      typedef ::BmnFHCalModule current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFHCalModule

//______________________________________________________________________________
void BmnFHCalEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFHCalEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFHCalEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFHCalEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFHCalEvent(void *p) {
      return  p ? new(p) ::BmnFHCalEvent : new ::BmnFHCalEvent;
   }
   static void *newArray_BmnFHCalEvent(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFHCalEvent[nElements] : new ::BmnFHCalEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFHCalEvent(void *p) {
      delete ((::BmnFHCalEvent*)p);
   }
   static void deleteArray_BmnFHCalEvent(void *p) {
      delete [] ((::BmnFHCalEvent*)p);
   }
   static void destruct_BmnFHCalEvent(void *p) {
      typedef ::BmnFHCalEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFHCalEvent

namespace {
  void TriggerDictionaryInitialization_G__FHCalDict_Impl() {
    static const char* headers[] = {
"BmnFHCal.h",
"BmnFHCalPoint.h",
"BmnFHCalAddress.h",
"BmnFHCalContFact.h",
"BmnFHCalGeo.h",
"BmnFHCalGeoPar.h",
"BmnFHCalDigitizer.h",
"BmnFHCalDigi.h",
"BmnFHCalDigit.h",
"BmnFHCalModule.h",
"BmnFHCalEvent.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/detectors/fhcal",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/fhcal/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__FHCalDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnFHCalGeoPar.h")))  __attribute__((annotate("$clingAutoload$BmnFHCal.h")))  BmnFHCalGeoPar;
class __attribute__((annotate("$clingAutoload$BmnFHCal.h")))  BmnFHCal;
class __attribute__((annotate("$clingAutoload$BmnFHCalPoint.h")))  BmnFHCalPoint;
class __attribute__((annotate("$clingAutoload$BmnFHCalAddress.h")))  BmnFHCalAddress;
class __attribute__((annotate("$clingAutoload$BmnFHCalContFact.h")))  BmnFHCalContFact;
class __attribute__((annotate(R"ATTRDUMP(Class for Hyp)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnFHCalGeo.h")))  BmnFHCalGeo;
class __attribute__((annotate("$clingAutoload$BmnFHCalDigit.h")))  __attribute__((annotate("$clingAutoload$BmnFHCalDigitizer.h")))  BmnFHCalDigit;
class __attribute__((annotate("$clingAutoload$BmnFHCalDigitizer.h")))  BmnFHCalDigitizer;
class __attribute__((annotate("$clingAutoload$BmnFHCalDigi.h")))  BmnFHCalDigi;
class __attribute__((annotate("$clingAutoload$BmnFHCalModule.h")))  BmnFHCalModule;
class __attribute__((annotate("$clingAutoload$BmnFHCalEvent.h")))  BmnFHCalEvent;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__FHCalDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnFHCal.h"
#include "BmnFHCalPoint.h"
#include "BmnFHCalAddress.h"
#include "BmnFHCalContFact.h"
#include "BmnFHCalGeo.h"
#include "BmnFHCalGeoPar.h"
#include "BmnFHCalDigitizer.h"
#include "BmnFHCalDigi.h"
#include "BmnFHCalDigit.h"
#include "BmnFHCalModule.h"
#include "BmnFHCalEvent.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnFHCal", payloadCode, "@",
"BmnFHCalAddress", payloadCode, "@",
"BmnFHCalContFact", payloadCode, "@",
"BmnFHCalDigi", payloadCode, "@",
"BmnFHCalDigit", payloadCode, "@",
"BmnFHCalDigitizer", payloadCode, "@",
"BmnFHCalEvent", payloadCode, "@",
"BmnFHCalGeo", payloadCode, "@",
"BmnFHCalGeoPar", payloadCode, "@",
"BmnFHCalModule", payloadCode, "@",
"BmnFHCalPoint", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__FHCalDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__FHCalDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__FHCalDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__FHCalDict() {
  TriggerDictionaryInitialization_G__FHCalDict_Impl();
}
