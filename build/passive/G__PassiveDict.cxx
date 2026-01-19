// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIpassivedIG__PassiveDict
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
#include "FairCave.h"
#include "FairGeoCave.h"
#include "FairGeoMagnet.h"
#include "FairGeoPassivePar.h"
#include "FairGeoPipe.h"
#include "FairGeoTarget.h"
#include "FairMagnet.h"
#include "FairPassiveContFact.h"
#include "FairPipe.h"
#include "FairTarget.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_FairCave(void *p = nullptr);
   static void *newArray_FairCave(Long_t size, void *p);
   static void delete_FairCave(void *p);
   static void deleteArray_FairCave(void *p);
   static void destruct_FairCave(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FairCave*)
   {
      ::FairCave *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FairCave >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("FairCave", ::FairCave::Class_Version(), "FairCave.h", 13,
                  typeid(::FairCave), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FairCave::Dictionary, isa_proxy, 4,
                  sizeof(::FairCave) );
      instance.SetNew(&new_FairCave);
      instance.SetNewArray(&newArray_FairCave);
      instance.SetDelete(&delete_FairCave);
      instance.SetDeleteArray(&deleteArray_FairCave);
      instance.SetDestructor(&destruct_FairCave);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FairCave*)
   {
      return GenerateInitInstanceLocal((::FairCave*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::FairCave*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_FairGeoCave(void *p = nullptr);
   static void *newArray_FairGeoCave(Long_t size, void *p);
   static void delete_FairGeoCave(void *p);
   static void deleteArray_FairGeoCave(void *p);
   static void destruct_FairGeoCave(void *p);
   static void streamer_FairGeoCave(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FairGeoCave*)
   {
      ::FairGeoCave *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FairGeoCave >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("FairGeoCave", ::FairGeoCave::Class_Version(), "FairGeoCave.h", 17,
                  typeid(::FairGeoCave), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FairGeoCave::Dictionary, isa_proxy, 16,
                  sizeof(::FairGeoCave) );
      instance.SetNew(&new_FairGeoCave);
      instance.SetNewArray(&newArray_FairGeoCave);
      instance.SetDelete(&delete_FairGeoCave);
      instance.SetDeleteArray(&deleteArray_FairGeoCave);
      instance.SetDestructor(&destruct_FairGeoCave);
      instance.SetStreamerFunc(&streamer_FairGeoCave);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FairGeoCave*)
   {
      return GenerateInitInstanceLocal((::FairGeoCave*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::FairGeoCave*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_FairGeoMagnet(void *p = nullptr);
   static void *newArray_FairGeoMagnet(Long_t size, void *p);
   static void delete_FairGeoMagnet(void *p);
   static void deleteArray_FairGeoMagnet(void *p);
   static void destruct_FairGeoMagnet(void *p);
   static void streamer_FairGeoMagnet(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FairGeoMagnet*)
   {
      ::FairGeoMagnet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FairGeoMagnet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("FairGeoMagnet", ::FairGeoMagnet::Class_Version(), "FairGeoMagnet.h", 15,
                  typeid(::FairGeoMagnet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FairGeoMagnet::Dictionary, isa_proxy, 16,
                  sizeof(::FairGeoMagnet) );
      instance.SetNew(&new_FairGeoMagnet);
      instance.SetNewArray(&newArray_FairGeoMagnet);
      instance.SetDelete(&delete_FairGeoMagnet);
      instance.SetDeleteArray(&deleteArray_FairGeoMagnet);
      instance.SetDestructor(&destruct_FairGeoMagnet);
      instance.SetStreamerFunc(&streamer_FairGeoMagnet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FairGeoMagnet*)
   {
      return GenerateInitInstanceLocal((::FairGeoMagnet*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::FairGeoMagnet*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_FairGeoPassivePar(void *p = nullptr);
   static void *newArray_FairGeoPassivePar(Long_t size, void *p);
   static void delete_FairGeoPassivePar(void *p);
   static void deleteArray_FairGeoPassivePar(void *p);
   static void destruct_FairGeoPassivePar(void *p);
   static void streamer_FairGeoPassivePar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FairGeoPassivePar*)
   {
      ::FairGeoPassivePar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FairGeoPassivePar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("FairGeoPassivePar", ::FairGeoPassivePar::Class_Version(), "FairGeoPassivePar.h", 18,
                  typeid(::FairGeoPassivePar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FairGeoPassivePar::Dictionary, isa_proxy, 16,
                  sizeof(::FairGeoPassivePar) );
      instance.SetNew(&new_FairGeoPassivePar);
      instance.SetNewArray(&newArray_FairGeoPassivePar);
      instance.SetDelete(&delete_FairGeoPassivePar);
      instance.SetDeleteArray(&deleteArray_FairGeoPassivePar);
      instance.SetDestructor(&destruct_FairGeoPassivePar);
      instance.SetStreamerFunc(&streamer_FairGeoPassivePar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FairGeoPassivePar*)
   {
      return GenerateInitInstanceLocal((::FairGeoPassivePar*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::FairGeoPassivePar*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_FairGeoPipe(void *p = nullptr);
   static void *newArray_FairGeoPipe(Long_t size, void *p);
   static void delete_FairGeoPipe(void *p);
   static void deleteArray_FairGeoPipe(void *p);
   static void destruct_FairGeoPipe(void *p);
   static void streamer_FairGeoPipe(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FairGeoPipe*)
   {
      ::FairGeoPipe *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FairGeoPipe >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("FairGeoPipe", ::FairGeoPipe::Class_Version(), "FairGeoPipe.h", 17,
                  typeid(::FairGeoPipe), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FairGeoPipe::Dictionary, isa_proxy, 16,
                  sizeof(::FairGeoPipe) );
      instance.SetNew(&new_FairGeoPipe);
      instance.SetNewArray(&newArray_FairGeoPipe);
      instance.SetDelete(&delete_FairGeoPipe);
      instance.SetDeleteArray(&deleteArray_FairGeoPipe);
      instance.SetDestructor(&destruct_FairGeoPipe);
      instance.SetStreamerFunc(&streamer_FairGeoPipe);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FairGeoPipe*)
   {
      return GenerateInitInstanceLocal((::FairGeoPipe*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::FairGeoPipe*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_FairGeoTarget(void *p = nullptr);
   static void *newArray_FairGeoTarget(Long_t size, void *p);
   static void delete_FairGeoTarget(void *p);
   static void deleteArray_FairGeoTarget(void *p);
   static void destruct_FairGeoTarget(void *p);
   static void streamer_FairGeoTarget(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FairGeoTarget*)
   {
      ::FairGeoTarget *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FairGeoTarget >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("FairGeoTarget", ::FairGeoTarget::Class_Version(), "FairGeoTarget.h", 15,
                  typeid(::FairGeoTarget), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FairGeoTarget::Dictionary, isa_proxy, 16,
                  sizeof(::FairGeoTarget) );
      instance.SetNew(&new_FairGeoTarget);
      instance.SetNewArray(&newArray_FairGeoTarget);
      instance.SetDelete(&delete_FairGeoTarget);
      instance.SetDeleteArray(&deleteArray_FairGeoTarget);
      instance.SetDestructor(&destruct_FairGeoTarget);
      instance.SetStreamerFunc(&streamer_FairGeoTarget);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FairGeoTarget*)
   {
      return GenerateInitInstanceLocal((::FairGeoTarget*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::FairGeoTarget*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_FairMagnet(void *p = nullptr);
   static void *newArray_FairMagnet(Long_t size, void *p);
   static void delete_FairMagnet(void *p);
   static void deleteArray_FairMagnet(void *p);
   static void destruct_FairMagnet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FairMagnet*)
   {
      ::FairMagnet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FairMagnet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("FairMagnet", ::FairMagnet::Class_Version(), "FairMagnet.h", 17,
                  typeid(::FairMagnet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FairMagnet::Dictionary, isa_proxy, 4,
                  sizeof(::FairMagnet) );
      instance.SetNew(&new_FairMagnet);
      instance.SetNewArray(&newArray_FairMagnet);
      instance.SetDelete(&delete_FairMagnet);
      instance.SetDeleteArray(&deleteArray_FairMagnet);
      instance.SetDestructor(&destruct_FairMagnet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FairMagnet*)
   {
      return GenerateInitInstanceLocal((::FairMagnet*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::FairMagnet*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_FairPassiveContFact(void *p = nullptr);
   static void *newArray_FairPassiveContFact(Long_t size, void *p);
   static void delete_FairPassiveContFact(void *p);
   static void deleteArray_FairPassiveContFact(void *p);
   static void destruct_FairPassiveContFact(void *p);
   static void streamer_FairPassiveContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FairPassiveContFact*)
   {
      ::FairPassiveContFact *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FairPassiveContFact >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("FairPassiveContFact", ::FairPassiveContFact::Class_Version(), "FairPassiveContFact.h", 17,
                  typeid(::FairPassiveContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FairPassiveContFact::Dictionary, isa_proxy, 16,
                  sizeof(::FairPassiveContFact) );
      instance.SetNew(&new_FairPassiveContFact);
      instance.SetNewArray(&newArray_FairPassiveContFact);
      instance.SetDelete(&delete_FairPassiveContFact);
      instance.SetDeleteArray(&deleteArray_FairPassiveContFact);
      instance.SetDestructor(&destruct_FairPassiveContFact);
      instance.SetStreamerFunc(&streamer_FairPassiveContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FairPassiveContFact*)
   {
      return GenerateInitInstanceLocal((::FairPassiveContFact*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::FairPassiveContFact*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_FairPipe(void *p = nullptr);
   static void *newArray_FairPipe(Long_t size, void *p);
   static void delete_FairPipe(void *p);
   static void deleteArray_FairPipe(void *p);
   static void destruct_FairPipe(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FairPipe*)
   {
      ::FairPipe *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FairPipe >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("FairPipe", ::FairPipe::Class_Version(), "FairPipe.h", 15,
                  typeid(::FairPipe), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FairPipe::Dictionary, isa_proxy, 4,
                  sizeof(::FairPipe) );
      instance.SetNew(&new_FairPipe);
      instance.SetNewArray(&newArray_FairPipe);
      instance.SetDelete(&delete_FairPipe);
      instance.SetDeleteArray(&deleteArray_FairPipe);
      instance.SetDestructor(&destruct_FairPipe);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FairPipe*)
   {
      return GenerateInitInstanceLocal((::FairPipe*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::FairPipe*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_FairTarget(void *p = nullptr);
   static void *newArray_FairTarget(Long_t size, void *p);
   static void delete_FairTarget(void *p);
   static void deleteArray_FairTarget(void *p);
   static void destruct_FairTarget(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FairTarget*)
   {
      ::FairTarget *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FairTarget >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("FairTarget", ::FairTarget::Class_Version(), "FairTarget.h", 15,
                  typeid(::FairTarget), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FairTarget::Dictionary, isa_proxy, 4,
                  sizeof(::FairTarget) );
      instance.SetNew(&new_FairTarget);
      instance.SetNewArray(&newArray_FairTarget);
      instance.SetDelete(&delete_FairTarget);
      instance.SetDeleteArray(&deleteArray_FairTarget);
      instance.SetDestructor(&destruct_FairTarget);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FairTarget*)
   {
      return GenerateInitInstanceLocal((::FairTarget*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::FairTarget*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr FairCave::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FairCave::Class_Name()
{
   return "FairCave";
}

//______________________________________________________________________________
const char *FairCave::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairCave*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FairCave::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairCave*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FairCave::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairCave*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FairCave::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairCave*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr FairGeoCave::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FairGeoCave::Class_Name()
{
   return "FairGeoCave";
}

//______________________________________________________________________________
const char *FairGeoCave::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairGeoCave*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FairGeoCave::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairGeoCave*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FairGeoCave::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairGeoCave*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FairGeoCave::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairGeoCave*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr FairGeoMagnet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FairGeoMagnet::Class_Name()
{
   return "FairGeoMagnet";
}

//______________________________________________________________________________
const char *FairGeoMagnet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairGeoMagnet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FairGeoMagnet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairGeoMagnet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FairGeoMagnet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairGeoMagnet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FairGeoMagnet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairGeoMagnet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr FairGeoPassivePar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FairGeoPassivePar::Class_Name()
{
   return "FairGeoPassivePar";
}

//______________________________________________________________________________
const char *FairGeoPassivePar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairGeoPassivePar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FairGeoPassivePar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairGeoPassivePar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FairGeoPassivePar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairGeoPassivePar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FairGeoPassivePar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairGeoPassivePar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr FairGeoPipe::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FairGeoPipe::Class_Name()
{
   return "FairGeoPipe";
}

//______________________________________________________________________________
const char *FairGeoPipe::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairGeoPipe*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FairGeoPipe::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairGeoPipe*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FairGeoPipe::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairGeoPipe*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FairGeoPipe::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairGeoPipe*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr FairGeoTarget::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FairGeoTarget::Class_Name()
{
   return "FairGeoTarget";
}

//______________________________________________________________________________
const char *FairGeoTarget::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairGeoTarget*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FairGeoTarget::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairGeoTarget*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FairGeoTarget::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairGeoTarget*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FairGeoTarget::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairGeoTarget*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr FairMagnet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FairMagnet::Class_Name()
{
   return "FairMagnet";
}

//______________________________________________________________________________
const char *FairMagnet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairMagnet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FairMagnet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairMagnet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FairMagnet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairMagnet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FairMagnet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairMagnet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr FairPassiveContFact::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FairPassiveContFact::Class_Name()
{
   return "FairPassiveContFact";
}

//______________________________________________________________________________
const char *FairPassiveContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairPassiveContFact*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FairPassiveContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairPassiveContFact*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FairPassiveContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairPassiveContFact*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FairPassiveContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairPassiveContFact*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr FairPipe::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FairPipe::Class_Name()
{
   return "FairPipe";
}

//______________________________________________________________________________
const char *FairPipe::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairPipe*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FairPipe::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairPipe*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FairPipe::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairPipe*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FairPipe::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairPipe*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr FairTarget::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FairTarget::Class_Name()
{
   return "FairTarget";
}

//______________________________________________________________________________
const char *FairTarget::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairTarget*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FairTarget::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairTarget*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FairTarget::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairTarget*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FairTarget::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairTarget*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void FairCave::Streamer(TBuffer &R__b)
{
   // Stream an object of class FairCave.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(FairCave::Class(),this);
   } else {
      R__b.WriteClassBuffer(FairCave::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FairCave(void *p) {
      return  p ? new(p) ::FairCave : new ::FairCave;
   }
   static void *newArray_FairCave(Long_t nElements, void *p) {
      return p ? new(p) ::FairCave[nElements] : new ::FairCave[nElements];
   }
   // Wrapper around operator delete
   static void delete_FairCave(void *p) {
      delete ((::FairCave*)p);
   }
   static void deleteArray_FairCave(void *p) {
      delete [] ((::FairCave*)p);
   }
   static void destruct_FairCave(void *p) {
      typedef ::FairCave current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::FairCave

//______________________________________________________________________________
void FairGeoCave::Streamer(TBuffer &R__b)
{
   // Stream an object of class FairGeoCave.

   FairGeoSet::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FairGeoCave(void *p) {
      return  p ? new(p) ::FairGeoCave : new ::FairGeoCave;
   }
   static void *newArray_FairGeoCave(Long_t nElements, void *p) {
      return p ? new(p) ::FairGeoCave[nElements] : new ::FairGeoCave[nElements];
   }
   // Wrapper around operator delete
   static void delete_FairGeoCave(void *p) {
      delete ((::FairGeoCave*)p);
   }
   static void deleteArray_FairGeoCave(void *p) {
      delete [] ((::FairGeoCave*)p);
   }
   static void destruct_FairGeoCave(void *p) {
      typedef ::FairGeoCave current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_FairGeoCave(TBuffer &buf, void *obj) {
      ((::FairGeoCave*)obj)->::FairGeoCave::Streamer(buf);
   }
} // end of namespace ROOT for class ::FairGeoCave

//______________________________________________________________________________
void FairGeoMagnet::Streamer(TBuffer &R__b)
{
   // Stream an object of class FairGeoMagnet.

   FairGeoSet::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FairGeoMagnet(void *p) {
      return  p ? new(p) ::FairGeoMagnet : new ::FairGeoMagnet;
   }
   static void *newArray_FairGeoMagnet(Long_t nElements, void *p) {
      return p ? new(p) ::FairGeoMagnet[nElements] : new ::FairGeoMagnet[nElements];
   }
   // Wrapper around operator delete
   static void delete_FairGeoMagnet(void *p) {
      delete ((::FairGeoMagnet*)p);
   }
   static void deleteArray_FairGeoMagnet(void *p) {
      delete [] ((::FairGeoMagnet*)p);
   }
   static void destruct_FairGeoMagnet(void *p) {
      typedef ::FairGeoMagnet current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_FairGeoMagnet(TBuffer &buf, void *obj) {
      ((::FairGeoMagnet*)obj)->::FairGeoMagnet::Streamer(buf);
   }
} // end of namespace ROOT for class ::FairGeoMagnet

//______________________________________________________________________________
void FairGeoPassivePar::Streamer(TBuffer &R__b)
{
   // Stream an object of class FairGeoPassivePar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, FairGeoPassivePar::IsA());
   } else {
      R__c = R__b.WriteVersion(FairGeoPassivePar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FairGeoPassivePar(void *p) {
      return  p ? new(p) ::FairGeoPassivePar : new ::FairGeoPassivePar;
   }
   static void *newArray_FairGeoPassivePar(Long_t nElements, void *p) {
      return p ? new(p) ::FairGeoPassivePar[nElements] : new ::FairGeoPassivePar[nElements];
   }
   // Wrapper around operator delete
   static void delete_FairGeoPassivePar(void *p) {
      delete ((::FairGeoPassivePar*)p);
   }
   static void deleteArray_FairGeoPassivePar(void *p) {
      delete [] ((::FairGeoPassivePar*)p);
   }
   static void destruct_FairGeoPassivePar(void *p) {
      typedef ::FairGeoPassivePar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_FairGeoPassivePar(TBuffer &buf, void *obj) {
      ((::FairGeoPassivePar*)obj)->::FairGeoPassivePar::Streamer(buf);
   }
} // end of namespace ROOT for class ::FairGeoPassivePar

//______________________________________________________________________________
void FairGeoPipe::Streamer(TBuffer &R__b)
{
   // Stream an object of class FairGeoPipe.

   FairGeoSet::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FairGeoPipe(void *p) {
      return  p ? new(p) ::FairGeoPipe : new ::FairGeoPipe;
   }
   static void *newArray_FairGeoPipe(Long_t nElements, void *p) {
      return p ? new(p) ::FairGeoPipe[nElements] : new ::FairGeoPipe[nElements];
   }
   // Wrapper around operator delete
   static void delete_FairGeoPipe(void *p) {
      delete ((::FairGeoPipe*)p);
   }
   static void deleteArray_FairGeoPipe(void *p) {
      delete [] ((::FairGeoPipe*)p);
   }
   static void destruct_FairGeoPipe(void *p) {
      typedef ::FairGeoPipe current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_FairGeoPipe(TBuffer &buf, void *obj) {
      ((::FairGeoPipe*)obj)->::FairGeoPipe::Streamer(buf);
   }
} // end of namespace ROOT for class ::FairGeoPipe

//______________________________________________________________________________
void FairGeoTarget::Streamer(TBuffer &R__b)
{
   // Stream an object of class FairGeoTarget.

   FairGeoSet::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FairGeoTarget(void *p) {
      return  p ? new(p) ::FairGeoTarget : new ::FairGeoTarget;
   }
   static void *newArray_FairGeoTarget(Long_t nElements, void *p) {
      return p ? new(p) ::FairGeoTarget[nElements] : new ::FairGeoTarget[nElements];
   }
   // Wrapper around operator delete
   static void delete_FairGeoTarget(void *p) {
      delete ((::FairGeoTarget*)p);
   }
   static void deleteArray_FairGeoTarget(void *p) {
      delete [] ((::FairGeoTarget*)p);
   }
   static void destruct_FairGeoTarget(void *p) {
      typedef ::FairGeoTarget current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_FairGeoTarget(TBuffer &buf, void *obj) {
      ((::FairGeoTarget*)obj)->::FairGeoTarget::Streamer(buf);
   }
} // end of namespace ROOT for class ::FairGeoTarget

//______________________________________________________________________________
void FairMagnet::Streamer(TBuffer &R__b)
{
   // Stream an object of class FairMagnet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(FairMagnet::Class(),this);
   } else {
      R__b.WriteClassBuffer(FairMagnet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FairMagnet(void *p) {
      return  p ? new(p) ::FairMagnet : new ::FairMagnet;
   }
   static void *newArray_FairMagnet(Long_t nElements, void *p) {
      return p ? new(p) ::FairMagnet[nElements] : new ::FairMagnet[nElements];
   }
   // Wrapper around operator delete
   static void delete_FairMagnet(void *p) {
      delete ((::FairMagnet*)p);
   }
   static void deleteArray_FairMagnet(void *p) {
      delete [] ((::FairMagnet*)p);
   }
   static void destruct_FairMagnet(void *p) {
      typedef ::FairMagnet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::FairMagnet

//______________________________________________________________________________
void FairPassiveContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class FairPassiveContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FairPassiveContFact(void *p) {
      return  p ? new(p) ::FairPassiveContFact : new ::FairPassiveContFact;
   }
   static void *newArray_FairPassiveContFact(Long_t nElements, void *p) {
      return p ? new(p) ::FairPassiveContFact[nElements] : new ::FairPassiveContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_FairPassiveContFact(void *p) {
      delete ((::FairPassiveContFact*)p);
   }
   static void deleteArray_FairPassiveContFact(void *p) {
      delete [] ((::FairPassiveContFact*)p);
   }
   static void destruct_FairPassiveContFact(void *p) {
      typedef ::FairPassiveContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_FairPassiveContFact(TBuffer &buf, void *obj) {
      ((::FairPassiveContFact*)obj)->::FairPassiveContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::FairPassiveContFact

//______________________________________________________________________________
void FairPipe::Streamer(TBuffer &R__b)
{
   // Stream an object of class FairPipe.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(FairPipe::Class(),this);
   } else {
      R__b.WriteClassBuffer(FairPipe::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FairPipe(void *p) {
      return  p ? new(p) ::FairPipe : new ::FairPipe;
   }
   static void *newArray_FairPipe(Long_t nElements, void *p) {
      return p ? new(p) ::FairPipe[nElements] : new ::FairPipe[nElements];
   }
   // Wrapper around operator delete
   static void delete_FairPipe(void *p) {
      delete ((::FairPipe*)p);
   }
   static void deleteArray_FairPipe(void *p) {
      delete [] ((::FairPipe*)p);
   }
   static void destruct_FairPipe(void *p) {
      typedef ::FairPipe current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::FairPipe

//______________________________________________________________________________
void FairTarget::Streamer(TBuffer &R__b)
{
   // Stream an object of class FairTarget.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(FairTarget::Class(),this);
   } else {
      R__b.WriteClassBuffer(FairTarget::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FairTarget(void *p) {
      return  p ? new(p) ::FairTarget : new ::FairTarget;
   }
   static void *newArray_FairTarget(Long_t nElements, void *p) {
      return p ? new(p) ::FairTarget[nElements] : new ::FairTarget[nElements];
   }
   // Wrapper around operator delete
   static void delete_FairTarget(void *p) {
      delete ((::FairTarget*)p);
   }
   static void deleteArray_FairTarget(void *p) {
      delete [] ((::FairTarget*)p);
   }
   static void destruct_FairTarget(void *p) {
      typedef ::FairTarget current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::FairTarget

namespace {
  void TriggerDictionaryInitialization_G__PassiveDict_Impl() {
    static const char* headers[] = {
"FairCave.h",
"FairGeoCave.h",
"FairGeoMagnet.h",
"FairGeoPassivePar.h",
"FairGeoPipe.h",
"FairGeoTarget.h",
"FairMagnet.h",
"FairPassiveContFact.h",
"FairPipe.h",
"FairTarget.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/passive",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/passive/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__PassiveDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$FairCave.h")))  FairCave;
class __attribute__((annotate(R"ATTRDUMP(Class for the geometry of CAVE)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Class for the geometry of CAVE)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Class for the geometry of CAVE)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Class for the geometry of CAVE)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$FairGeoCave.h")))  FairGeoCave;
class __attribute__((annotate(R"ATTRDUMP(Class for the geometry of Magnet)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$FairGeoMagnet.h")))  FairGeoMagnet;
class __attribute__((annotate("$clingAutoload$FairGeoPassivePar.h")))  FairGeoPassivePar;
class __attribute__((annotate(R"ATTRDUMP(Class for geometry of beam pipe)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$FairGeoPipe.h")))  FairGeoPipe;
class __attribute__((annotate(R"ATTRDUMP(Class for geometry of Target)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$FairGeoTarget.h")))  FairGeoTarget;
class __attribute__((annotate("$clingAutoload$FairMagnet.h")))  FairMagnet;
class __attribute__((annotate(R"ATTRDUMP(Factory for all Passive parameter containers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$FairPassiveContFact.h")))  FairPassiveContFact;
class __attribute__((annotate(R"ATTRDUMP(PNDPIPE)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$FairPipe.h")))  FairPipe;
class __attribute__((annotate("$clingAutoload$FairTarget.h")))  FairTarget;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__PassiveDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "FairCave.h"
#include "FairGeoCave.h"
#include "FairGeoMagnet.h"
#include "FairGeoPassivePar.h"
#include "FairGeoPipe.h"
#include "FairGeoTarget.h"
#include "FairMagnet.h"
#include "FairPassiveContFact.h"
#include "FairPipe.h"
#include "FairTarget.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"FairCave", payloadCode, "@",
"FairGeoCave", payloadCode, "@",
"FairGeoMagnet", payloadCode, "@",
"FairGeoPassivePar", payloadCode, "@",
"FairGeoPipe", payloadCode, "@",
"FairGeoTarget", payloadCode, "@",
"FairMagnet", payloadCode, "@",
"FairPassiveContFact", payloadCode, "@",
"FairPipe", payloadCode, "@",
"FairTarget", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__PassiveDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__PassiveDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__PassiveDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__PassiveDict() {
  TriggerDictionaryInitialization_G__PassiveDict_Impl();
}
