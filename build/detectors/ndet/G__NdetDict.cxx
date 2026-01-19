// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIdetectorsdIndetdIG__NdetDict
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
#include "BmnNdet.h"
#include "BmnNdetPoint.h"
#include "BmnNdetContFact.h"
#include "BmnNdetAddress.h"
#include "BmnNdetDigi.h"
#include "BmnNdetGeo.h"
#include "BmnNdetGeoPar.h"
#include "BmnNdetDigit.h"
#include "BmnNdetDigitPar.h"
#include "BmnNdetDigitScheme.h"
#include "BmnNdetDigitizer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_BmnNdetGeoPar(void *p = nullptr);
   static void *newArray_BmnNdetGeoPar(Long_t size, void *p);
   static void delete_BmnNdetGeoPar(void *p);
   static void deleteArray_BmnNdetGeoPar(void *p);
   static void destruct_BmnNdetGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnNdetGeoPar*)
   {
      ::BmnNdetGeoPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnNdetGeoPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnNdetGeoPar", ::BmnNdetGeoPar::Class_Version(), "BmnNdetGeoPar.h", 18,
                  typeid(::BmnNdetGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnNdetGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnNdetGeoPar) );
      instance.SetNew(&new_BmnNdetGeoPar);
      instance.SetNewArray(&newArray_BmnNdetGeoPar);
      instance.SetDelete(&delete_BmnNdetGeoPar);
      instance.SetDeleteArray(&deleteArray_BmnNdetGeoPar);
      instance.SetDestructor(&destruct_BmnNdetGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnNdetGeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnNdetGeoPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnNdetGeoPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnNdet(void *p = nullptr);
   static void *newArray_BmnNdet(Long_t size, void *p);
   static void delete_BmnNdet(void *p);
   static void deleteArray_BmnNdet(void *p);
   static void destruct_BmnNdet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnNdet*)
   {
      ::BmnNdet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnNdet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnNdet", ::BmnNdet::Class_Version(), "BmnNdet.h", 29,
                  typeid(::BmnNdet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnNdet::Dictionary, isa_proxy, 4,
                  sizeof(::BmnNdet) );
      instance.SetNew(&new_BmnNdet);
      instance.SetNewArray(&newArray_BmnNdet);
      instance.SetDelete(&delete_BmnNdet);
      instance.SetDeleteArray(&deleteArray_BmnNdet);
      instance.SetDestructor(&destruct_BmnNdet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnNdet*)
   {
      return GenerateInitInstanceLocal((::BmnNdet*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnNdet*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnNdetPoint(void *p = nullptr);
   static void *newArray_BmnNdetPoint(Long_t size, void *p);
   static void delete_BmnNdetPoint(void *p);
   static void deleteArray_BmnNdetPoint(void *p);
   static void destruct_BmnNdetPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnNdetPoint*)
   {
      ::BmnNdetPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnNdetPoint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnNdetPoint", ::BmnNdetPoint::Class_Version(), "BmnNdetPoint.h", 19,
                  typeid(::BmnNdetPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnNdetPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnNdetPoint) );
      instance.SetNew(&new_BmnNdetPoint);
      instance.SetNewArray(&newArray_BmnNdetPoint);
      instance.SetDelete(&delete_BmnNdetPoint);
      instance.SetDeleteArray(&deleteArray_BmnNdetPoint);
      instance.SetDestructor(&destruct_BmnNdetPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnNdetPoint*)
   {
      return GenerateInitInstanceLocal((::BmnNdetPoint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnNdetPoint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnNdetContFact(void *p = nullptr);
   static void *newArray_BmnNdetContFact(Long_t size, void *p);
   static void delete_BmnNdetContFact(void *p);
   static void deleteArray_BmnNdetContFact(void *p);
   static void destruct_BmnNdetContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnNdetContFact*)
   {
      ::BmnNdetContFact *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnNdetContFact >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnNdetContFact", ::BmnNdetContFact::Class_Version(), "BmnNdetContFact.h", 13,
                  typeid(::BmnNdetContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnNdetContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnNdetContFact) );
      instance.SetNew(&new_BmnNdetContFact);
      instance.SetNewArray(&newArray_BmnNdetContFact);
      instance.SetDelete(&delete_BmnNdetContFact);
      instance.SetDeleteArray(&deleteArray_BmnNdetContFact);
      instance.SetDestructor(&destruct_BmnNdetContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnNdetContFact*)
   {
      return GenerateInitInstanceLocal((::BmnNdetContFact*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnNdetContFact*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnNdetAddress_Dictionary();
   static void BmnNdetAddress_TClassManip(TClass*);
   static void *new_BmnNdetAddress(void *p = nullptr);
   static void *newArray_BmnNdetAddress(Long_t size, void *p);
   static void delete_BmnNdetAddress(void *p);
   static void deleteArray_BmnNdetAddress(void *p);
   static void destruct_BmnNdetAddress(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnNdetAddress*)
   {
      ::BmnNdetAddress *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnNdetAddress));
      static ::ROOT::TGenericClassInfo 
         instance("BmnNdetAddress", "BmnNdetAddress.h", 26,
                  typeid(::BmnNdetAddress), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnNdetAddress_Dictionary, isa_proxy, 4,
                  sizeof(::BmnNdetAddress) );
      instance.SetNew(&new_BmnNdetAddress);
      instance.SetNewArray(&newArray_BmnNdetAddress);
      instance.SetDelete(&delete_BmnNdetAddress);
      instance.SetDeleteArray(&deleteArray_BmnNdetAddress);
      instance.SetDestructor(&destruct_BmnNdetAddress);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnNdetAddress*)
   {
      return GenerateInitInstanceLocal((::BmnNdetAddress*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnNdetAddress*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnNdetAddress_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnNdetAddress*)nullptr)->GetClass();
      BmnNdetAddress_TClassManip(theClass);
   return theClass;
   }

   static void BmnNdetAddress_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnNdetDigi(void *p = nullptr);
   static void *newArray_BmnNdetDigi(Long_t size, void *p);
   static void delete_BmnNdetDigi(void *p);
   static void deleteArray_BmnNdetDigi(void *p);
   static void destruct_BmnNdetDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnNdetDigi*)
   {
      ::BmnNdetDigi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnNdetDigi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnNdetDigi", ::BmnNdetDigi::Class_Version(), "BmnNdetDigi.h", 22,
                  typeid(::BmnNdetDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnNdetDigi::Dictionary, isa_proxy, 4,
                  sizeof(::BmnNdetDigi) );
      instance.SetNew(&new_BmnNdetDigi);
      instance.SetNewArray(&newArray_BmnNdetDigi);
      instance.SetDelete(&delete_BmnNdetDigi);
      instance.SetDeleteArray(&deleteArray_BmnNdetDigi);
      instance.SetDestructor(&destruct_BmnNdetDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnNdetDigi*)
   {
      return GenerateInitInstanceLocal((::BmnNdetDigi*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnNdetDigi*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnNdetGeo(void *p = nullptr);
   static void *newArray_BmnNdetGeo(Long_t size, void *p);
   static void delete_BmnNdetGeo(void *p);
   static void deleteArray_BmnNdetGeo(void *p);
   static void destruct_BmnNdetGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnNdetGeo*)
   {
      ::BmnNdetGeo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnNdetGeo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnNdetGeo", ::BmnNdetGeo::Class_Version(), "BmnNdetGeo.h", 17,
                  typeid(::BmnNdetGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnNdetGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnNdetGeo) );
      instance.SetNew(&new_BmnNdetGeo);
      instance.SetNewArray(&newArray_BmnNdetGeo);
      instance.SetDelete(&delete_BmnNdetGeo);
      instance.SetDeleteArray(&deleteArray_BmnNdetGeo);
      instance.SetDestructor(&destruct_BmnNdetGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnNdetGeo*)
   {
      return GenerateInitInstanceLocal((::BmnNdetGeo*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnNdetGeo*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnNdetDigit(void *p = nullptr);
   static void *newArray_BmnNdetDigit(Long_t size, void *p);
   static void delete_BmnNdetDigit(void *p);
   static void deleteArray_BmnNdetDigit(void *p);
   static void destruct_BmnNdetDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnNdetDigit*)
   {
      ::BmnNdetDigit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnNdetDigit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnNdetDigit", ::BmnNdetDigit::Class_Version(), "BmnNdetDigit.h", 18,
                  typeid(::BmnNdetDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnNdetDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnNdetDigit) );
      instance.SetNew(&new_BmnNdetDigit);
      instance.SetNewArray(&newArray_BmnNdetDigit);
      instance.SetDelete(&delete_BmnNdetDigit);
      instance.SetDeleteArray(&deleteArray_BmnNdetDigit);
      instance.SetDestructor(&destruct_BmnNdetDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnNdetDigit*)
   {
      return GenerateInitInstanceLocal((::BmnNdetDigit*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnNdetDigit*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnNdetDigitPar(void *p = nullptr);
   static void *newArray_BmnNdetDigitPar(Long_t size, void *p);
   static void delete_BmnNdetDigitPar(void *p);
   static void deleteArray_BmnNdetDigitPar(void *p);
   static void destruct_BmnNdetDigitPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnNdetDigitPar*)
   {
      ::BmnNdetDigitPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnNdetDigitPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnNdetDigitPar", ::BmnNdetDigitPar::Class_Version(), "BmnNdetDigitPar.h", 19,
                  typeid(::BmnNdetDigitPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnNdetDigitPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnNdetDigitPar) );
      instance.SetNew(&new_BmnNdetDigitPar);
      instance.SetNewArray(&newArray_BmnNdetDigitPar);
      instance.SetDelete(&delete_BmnNdetDigitPar);
      instance.SetDeleteArray(&deleteArray_BmnNdetDigitPar);
      instance.SetDestructor(&destruct_BmnNdetDigitPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnNdetDigitPar*)
   {
      return GenerateInitInstanceLocal((::BmnNdetDigitPar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnNdetDigitPar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnNdetDigitScheme(void *p = nullptr);
   static void *newArray_BmnNdetDigitScheme(Long_t size, void *p);
   static void delete_BmnNdetDigitScheme(void *p);
   static void deleteArray_BmnNdetDigitScheme(void *p);
   static void destruct_BmnNdetDigitScheme(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnNdetDigitScheme*)
   {
      ::BmnNdetDigitScheme *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnNdetDigitScheme >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnNdetDigitScheme", ::BmnNdetDigitScheme::Class_Version(), "BmnNdetDigitScheme.h", 31,
                  typeid(::BmnNdetDigitScheme), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnNdetDigitScheme::Dictionary, isa_proxy, 4,
                  sizeof(::BmnNdetDigitScheme) );
      instance.SetNew(&new_BmnNdetDigitScheme);
      instance.SetNewArray(&newArray_BmnNdetDigitScheme);
      instance.SetDelete(&delete_BmnNdetDigitScheme);
      instance.SetDeleteArray(&deleteArray_BmnNdetDigitScheme);
      instance.SetDestructor(&destruct_BmnNdetDigitScheme);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnNdetDigitScheme*)
   {
      return GenerateInitInstanceLocal((::BmnNdetDigitScheme*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnNdetDigitScheme*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnNdetDigitizer(void *p = nullptr);
   static void *newArray_BmnNdetDigitizer(Long_t size, void *p);
   static void delete_BmnNdetDigitizer(void *p);
   static void deleteArray_BmnNdetDigitizer(void *p);
   static void destruct_BmnNdetDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnNdetDigitizer*)
   {
      ::BmnNdetDigitizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnNdetDigitizer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnNdetDigitizer", ::BmnNdetDigitizer::Class_Version(), "BmnNdetDigitizer.h", 23,
                  typeid(::BmnNdetDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnNdetDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnNdetDigitizer) );
      instance.SetNew(&new_BmnNdetDigitizer);
      instance.SetNewArray(&newArray_BmnNdetDigitizer);
      instance.SetDelete(&delete_BmnNdetDigitizer);
      instance.SetDeleteArray(&deleteArray_BmnNdetDigitizer);
      instance.SetDestructor(&destruct_BmnNdetDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnNdetDigitizer*)
   {
      return GenerateInitInstanceLocal((::BmnNdetDigitizer*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnNdetDigitizer*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnNdetGeoPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnNdetGeoPar::Class_Name()
{
   return "BmnNdetGeoPar";
}

//______________________________________________________________________________
const char *BmnNdetGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetGeoPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnNdetGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetGeoPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnNdetGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetGeoPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnNdetGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetGeoPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnNdet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnNdet::Class_Name()
{
   return "BmnNdet";
}

//______________________________________________________________________________
const char *BmnNdet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnNdet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnNdet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnNdet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnNdetPoint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnNdetPoint::Class_Name()
{
   return "BmnNdetPoint";
}

//______________________________________________________________________________
const char *BmnNdetPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetPoint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnNdetPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetPoint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnNdetPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetPoint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnNdetPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetPoint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnNdetContFact::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnNdetContFact::Class_Name()
{
   return "BmnNdetContFact";
}

//______________________________________________________________________________
const char *BmnNdetContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetContFact*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnNdetContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetContFact*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnNdetContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetContFact*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnNdetContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetContFact*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnNdetDigi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnNdetDigi::Class_Name()
{
   return "BmnNdetDigi";
}

//______________________________________________________________________________
const char *BmnNdetDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetDigi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnNdetDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetDigi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnNdetDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetDigi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnNdetDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetDigi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnNdetGeo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnNdetGeo::Class_Name()
{
   return "BmnNdetGeo";
}

//______________________________________________________________________________
const char *BmnNdetGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetGeo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnNdetGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetGeo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnNdetGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetGeo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnNdetGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetGeo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnNdetDigit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnNdetDigit::Class_Name()
{
   return "BmnNdetDigit";
}

//______________________________________________________________________________
const char *BmnNdetDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetDigit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnNdetDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetDigit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnNdetDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetDigit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnNdetDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetDigit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnNdetDigitPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnNdetDigitPar::Class_Name()
{
   return "BmnNdetDigitPar";
}

//______________________________________________________________________________
const char *BmnNdetDigitPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetDigitPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnNdetDigitPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetDigitPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnNdetDigitPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetDigitPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnNdetDigitPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetDigitPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnNdetDigitScheme::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnNdetDigitScheme::Class_Name()
{
   return "BmnNdetDigitScheme";
}

//______________________________________________________________________________
const char *BmnNdetDigitScheme::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetDigitScheme*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnNdetDigitScheme::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetDigitScheme*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnNdetDigitScheme::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetDigitScheme*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnNdetDigitScheme::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetDigitScheme*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnNdetDigitizer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnNdetDigitizer::Class_Name()
{
   return "BmnNdetDigitizer";
}

//______________________________________________________________________________
const char *BmnNdetDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetDigitizer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnNdetDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetDigitizer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnNdetDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetDigitizer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnNdetDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNdetDigitizer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnNdetGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnNdetGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnNdetGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnNdetGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnNdetGeoPar(void *p) {
      return  p ? new(p) ::BmnNdetGeoPar : new ::BmnNdetGeoPar;
   }
   static void *newArray_BmnNdetGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnNdetGeoPar[nElements] : new ::BmnNdetGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnNdetGeoPar(void *p) {
      delete ((::BmnNdetGeoPar*)p);
   }
   static void deleteArray_BmnNdetGeoPar(void *p) {
      delete [] ((::BmnNdetGeoPar*)p);
   }
   static void destruct_BmnNdetGeoPar(void *p) {
      typedef ::BmnNdetGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnNdetGeoPar

//______________________________________________________________________________
void BmnNdet::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnNdet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnNdet::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnNdet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnNdet(void *p) {
      return  p ? new(p) ::BmnNdet : new ::BmnNdet;
   }
   static void *newArray_BmnNdet(Long_t nElements, void *p) {
      return p ? new(p) ::BmnNdet[nElements] : new ::BmnNdet[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnNdet(void *p) {
      delete ((::BmnNdet*)p);
   }
   static void deleteArray_BmnNdet(void *p) {
      delete [] ((::BmnNdet*)p);
   }
   static void destruct_BmnNdet(void *p) {
      typedef ::BmnNdet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnNdet

//______________________________________________________________________________
void BmnNdetPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnNdetPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnNdetPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnNdetPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnNdetPoint(void *p) {
      return  p ? new(p) ::BmnNdetPoint : new ::BmnNdetPoint;
   }
   static void *newArray_BmnNdetPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnNdetPoint[nElements] : new ::BmnNdetPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnNdetPoint(void *p) {
      delete ((::BmnNdetPoint*)p);
   }
   static void deleteArray_BmnNdetPoint(void *p) {
      delete [] ((::BmnNdetPoint*)p);
   }
   static void destruct_BmnNdetPoint(void *p) {
      typedef ::BmnNdetPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnNdetPoint

//______________________________________________________________________________
void BmnNdetContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnNdetContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnNdetContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnNdetContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnNdetContFact(void *p) {
      return  p ? new(p) ::BmnNdetContFact : new ::BmnNdetContFact;
   }
   static void *newArray_BmnNdetContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnNdetContFact[nElements] : new ::BmnNdetContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnNdetContFact(void *p) {
      delete ((::BmnNdetContFact*)p);
   }
   static void deleteArray_BmnNdetContFact(void *p) {
      delete [] ((::BmnNdetContFact*)p);
   }
   static void destruct_BmnNdetContFact(void *p) {
      typedef ::BmnNdetContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnNdetContFact

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnNdetAddress(void *p) {
      return  p ? new(p) ::BmnNdetAddress : new ::BmnNdetAddress;
   }
   static void *newArray_BmnNdetAddress(Long_t nElements, void *p) {
      return p ? new(p) ::BmnNdetAddress[nElements] : new ::BmnNdetAddress[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnNdetAddress(void *p) {
      delete ((::BmnNdetAddress*)p);
   }
   static void deleteArray_BmnNdetAddress(void *p) {
      delete [] ((::BmnNdetAddress*)p);
   }
   static void destruct_BmnNdetAddress(void *p) {
      typedef ::BmnNdetAddress current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnNdetAddress

//______________________________________________________________________________
void BmnNdetDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnNdetDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnNdetDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnNdetDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnNdetDigi(void *p) {
      return  p ? new(p) ::BmnNdetDigi : new ::BmnNdetDigi;
   }
   static void *newArray_BmnNdetDigi(Long_t nElements, void *p) {
      return p ? new(p) ::BmnNdetDigi[nElements] : new ::BmnNdetDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnNdetDigi(void *p) {
      delete ((::BmnNdetDigi*)p);
   }
   static void deleteArray_BmnNdetDigi(void *p) {
      delete [] ((::BmnNdetDigi*)p);
   }
   static void destruct_BmnNdetDigi(void *p) {
      typedef ::BmnNdetDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnNdetDigi

//______________________________________________________________________________
void BmnNdetGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnNdetGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnNdetGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnNdetGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnNdetGeo(void *p) {
      return  p ? new(p) ::BmnNdetGeo : new ::BmnNdetGeo;
   }
   static void *newArray_BmnNdetGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnNdetGeo[nElements] : new ::BmnNdetGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnNdetGeo(void *p) {
      delete ((::BmnNdetGeo*)p);
   }
   static void deleteArray_BmnNdetGeo(void *p) {
      delete [] ((::BmnNdetGeo*)p);
   }
   static void destruct_BmnNdetGeo(void *p) {
      typedef ::BmnNdetGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnNdetGeo

//______________________________________________________________________________
void BmnNdetDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnNdetDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnNdetDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnNdetDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnNdetDigit(void *p) {
      return  p ? new(p) ::BmnNdetDigit : new ::BmnNdetDigit;
   }
   static void *newArray_BmnNdetDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnNdetDigit[nElements] : new ::BmnNdetDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnNdetDigit(void *p) {
      delete ((::BmnNdetDigit*)p);
   }
   static void deleteArray_BmnNdetDigit(void *p) {
      delete [] ((::BmnNdetDigit*)p);
   }
   static void destruct_BmnNdetDigit(void *p) {
      typedef ::BmnNdetDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnNdetDigit

//______________________________________________________________________________
void BmnNdetDigitPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnNdetDigitPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnNdetDigitPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnNdetDigitPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnNdetDigitPar(void *p) {
      return  p ? new(p) ::BmnNdetDigitPar : new ::BmnNdetDigitPar;
   }
   static void *newArray_BmnNdetDigitPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnNdetDigitPar[nElements] : new ::BmnNdetDigitPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnNdetDigitPar(void *p) {
      delete ((::BmnNdetDigitPar*)p);
   }
   static void deleteArray_BmnNdetDigitPar(void *p) {
      delete [] ((::BmnNdetDigitPar*)p);
   }
   static void destruct_BmnNdetDigitPar(void *p) {
      typedef ::BmnNdetDigitPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnNdetDigitPar

//______________________________________________________________________________
void BmnNdetDigitScheme::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnNdetDigitScheme.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnNdetDigitScheme::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnNdetDigitScheme::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnNdetDigitScheme(void *p) {
      return  p ? new(p) ::BmnNdetDigitScheme : new ::BmnNdetDigitScheme;
   }
   static void *newArray_BmnNdetDigitScheme(Long_t nElements, void *p) {
      return p ? new(p) ::BmnNdetDigitScheme[nElements] : new ::BmnNdetDigitScheme[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnNdetDigitScheme(void *p) {
      delete ((::BmnNdetDigitScheme*)p);
   }
   static void deleteArray_BmnNdetDigitScheme(void *p) {
      delete [] ((::BmnNdetDigitScheme*)p);
   }
   static void destruct_BmnNdetDigitScheme(void *p) {
      typedef ::BmnNdetDigitScheme current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnNdetDigitScheme

//______________________________________________________________________________
void BmnNdetDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnNdetDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnNdetDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnNdetDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnNdetDigitizer(void *p) {
      return  p ? new(p) ::BmnNdetDigitizer : new ::BmnNdetDigitizer;
   }
   static void *newArray_BmnNdetDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnNdetDigitizer[nElements] : new ::BmnNdetDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnNdetDigitizer(void *p) {
      delete ((::BmnNdetDigitizer*)p);
   }
   static void deleteArray_BmnNdetDigitizer(void *p) {
      delete [] ((::BmnNdetDigitizer*)p);
   }
   static void destruct_BmnNdetDigitizer(void *p) {
      typedef ::BmnNdetDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnNdetDigitizer

namespace {
  void TriggerDictionaryInitialization_G__NdetDict_Impl() {
    static const char* headers[] = {
"BmnNdet.h",
"BmnNdetPoint.h",
"BmnNdetContFact.h",
"BmnNdetAddress.h",
"BmnNdetDigi.h",
"BmnNdetGeo.h",
"BmnNdetGeoPar.h",
"BmnNdetDigit.h",
"BmnNdetDigitPar.h",
"BmnNdetDigitScheme.h",
"BmnNdetDigitizer.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/detectors/ndet",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/detectors/ndet/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__NdetDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$BmnNdetGeoPar.h")))  __attribute__((annotate("$clingAutoload$BmnNdet.h")))  BmnNdetGeoPar;
class __attribute__((annotate("$clingAutoload$BmnNdet.h")))  BmnNdet;
class __attribute__((annotate("$clingAutoload$BmnNdetPoint.h")))  BmnNdetPoint;
class __attribute__((annotate(R"ATTRDUMP(Factory for all HYP parameter containers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnNdetContFact.h")))  BmnNdetContFact;
class __attribute__((annotate("$clingAutoload$BmnNdetAddress.h")))  BmnNdetAddress;
class __attribute__((annotate("$clingAutoload$BmnNdetDigi.h")))  BmnNdetDigi;
class __attribute__((annotate(R"ATTRDUMP(Class for Hyp)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BmnNdetGeo.h")))  BmnNdetGeo;
class __attribute__((annotate("$clingAutoload$BmnNdetDigit.h")))  BmnNdetDigit;
class __attribute__((annotate("$clingAutoload$BmnNdetDigitPar.h")))  BmnNdetDigitPar;
class __attribute__((annotate("$clingAutoload$BmnNdetDigitScheme.h")))  BmnNdetDigitScheme;
class __attribute__((annotate("$clingAutoload$BmnNdetDigitizer.h")))  BmnNdetDigitizer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__NdetDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "BmnNdet.h"
#include "BmnNdetPoint.h"
#include "BmnNdetContFact.h"
#include "BmnNdetAddress.h"
#include "BmnNdetDigi.h"
#include "BmnNdetGeo.h"
#include "BmnNdetGeoPar.h"
#include "BmnNdetDigit.h"
#include "BmnNdetDigitPar.h"
#include "BmnNdetDigitScheme.h"
#include "BmnNdetDigitizer.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnNdet", payloadCode, "@",
"BmnNdetAddress", payloadCode, "@",
"BmnNdetContFact", payloadCode, "@",
"BmnNdetDigi", payloadCode, "@",
"BmnNdetDigit", payloadCode, "@",
"BmnNdetDigitPar", payloadCode, "@",
"BmnNdetDigitScheme", payloadCode, "@",
"BmnNdetDigitizer", payloadCode, "@",
"BmnNdetGeo", payloadCode, "@",
"BmnNdetGeoPar", payloadCode, "@",
"BmnNdetPoint", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__NdetDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__NdetDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__NdetDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__NdetDict() {
  TriggerDictionaryInitialization_G__NdetDict_Impl();
}
