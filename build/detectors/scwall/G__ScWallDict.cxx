// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdIscwalldIG__ScWallDict
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
#include "BmnScWall.h"
#include "BmnScWallPoint.h"
#include "BmnScWallDigi.h"
#include "BmnScWallAddress.h"
#include "BmnScWallContFact.h"
#include "BmnScWallGeo.h"
#include "BmnScWallGeoPar.h"
#include "BmnScWallDigit.h"
#include "BmnScWallDigitizer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnScWallGeoPar(void *p = nullptr);
   static void *newArray_BmnScWallGeoPar(Long_t size, void *p);
   static void delete_BmnScWallGeoPar(void *p);
   static void deleteArray_BmnScWallGeoPar(void *p);
   static void destruct_BmnScWallGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnScWallGeoPar*)
   {
      ::BmnScWallGeoPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnScWallGeoPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnScWallGeoPar", ::BmnScWallGeoPar::Class_Version(), "BmnScWallGeoPar.h", 13,
                  typeid(::BmnScWallGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnScWallGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnScWallGeoPar) );
      instance.SetNew(&new_BmnScWallGeoPar);
      instance.SetNewArray(&newArray_BmnScWallGeoPar);
      instance.SetDelete(&delete_BmnScWallGeoPar);
      instance.SetDeleteArray(&deleteArray_BmnScWallGeoPar);
      instance.SetDestructor(&destruct_BmnScWallGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnScWallGeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnScWallGeoPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnScWallGeoPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnScWallPoint(void *p = nullptr);
   static void *newArray_BmnScWallPoint(Long_t size, void *p);
   static void delete_BmnScWallPoint(void *p);
   static void deleteArray_BmnScWallPoint(void *p);
   static void destruct_BmnScWallPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnScWallPoint*)
   {
      ::BmnScWallPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnScWallPoint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnScWallPoint", ::BmnScWallPoint::Class_Version(), "BmnScWallPoint.h", 18,
                  typeid(::BmnScWallPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnScWallPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnScWallPoint) );
      instance.SetNew(&new_BmnScWallPoint);
      instance.SetNewArray(&newArray_BmnScWallPoint);
      instance.SetDelete(&delete_BmnScWallPoint);
      instance.SetDeleteArray(&deleteArray_BmnScWallPoint);
      instance.SetDestructor(&destruct_BmnScWallPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnScWallPoint*)
   {
      return GenerateInitInstanceLocal((::BmnScWallPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnScWallPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnScWall(void *p = nullptr);
   static void *newArray_BmnScWall(Long_t size, void *p);
   static void delete_BmnScWall(void *p);
   static void deleteArray_BmnScWall(void *p);
   static void destruct_BmnScWall(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnScWall*)
   {
      ::BmnScWall *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnScWall >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnScWall", ::BmnScWall::Class_Version(), "BmnScWall.h", 25,
                  typeid(::BmnScWall), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnScWall::Dictionary, isa_proxy, 4,
                  sizeof(::BmnScWall) );
      instance.SetNew(&new_BmnScWall);
      instance.SetNewArray(&newArray_BmnScWall);
      instance.SetDelete(&delete_BmnScWall);
      instance.SetDeleteArray(&deleteArray_BmnScWall);
      instance.SetDestructor(&destruct_BmnScWall);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnScWall*)
   {
      return GenerateInitInstanceLocal((::BmnScWall*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnScWall*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnScWallAddress_Dictionary();
   static void BmnScWallAddress_TClassManip(TClass*);
   static void *new_BmnScWallAddress(void *p = nullptr);
   static void *newArray_BmnScWallAddress(Long_t size, void *p);
   static void delete_BmnScWallAddress(void *p);
   static void deleteArray_BmnScWallAddress(void *p);
   static void destruct_BmnScWallAddress(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnScWallAddress*)
   {
      ::BmnScWallAddress *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnScWallAddress));
      static ::ROOT::TGenericClassInfo 
         instance("BmnScWallAddress", "BmnScWallAddress.h", 26,
                  typeid(::BmnScWallAddress), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnScWallAddress_Dictionary, isa_proxy, 4,
                  sizeof(::BmnScWallAddress) );
      instance.SetNew(&new_BmnScWallAddress);
      instance.SetNewArray(&newArray_BmnScWallAddress);
      instance.SetDelete(&delete_BmnScWallAddress);
      instance.SetDeleteArray(&deleteArray_BmnScWallAddress);
      instance.SetDestructor(&destruct_BmnScWallAddress);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnScWallAddress*)
   {
      return GenerateInitInstanceLocal((::BmnScWallAddress*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnScWallAddress*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnScWallAddress_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnScWallAddress*)nullptr)->GetClass();
      BmnScWallAddress_TClassManip(theClass);
   return theClass;
   }

   static void BmnScWallAddress_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnScWallDigi(void *p = nullptr);
   static void *newArray_BmnScWallDigi(Long_t size, void *p);
   static void delete_BmnScWallDigi(void *p);
   static void deleteArray_BmnScWallDigi(void *p);
   static void destruct_BmnScWallDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnScWallDigi*)
   {
      ::BmnScWallDigi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnScWallDigi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnScWallDigi", ::BmnScWallDigi::Class_Version(), "BmnScWallDigi.h", 22,
                  typeid(::BmnScWallDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnScWallDigi::Dictionary, isa_proxy, 4,
                  sizeof(::BmnScWallDigi) );
      instance.SetNew(&new_BmnScWallDigi);
      instance.SetNewArray(&newArray_BmnScWallDigi);
      instance.SetDelete(&delete_BmnScWallDigi);
      instance.SetDeleteArray(&deleteArray_BmnScWallDigi);
      instance.SetDestructor(&destruct_BmnScWallDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnScWallDigi*)
   {
      return GenerateInitInstanceLocal((::BmnScWallDigi*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnScWallDigi*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnScWallContFact(void *p = nullptr);
   static void *newArray_BmnScWallContFact(Long_t size, void *p);
   static void delete_BmnScWallContFact(void *p);
   static void deleteArray_BmnScWallContFact(void *p);
   static void destruct_BmnScWallContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnScWallContFact*)
   {
      ::BmnScWallContFact *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnScWallContFact >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnScWallContFact", ::BmnScWallContFact::Class_Version(), "BmnScWallContFact.h", 12,
                  typeid(::BmnScWallContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnScWallContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnScWallContFact) );
      instance.SetNew(&new_BmnScWallContFact);
      instance.SetNewArray(&newArray_BmnScWallContFact);
      instance.SetDelete(&delete_BmnScWallContFact);
      instance.SetDeleteArray(&deleteArray_BmnScWallContFact);
      instance.SetDestructor(&destruct_BmnScWallContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnScWallContFact*)
   {
      return GenerateInitInstanceLocal((::BmnScWallContFact*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnScWallContFact*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnScWallGeo(void *p = nullptr);
   static void *newArray_BmnScWallGeo(Long_t size, void *p);
   static void delete_BmnScWallGeo(void *p);
   static void deleteArray_BmnScWallGeo(void *p);
   static void destruct_BmnScWallGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnScWallGeo*)
   {
      ::BmnScWallGeo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnScWallGeo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnScWallGeo", ::BmnScWallGeo::Class_Version(), "BmnScWallGeo.h", 12,
                  typeid(::BmnScWallGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnScWallGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnScWallGeo) );
      instance.SetNew(&new_BmnScWallGeo);
      instance.SetNewArray(&newArray_BmnScWallGeo);
      instance.SetDelete(&delete_BmnScWallGeo);
      instance.SetDeleteArray(&deleteArray_BmnScWallGeo);
      instance.SetDestructor(&destruct_BmnScWallGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnScWallGeo*)
   {
      return GenerateInitInstanceLocal((::BmnScWallGeo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnScWallGeo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnScWallDigit(void *p = nullptr);
   static void *newArray_BmnScWallDigit(Long_t size, void *p);
   static void delete_BmnScWallDigit(void *p);
   static void deleteArray_BmnScWallDigit(void *p);
   static void destruct_BmnScWallDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnScWallDigit*)
   {
      ::BmnScWallDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnScWallDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnScWallDigit", ::BmnScWallDigit::Class_Version(), "BmnScWallDigit.h", 16,
                  typeid(::BmnScWallDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnScWallDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnScWallDigit) );
      instance.SetNew(&new_BmnScWallDigit);
      instance.SetNewArray(&newArray_BmnScWallDigit);
      instance.SetDelete(&delete_BmnScWallDigit);
      instance.SetDeleteArray(&deleteArray_BmnScWallDigit);
      instance.SetDestructor(&destruct_BmnScWallDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnScWallDigit*)
   {
      return GenerateInitInstanceLocal((::BmnScWallDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnScWallDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnScWallDigitizer(void *p = nullptr);
   static void *newArray_BmnScWallDigitizer(Long_t size, void *p);
   static void delete_BmnScWallDigitizer(void *p);
   static void deleteArray_BmnScWallDigitizer(void *p);
   static void destruct_BmnScWallDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnScWallDigitizer*)
   {
      ::BmnScWallDigitizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnScWallDigitizer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnScWallDigitizer", ::BmnScWallDigitizer::Class_Version(), "BmnScWallDigitizer.h", 21,
                  typeid(::BmnScWallDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnScWallDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnScWallDigitizer) );
      instance.SetNew(&new_BmnScWallDigitizer);
      instance.SetNewArray(&newArray_BmnScWallDigitizer);
      instance.SetDelete(&delete_BmnScWallDigitizer);
      instance.SetDeleteArray(&deleteArray_BmnScWallDigitizer);
      instance.SetDestructor(&destruct_BmnScWallDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnScWallDigitizer*)
   {
      return GenerateInitInstanceLocal((::BmnScWallDigitizer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnScWallDigitizer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnScWallGeoPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnScWallGeoPar::Class_Name()
{
   return "BmnScWallGeoPar";
}

//______________________________________________________________________________
const char *BmnScWallGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallGeoPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnScWallGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallGeoPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnScWallGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallGeoPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnScWallGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallGeoPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnScWallPoint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnScWallPoint::Class_Name()
{
   return "BmnScWallPoint";
}

//______________________________________________________________________________
const char *BmnScWallPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallPoint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnScWallPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallPoint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnScWallPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallPoint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnScWallPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallPoint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnScWall::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnScWall::Class_Name()
{
   return "BmnScWall";
}

//______________________________________________________________________________
const char *BmnScWall::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWall*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnScWall::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWall*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnScWall::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWall*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnScWall::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWall*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnScWallDigi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnScWallDigi::Class_Name()
{
   return "BmnScWallDigi";
}

//______________________________________________________________________________
const char *BmnScWallDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallDigi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnScWallDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallDigi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnScWallDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallDigi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnScWallDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallDigi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnScWallContFact::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnScWallContFact::Class_Name()
{
   return "BmnScWallContFact";
}

//______________________________________________________________________________
const char *BmnScWallContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallContFact*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnScWallContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallContFact*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnScWallContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallContFact*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnScWallContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallContFact*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnScWallGeo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnScWallGeo::Class_Name()
{
   return "BmnScWallGeo";
}

//______________________________________________________________________________
const char *BmnScWallGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallGeo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnScWallGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallGeo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnScWallGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallGeo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnScWallGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallGeo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnScWallDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnScWallDigit::Class_Name()
{
   return "BmnScWallDigit";
}

//______________________________________________________________________________
const char *BmnScWallDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnScWallDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnScWallDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnScWallDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnScWallDigitizer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnScWallDigitizer::Class_Name()
{
   return "BmnScWallDigitizer";
}

//______________________________________________________________________________
const char *BmnScWallDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallDigitizer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnScWallDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallDigitizer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnScWallDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallDigitizer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnScWallDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnScWallDigitizer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnScWallGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnScWallGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnScWallGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnScWallGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnScWallGeoPar(void *p) {
      return  p ? new(p) ::BmnScWallGeoPar : new ::BmnScWallGeoPar;
   }
   static void *newArray_BmnScWallGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnScWallGeoPar[nElements] : new ::BmnScWallGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnScWallGeoPar(void *p) {
      delete ((::BmnScWallGeoPar*)p);
   }
   static void deleteArray_BmnScWallGeoPar(void *p) {
      delete [] ((::BmnScWallGeoPar*)p);
   }
   static void destruct_BmnScWallGeoPar(void *p) {
      typedef ::BmnScWallGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnScWallGeoPar

//______________________________________________________________________________
void BmnScWallPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnScWallPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnScWallPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnScWallPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnScWallPoint(void *p) {
      return  p ? new(p) ::BmnScWallPoint : new ::BmnScWallPoint;
   }
   static void *newArray_BmnScWallPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnScWallPoint[nElements] : new ::BmnScWallPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnScWallPoint(void *p) {
      delete ((::BmnScWallPoint*)p);
   }
   static void deleteArray_BmnScWallPoint(void *p) {
      delete [] ((::BmnScWallPoint*)p);
   }
   static void destruct_BmnScWallPoint(void *p) {
      typedef ::BmnScWallPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnScWallPoint

//______________________________________________________________________________
void BmnScWall::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnScWall.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnScWall::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnScWall::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnScWall(void *p) {
      return  p ? new(p) ::BmnScWall : new ::BmnScWall;
   }
   static void *newArray_BmnScWall(Long_t nElements, void *p) {
      return p ? new(p) ::BmnScWall[nElements] : new ::BmnScWall[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnScWall(void *p) {
      delete ((::BmnScWall*)p);
   }
   static void deleteArray_BmnScWall(void *p) {
      delete [] ((::BmnScWall*)p);
   }
   static void destruct_BmnScWall(void *p) {
      typedef ::BmnScWall current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnScWall

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnScWallAddress(void *p) {
      return  p ? new(p) ::BmnScWallAddress : new ::BmnScWallAddress;
   }
   static void *newArray_BmnScWallAddress(Long_t nElements, void *p) {
      return p ? new(p) ::BmnScWallAddress[nElements] : new ::BmnScWallAddress[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnScWallAddress(void *p) {
      delete ((::BmnScWallAddress*)p);
   }
   static void deleteArray_BmnScWallAddress(void *p) {
      delete [] ((::BmnScWallAddress*)p);
   }
   static void destruct_BmnScWallAddress(void *p) {
      typedef ::BmnScWallAddress current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnScWallAddress

//______________________________________________________________________________
void BmnScWallDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnScWallDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnScWallDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnScWallDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnScWallDigi(void *p) {
      return  p ? new(p) ::BmnScWallDigi : new ::BmnScWallDigi;
   }
   static void *newArray_BmnScWallDigi(Long_t nElements, void *p) {
      return p ? new(p) ::BmnScWallDigi[nElements] : new ::BmnScWallDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnScWallDigi(void *p) {
      delete ((::BmnScWallDigi*)p);
   }
   static void deleteArray_BmnScWallDigi(void *p) {
      delete [] ((::BmnScWallDigi*)p);
   }
   static void destruct_BmnScWallDigi(void *p) {
      typedef ::BmnScWallDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnScWallDigi

//______________________________________________________________________________
void BmnScWallContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnScWallContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnScWallContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnScWallContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnScWallContFact(void *p) {
      return  p ? new(p) ::BmnScWallContFact : new ::BmnScWallContFact;
   }
   static void *newArray_BmnScWallContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnScWallContFact[nElements] : new ::BmnScWallContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnScWallContFact(void *p) {
      delete ((::BmnScWallContFact*)p);
   }
   static void deleteArray_BmnScWallContFact(void *p) {
      delete [] ((::BmnScWallContFact*)p);
   }
   static void destruct_BmnScWallContFact(void *p) {
      typedef ::BmnScWallContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnScWallContFact

//______________________________________________________________________________
void BmnScWallGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnScWallGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnScWallGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnScWallGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnScWallGeo(void *p) {
      return  p ? new(p) ::BmnScWallGeo : new ::BmnScWallGeo;
   }
   static void *newArray_BmnScWallGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnScWallGeo[nElements] : new ::BmnScWallGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnScWallGeo(void *p) {
      delete ((::BmnScWallGeo*)p);
   }
   static void deleteArray_BmnScWallGeo(void *p) {
      delete [] ((::BmnScWallGeo*)p);
   }
   static void destruct_BmnScWallGeo(void *p) {
      typedef ::BmnScWallGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnScWallGeo

//______________________________________________________________________________
void BmnScWallDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnScWallDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnScWallDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnScWallDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnScWallDigit(void *p) {
      return  p ? new(p) ::BmnScWallDigit : new ::BmnScWallDigit;
   }
   static void *newArray_BmnScWallDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnScWallDigit[nElements] : new ::BmnScWallDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnScWallDigit(void *p) {
      delete ((::BmnScWallDigit*)p);
   }
   static void deleteArray_BmnScWallDigit(void *p) {
      delete [] ((::BmnScWallDigit*)p);
   }
   static void destruct_BmnScWallDigit(void *p) {
      typedef ::BmnScWallDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnScWallDigit

//______________________________________________________________________________
void BmnScWallDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnScWallDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnScWallDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnScWallDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnScWallDigitizer(void *p) {
      return  p ? new(p) ::BmnScWallDigitizer : new ::BmnScWallDigitizer;
   }
   static void *newArray_BmnScWallDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnScWallDigitizer[nElements] : new ::BmnScWallDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnScWallDigitizer(void *p) {
      delete ((::BmnScWallDigitizer*)p);
   }
   static void deleteArray_BmnScWallDigitizer(void *p) {
      delete [] ((::BmnScWallDigitizer*)p);
   }
   static void destruct_BmnScWallDigitizer(void *p) {
      typedef ::BmnScWallDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnScWallDigitizer

namespace {
  void TriggerDictionaryInitialization_G__ScWallDict_Impl() {
    static const char* headers[] = {
"BmnScWall.h",
"BmnScWallPoint.h",
"BmnScWallDigi.h",
"BmnScWallAddress.h",
"BmnScWallContFact.h",
"BmnScWallGeo.h",
"BmnScWallGeoPar.h",
"BmnScWallDigit.h",
"BmnScWallDigitizer.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/detectors/scwall",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/scwall/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__ScWallDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnScWallGeoPar.h")))  __attribute__((annotate("$clingAutoload$BmnScWall.h")))  BmnScWallGeoPar;
class __attribute__((annotate("$clingAutoload$BmnScWallPoint.h")))  __attribute__((annotate("$clingAutoload$BmnScWall.h")))  BmnScWallPoint;
class __attribute__((annotate("$clingAutoload$BmnScWall.h")))  BmnScWall;
class __attribute__((annotate("$clingAutoload$BmnScWallAddress.h")))  __attribute__((annotate("$clingAutoload$BmnScWallDigi.h")))  BmnScWallAddress;
class __attribute__((annotate("$clingAutoload$BmnScWallDigi.h")))  BmnScWallDigi;
class __attribute__((annotate("$clingAutoload$BmnScWallContFact.h")))  BmnScWallContFact;
class __attribute__((annotate(R"ATTRDUMP(Class for Hyp)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnScWallGeo.h")))  BmnScWallGeo;
class __attribute__((annotate("$clingAutoload$BmnScWallDigit.h")))  BmnScWallDigit;
class __attribute__((annotate("$clingAutoload$BmnScWallDigitizer.h")))  BmnScWallDigitizer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__ScWallDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnScWall.h"
#include "BmnScWallPoint.h"
#include "BmnScWallDigi.h"
#include "BmnScWallAddress.h"
#include "BmnScWallContFact.h"
#include "BmnScWallGeo.h"
#include "BmnScWallGeoPar.h"
#include "BmnScWallDigit.h"
#include "BmnScWallDigitizer.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnScWall", payloadCode, "@",
"BmnScWallAddress", payloadCode, "@",
"BmnScWallContFact", payloadCode, "@",
"BmnScWallDigi", payloadCode, "@",
"BmnScWallDigit", payloadCode, "@",
"BmnScWallDigitizer", payloadCode, "@",
"BmnScWallGeo", payloadCode, "@",
"BmnScWallGeoPar", payloadCode, "@",
"BmnScWallPoint", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__ScWallDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__ScWallDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__ScWallDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__ScWallDict() {
  TriggerDictionaryInitialization_G__ScWallDict_Impl();
}
