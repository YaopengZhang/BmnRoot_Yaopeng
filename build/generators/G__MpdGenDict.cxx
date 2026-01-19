// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIgeneratorsdIG__MpdGenDict
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
#include "MpdMCEventHeader.h"
#include "MpdLAQGSMGenerator.h"
#include "MpdHypYPtGenerator.h"
#include "MpdRainGenerator.h"
#include "MpdPHSDGenerator.h"
#include "MpdUrqmdGenerator.h"
#include "MpdGetNumEvents.h"
#include "MpdHistoGenerator.h"
#include "Mpd3fdGenerator.h"
#include "MpdVHLLEGenerator.h"
#include "MpdDCMSMMGenerator.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MpdMCEventHeader(void *p = nullptr);
   static void *newArray_MpdMCEventHeader(Long_t size, void *p);
   static void delete_MpdMCEventHeader(void *p);
   static void deleteArray_MpdMCEventHeader(void *p);
   static void destruct_MpdMCEventHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdMCEventHeader*)
   {
      ::MpdMCEventHeader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdMCEventHeader >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdMCEventHeader", ::MpdMCEventHeader::Class_Version(), "MpdMCEventHeader.h", 12,
                  typeid(::MpdMCEventHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdMCEventHeader::Dictionary, isa_proxy, 4,
                  sizeof(::MpdMCEventHeader) );
      instance.SetNew(&new_MpdMCEventHeader);
      instance.SetNewArray(&newArray_MpdMCEventHeader);
      instance.SetDelete(&delete_MpdMCEventHeader);
      instance.SetDeleteArray(&deleteArray_MpdMCEventHeader);
      instance.SetDestructor(&destruct_MpdMCEventHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdMCEventHeader*)
   {
      return GenerateInitInstanceLocal((::MpdMCEventHeader*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdMCEventHeader*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdLAQGSMGenerator(void *p = nullptr);
   static void *newArray_MpdLAQGSMGenerator(Long_t size, void *p);
   static void delete_MpdLAQGSMGenerator(void *p);
   static void deleteArray_MpdLAQGSMGenerator(void *p);
   static void destruct_MpdLAQGSMGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdLAQGSMGenerator*)
   {
      ::MpdLAQGSMGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdLAQGSMGenerator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdLAQGSMGenerator", ::MpdLAQGSMGenerator::Class_Version(), "MpdLAQGSMGenerator.h", 30,
                  typeid(::MpdLAQGSMGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdLAQGSMGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::MpdLAQGSMGenerator) );
      instance.SetNew(&new_MpdLAQGSMGenerator);
      instance.SetNewArray(&newArray_MpdLAQGSMGenerator);
      instance.SetDelete(&delete_MpdLAQGSMGenerator);
      instance.SetDeleteArray(&deleteArray_MpdLAQGSMGenerator);
      instance.SetDestructor(&destruct_MpdLAQGSMGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdLAQGSMGenerator*)
   {
      return GenerateInitInstanceLocal((::MpdLAQGSMGenerator*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdLAQGSMGenerator*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdHypYPtGenerator(void *p = nullptr);
   static void *newArray_MpdHypYPtGenerator(Long_t size, void *p);
   static void delete_MpdHypYPtGenerator(void *p);
   static void deleteArray_MpdHypYPtGenerator(void *p);
   static void destruct_MpdHypYPtGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdHypYPtGenerator*)
   {
      ::MpdHypYPtGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdHypYPtGenerator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdHypYPtGenerator", ::MpdHypYPtGenerator::Class_Version(), "MpdHypYPtGenerator.h", 27,
                  typeid(::MpdHypYPtGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdHypYPtGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::MpdHypYPtGenerator) );
      instance.SetNew(&new_MpdHypYPtGenerator);
      instance.SetNewArray(&newArray_MpdHypYPtGenerator);
      instance.SetDelete(&delete_MpdHypYPtGenerator);
      instance.SetDeleteArray(&deleteArray_MpdHypYPtGenerator);
      instance.SetDestructor(&destruct_MpdHypYPtGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdHypYPtGenerator*)
   {
      return GenerateInitInstanceLocal((::MpdHypYPtGenerator*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdHypYPtGenerator*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdRainGenerator(void *p = nullptr);
   static void *newArray_MpdRainGenerator(Long_t size, void *p);
   static void delete_MpdRainGenerator(void *p);
   static void deleteArray_MpdRainGenerator(void *p);
   static void destruct_MpdRainGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdRainGenerator*)
   {
      ::MpdRainGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdRainGenerator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdRainGenerator", ::MpdRainGenerator::Class_Version(), "MpdRainGenerator.h", 11,
                  typeid(::MpdRainGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdRainGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::MpdRainGenerator) );
      instance.SetNew(&new_MpdRainGenerator);
      instance.SetNewArray(&newArray_MpdRainGenerator);
      instance.SetDelete(&delete_MpdRainGenerator);
      instance.SetDeleteArray(&deleteArray_MpdRainGenerator);
      instance.SetDestructor(&destruct_MpdRainGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdRainGenerator*)
   {
      return GenerateInitInstanceLocal((::MpdRainGenerator*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdRainGenerator*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdPHSDGenerator(void *p = nullptr);
   static void *newArray_MpdPHSDGenerator(Long_t size, void *p);
   static void delete_MpdPHSDGenerator(void *p);
   static void deleteArray_MpdPHSDGenerator(void *p);
   static void destruct_MpdPHSDGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdPHSDGenerator*)
   {
      ::MpdPHSDGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdPHSDGenerator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdPHSDGenerator", ::MpdPHSDGenerator::Class_Version(), "MpdPHSDGenerator.h", 20,
                  typeid(::MpdPHSDGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdPHSDGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::MpdPHSDGenerator) );
      instance.SetNew(&new_MpdPHSDGenerator);
      instance.SetNewArray(&newArray_MpdPHSDGenerator);
      instance.SetDelete(&delete_MpdPHSDGenerator);
      instance.SetDeleteArray(&deleteArray_MpdPHSDGenerator);
      instance.SetDestructor(&destruct_MpdPHSDGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdPHSDGenerator*)
   {
      return GenerateInitInstanceLocal((::MpdPHSDGenerator*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdPHSDGenerator*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdUrqmdGenerator(void *p = nullptr);
   static void *newArray_MpdUrqmdGenerator(Long_t size, void *p);
   static void delete_MpdUrqmdGenerator(void *p);
   static void deleteArray_MpdUrqmdGenerator(void *p);
   static void destruct_MpdUrqmdGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdUrqmdGenerator*)
   {
      ::MpdUrqmdGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdUrqmdGenerator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdUrqmdGenerator", ::MpdUrqmdGenerator::Class_Version(), "MpdUrqmdGenerator.h", 35,
                  typeid(::MpdUrqmdGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdUrqmdGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::MpdUrqmdGenerator) );
      instance.SetNew(&new_MpdUrqmdGenerator);
      instance.SetNewArray(&newArray_MpdUrqmdGenerator);
      instance.SetDelete(&delete_MpdUrqmdGenerator);
      instance.SetDeleteArray(&deleteArray_MpdUrqmdGenerator);
      instance.SetDestructor(&destruct_MpdUrqmdGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdUrqmdGenerator*)
   {
      return GenerateInitInstanceLocal((::MpdUrqmdGenerator*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdUrqmdGenerator*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_MpdLibZ(void *p);
   static void deleteArray_MpdLibZ(void *p);
   static void destruct_MpdLibZ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdLibZ*)
   {
      ::MpdLibZ *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdLibZ >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdLibZ", ::MpdLibZ::Class_Version(), "MpdGetNumEvents.h", 7,
                  typeid(::MpdLibZ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdLibZ::Dictionary, isa_proxy, 4,
                  sizeof(::MpdLibZ) );
      instance.SetDelete(&delete_MpdLibZ);
      instance.SetDeleteArray(&deleteArray_MpdLibZ);
      instance.SetDestructor(&destruct_MpdLibZ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdLibZ*)
   {
      return GenerateInitInstanceLocal((::MpdLibZ*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdLibZ*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdGetNumEvents*)
   {
      ::MpdGetNumEvents *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdGetNumEvents >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdGetNumEvents", ::MpdGetNumEvents::Class_Version(), "MpdGetNumEvents.h", 36,
                  typeid(::MpdGetNumEvents), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdGetNumEvents::Dictionary, isa_proxy, 4,
                  sizeof(::MpdGetNumEvents) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdGetNumEvents*)
   {
      return GenerateInitInstanceLocal((::MpdGetNumEvents*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdGetNumEvents*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdHistoGenerator(void *p = nullptr);
   static void *newArray_MpdHistoGenerator(Long_t size, void *p);
   static void delete_MpdHistoGenerator(void *p);
   static void deleteArray_MpdHistoGenerator(void *p);
   static void destruct_MpdHistoGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdHistoGenerator*)
   {
      ::MpdHistoGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdHistoGenerator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdHistoGenerator", ::MpdHistoGenerator::Class_Version(), "MpdHistoGenerator.h", 25,
                  typeid(::MpdHistoGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdHistoGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::MpdHistoGenerator) );
      instance.SetNew(&new_MpdHistoGenerator);
      instance.SetNewArray(&newArray_MpdHistoGenerator);
      instance.SetDelete(&delete_MpdHistoGenerator);
      instance.SetDeleteArray(&deleteArray_MpdHistoGenerator);
      instance.SetDestructor(&destruct_MpdHistoGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdHistoGenerator*)
   {
      return GenerateInitInstanceLocal((::MpdHistoGenerator*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdHistoGenerator*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Mpd3fdGenerator(void *p = nullptr);
   static void *newArray_Mpd3fdGenerator(Long_t size, void *p);
   static void delete_Mpd3fdGenerator(void *p);
   static void deleteArray_Mpd3fdGenerator(void *p);
   static void destruct_Mpd3fdGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Mpd3fdGenerator*)
   {
      ::Mpd3fdGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Mpd3fdGenerator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Mpd3fdGenerator", ::Mpd3fdGenerator::Class_Version(), "Mpd3fdGenerator.h", 21,
                  typeid(::Mpd3fdGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Mpd3fdGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::Mpd3fdGenerator) );
      instance.SetNew(&new_Mpd3fdGenerator);
      instance.SetNewArray(&newArray_Mpd3fdGenerator);
      instance.SetDelete(&delete_Mpd3fdGenerator);
      instance.SetDeleteArray(&deleteArray_Mpd3fdGenerator);
      instance.SetDestructor(&destruct_Mpd3fdGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Mpd3fdGenerator*)
   {
      return GenerateInitInstanceLocal((::Mpd3fdGenerator*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Mpd3fdGenerator*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdVHLLEGenerator(void *p = nullptr);
   static void *newArray_MpdVHLLEGenerator(Long_t size, void *p);
   static void delete_MpdVHLLEGenerator(void *p);
   static void deleteArray_MpdVHLLEGenerator(void *p);
   static void destruct_MpdVHLLEGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdVHLLEGenerator*)
   {
      ::MpdVHLLEGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdVHLLEGenerator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdVHLLEGenerator", ::MpdVHLLEGenerator::Class_Version(), "MpdVHLLEGenerator.h", 26,
                  typeid(::MpdVHLLEGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdVHLLEGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::MpdVHLLEGenerator) );
      instance.SetNew(&new_MpdVHLLEGenerator);
      instance.SetNewArray(&newArray_MpdVHLLEGenerator);
      instance.SetDelete(&delete_MpdVHLLEGenerator);
      instance.SetDeleteArray(&deleteArray_MpdVHLLEGenerator);
      instance.SetDestructor(&destruct_MpdVHLLEGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdVHLLEGenerator*)
   {
      return GenerateInitInstanceLocal((::MpdVHLLEGenerator*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdVHLLEGenerator*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdDCMSMMGenerator(void *p = nullptr);
   static void *newArray_MpdDCMSMMGenerator(Long_t size, void *p);
   static void delete_MpdDCMSMMGenerator(void *p);
   static void deleteArray_MpdDCMSMMGenerator(void *p);
   static void destruct_MpdDCMSMMGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdDCMSMMGenerator*)
   {
      ::MpdDCMSMMGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdDCMSMMGenerator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdDCMSMMGenerator", ::MpdDCMSMMGenerator::Class_Version(), "MpdDCMSMMGenerator.h", 27,
                  typeid(::MpdDCMSMMGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdDCMSMMGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::MpdDCMSMMGenerator) );
      instance.SetNew(&new_MpdDCMSMMGenerator);
      instance.SetNewArray(&newArray_MpdDCMSMMGenerator);
      instance.SetDelete(&delete_MpdDCMSMMGenerator);
      instance.SetDeleteArray(&deleteArray_MpdDCMSMMGenerator);
      instance.SetDestructor(&destruct_MpdDCMSMMGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdDCMSMMGenerator*)
   {
      return GenerateInitInstanceLocal((::MpdDCMSMMGenerator*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdDCMSMMGenerator*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MpdMCEventHeader::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdMCEventHeader::Class_Name()
{
   return "MpdMCEventHeader";
}

//______________________________________________________________________________
const char *MpdMCEventHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdMCEventHeader*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdMCEventHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdMCEventHeader*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdMCEventHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdMCEventHeader*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdMCEventHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdMCEventHeader*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdLAQGSMGenerator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdLAQGSMGenerator::Class_Name()
{
   return "MpdLAQGSMGenerator";
}

//______________________________________________________________________________
const char *MpdLAQGSMGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdLAQGSMGenerator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdLAQGSMGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdLAQGSMGenerator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdLAQGSMGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdLAQGSMGenerator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdLAQGSMGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdLAQGSMGenerator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdHypYPtGenerator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdHypYPtGenerator::Class_Name()
{
   return "MpdHypYPtGenerator";
}

//______________________________________________________________________________
const char *MpdHypYPtGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdHypYPtGenerator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdHypYPtGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdHypYPtGenerator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdHypYPtGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdHypYPtGenerator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdHypYPtGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdHypYPtGenerator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdRainGenerator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdRainGenerator::Class_Name()
{
   return "MpdRainGenerator";
}

//______________________________________________________________________________
const char *MpdRainGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdRainGenerator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdRainGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdRainGenerator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdRainGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdRainGenerator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdRainGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdRainGenerator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdPHSDGenerator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdPHSDGenerator::Class_Name()
{
   return "MpdPHSDGenerator";
}

//______________________________________________________________________________
const char *MpdPHSDGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdPHSDGenerator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdPHSDGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdPHSDGenerator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdPHSDGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdPHSDGenerator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdPHSDGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdPHSDGenerator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdUrqmdGenerator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdUrqmdGenerator::Class_Name()
{
   return "MpdUrqmdGenerator";
}

//______________________________________________________________________________
const char *MpdUrqmdGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdUrqmdGenerator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdUrqmdGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdUrqmdGenerator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdUrqmdGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdUrqmdGenerator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdUrqmdGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdUrqmdGenerator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdLibZ::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdLibZ::Class_Name()
{
   return "MpdLibZ";
}

//______________________________________________________________________________
const char *MpdLibZ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdLibZ*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdLibZ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdLibZ*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdLibZ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdLibZ*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdLibZ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdLibZ*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdGetNumEvents::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdGetNumEvents::Class_Name()
{
   return "MpdGetNumEvents";
}

//______________________________________________________________________________
const char *MpdGetNumEvents::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdGetNumEvents*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdGetNumEvents::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdGetNumEvents*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdGetNumEvents::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdGetNumEvents*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdGetNumEvents::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdGetNumEvents*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdHistoGenerator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdHistoGenerator::Class_Name()
{
   return "MpdHistoGenerator";
}

//______________________________________________________________________________
const char *MpdHistoGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdHistoGenerator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdHistoGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdHistoGenerator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdHistoGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdHistoGenerator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdHistoGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdHistoGenerator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Mpd3fdGenerator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Mpd3fdGenerator::Class_Name()
{
   return "Mpd3fdGenerator";
}

//______________________________________________________________________________
const char *Mpd3fdGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Mpd3fdGenerator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Mpd3fdGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Mpd3fdGenerator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Mpd3fdGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Mpd3fdGenerator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Mpd3fdGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Mpd3fdGenerator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdVHLLEGenerator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdVHLLEGenerator::Class_Name()
{
   return "MpdVHLLEGenerator";
}

//______________________________________________________________________________
const char *MpdVHLLEGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdVHLLEGenerator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdVHLLEGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdVHLLEGenerator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdVHLLEGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdVHLLEGenerator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdVHLLEGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdVHLLEGenerator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdDCMSMMGenerator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdDCMSMMGenerator::Class_Name()
{
   return "MpdDCMSMMGenerator";
}

//______________________________________________________________________________
const char *MpdDCMSMMGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdDCMSMMGenerator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdDCMSMMGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdDCMSMMGenerator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdDCMSMMGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdDCMSMMGenerator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdDCMSMMGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdDCMSMMGenerator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MpdMCEventHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdMCEventHeader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdMCEventHeader::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdMCEventHeader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdMCEventHeader(void *p) {
      return  p ? new(p) ::MpdMCEventHeader : new ::MpdMCEventHeader;
   }
   static void *newArray_MpdMCEventHeader(Long_t nElements, void *p) {
      return p ? new(p) ::MpdMCEventHeader[nElements] : new ::MpdMCEventHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdMCEventHeader(void *p) {
      delete ((::MpdMCEventHeader*)p);
   }
   static void deleteArray_MpdMCEventHeader(void *p) {
      delete [] ((::MpdMCEventHeader*)p);
   }
   static void destruct_MpdMCEventHeader(void *p) {
      typedef ::MpdMCEventHeader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MpdMCEventHeader

//______________________________________________________________________________
void MpdLAQGSMGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdLAQGSMGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdLAQGSMGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdLAQGSMGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdLAQGSMGenerator(void *p) {
      return  p ? new(p) ::MpdLAQGSMGenerator : new ::MpdLAQGSMGenerator;
   }
   static void *newArray_MpdLAQGSMGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::MpdLAQGSMGenerator[nElements] : new ::MpdLAQGSMGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdLAQGSMGenerator(void *p) {
      delete ((::MpdLAQGSMGenerator*)p);
   }
   static void deleteArray_MpdLAQGSMGenerator(void *p) {
      delete [] ((::MpdLAQGSMGenerator*)p);
   }
   static void destruct_MpdLAQGSMGenerator(void *p) {
      typedef ::MpdLAQGSMGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MpdLAQGSMGenerator

//______________________________________________________________________________
void MpdHypYPtGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdHypYPtGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdHypYPtGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdHypYPtGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdHypYPtGenerator(void *p) {
      return  p ? new(p) ::MpdHypYPtGenerator : new ::MpdHypYPtGenerator;
   }
   static void *newArray_MpdHypYPtGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::MpdHypYPtGenerator[nElements] : new ::MpdHypYPtGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdHypYPtGenerator(void *p) {
      delete ((::MpdHypYPtGenerator*)p);
   }
   static void deleteArray_MpdHypYPtGenerator(void *p) {
      delete [] ((::MpdHypYPtGenerator*)p);
   }
   static void destruct_MpdHypYPtGenerator(void *p) {
      typedef ::MpdHypYPtGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MpdHypYPtGenerator

//______________________________________________________________________________
void MpdRainGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdRainGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdRainGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdRainGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdRainGenerator(void *p) {
      return  p ? new(p) ::MpdRainGenerator : new ::MpdRainGenerator;
   }
   static void *newArray_MpdRainGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::MpdRainGenerator[nElements] : new ::MpdRainGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdRainGenerator(void *p) {
      delete ((::MpdRainGenerator*)p);
   }
   static void deleteArray_MpdRainGenerator(void *p) {
      delete [] ((::MpdRainGenerator*)p);
   }
   static void destruct_MpdRainGenerator(void *p) {
      typedef ::MpdRainGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MpdRainGenerator

//______________________________________________________________________________
void MpdPHSDGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdPHSDGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdPHSDGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdPHSDGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdPHSDGenerator(void *p) {
      return  p ? new(p) ::MpdPHSDGenerator : new ::MpdPHSDGenerator;
   }
   static void *newArray_MpdPHSDGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::MpdPHSDGenerator[nElements] : new ::MpdPHSDGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdPHSDGenerator(void *p) {
      delete ((::MpdPHSDGenerator*)p);
   }
   static void deleteArray_MpdPHSDGenerator(void *p) {
      delete [] ((::MpdPHSDGenerator*)p);
   }
   static void destruct_MpdPHSDGenerator(void *p) {
      typedef ::MpdPHSDGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MpdPHSDGenerator

//______________________________________________________________________________
void MpdUrqmdGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdUrqmdGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdUrqmdGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdUrqmdGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdUrqmdGenerator(void *p) {
      return  p ? new(p) ::MpdUrqmdGenerator : new ::MpdUrqmdGenerator;
   }
   static void *newArray_MpdUrqmdGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::MpdUrqmdGenerator[nElements] : new ::MpdUrqmdGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdUrqmdGenerator(void *p) {
      delete ((::MpdUrqmdGenerator*)p);
   }
   static void deleteArray_MpdUrqmdGenerator(void *p) {
      delete [] ((::MpdUrqmdGenerator*)p);
   }
   static void destruct_MpdUrqmdGenerator(void *p) {
      typedef ::MpdUrqmdGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MpdUrqmdGenerator

//______________________________________________________________________________
void MpdLibZ::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdLibZ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdLibZ::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdLibZ::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MpdLibZ(void *p) {
      delete ((::MpdLibZ*)p);
   }
   static void deleteArray_MpdLibZ(void *p) {
      delete [] ((::MpdLibZ*)p);
   }
   static void destruct_MpdLibZ(void *p) {
      typedef ::MpdLibZ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MpdLibZ

//______________________________________________________________________________
void MpdGetNumEvents::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdGetNumEvents.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdGetNumEvents::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdGetNumEvents::Class(),this);
   }
}

namespace ROOT {
} // end of namespace ROOT for class ::MpdGetNumEvents

//______________________________________________________________________________
void MpdHistoGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdHistoGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdHistoGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdHistoGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdHistoGenerator(void *p) {
      return  p ? new(p) ::MpdHistoGenerator : new ::MpdHistoGenerator;
   }
   static void *newArray_MpdHistoGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::MpdHistoGenerator[nElements] : new ::MpdHistoGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdHistoGenerator(void *p) {
      delete ((::MpdHistoGenerator*)p);
   }
   static void deleteArray_MpdHistoGenerator(void *p) {
      delete [] ((::MpdHistoGenerator*)p);
   }
   static void destruct_MpdHistoGenerator(void *p) {
      typedef ::MpdHistoGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MpdHistoGenerator

//______________________________________________________________________________
void Mpd3fdGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class Mpd3fdGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Mpd3fdGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(Mpd3fdGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Mpd3fdGenerator(void *p) {
      return  p ? new(p) ::Mpd3fdGenerator : new ::Mpd3fdGenerator;
   }
   static void *newArray_Mpd3fdGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::Mpd3fdGenerator[nElements] : new ::Mpd3fdGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_Mpd3fdGenerator(void *p) {
      delete ((::Mpd3fdGenerator*)p);
   }
   static void deleteArray_Mpd3fdGenerator(void *p) {
      delete [] ((::Mpd3fdGenerator*)p);
   }
   static void destruct_Mpd3fdGenerator(void *p) {
      typedef ::Mpd3fdGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Mpd3fdGenerator

//______________________________________________________________________________
void MpdVHLLEGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdVHLLEGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdVHLLEGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdVHLLEGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdVHLLEGenerator(void *p) {
      return  p ? new(p) ::MpdVHLLEGenerator : new ::MpdVHLLEGenerator;
   }
   static void *newArray_MpdVHLLEGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::MpdVHLLEGenerator[nElements] : new ::MpdVHLLEGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdVHLLEGenerator(void *p) {
      delete ((::MpdVHLLEGenerator*)p);
   }
   static void deleteArray_MpdVHLLEGenerator(void *p) {
      delete [] ((::MpdVHLLEGenerator*)p);
   }
   static void destruct_MpdVHLLEGenerator(void *p) {
      typedef ::MpdVHLLEGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MpdVHLLEGenerator

//______________________________________________________________________________
void MpdDCMSMMGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdDCMSMMGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdDCMSMMGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdDCMSMMGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdDCMSMMGenerator(void *p) {
      return  p ? new(p) ::MpdDCMSMMGenerator : new ::MpdDCMSMMGenerator;
   }
   static void *newArray_MpdDCMSMMGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::MpdDCMSMMGenerator[nElements] : new ::MpdDCMSMMGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdDCMSMMGenerator(void *p) {
      delete ((::MpdDCMSMMGenerator*)p);
   }
   static void deleteArray_MpdDCMSMMGenerator(void *p) {
      delete [] ((::MpdDCMSMMGenerator*)p);
   }
   static void destruct_MpdDCMSMMGenerator(void *p) {
      typedef ::MpdDCMSMMGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MpdDCMSMMGenerator

namespace ROOT {
   static TClass *maplETStringcOFairIonmUgR_Dictionary();
   static void maplETStringcOFairIonmUgR_TClassManip(TClass*);
   static void *new_maplETStringcOFairIonmUgR(void *p = nullptr);
   static void *newArray_maplETStringcOFairIonmUgR(Long_t size, void *p);
   static void delete_maplETStringcOFairIonmUgR(void *p);
   static void deleteArray_maplETStringcOFairIonmUgR(void *p);
   static void destruct_maplETStringcOFairIonmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,FairIon*>*)
   {
      map<TString,FairIon*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,FairIon*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,FairIon*>", -2, "map", 100,
                  typeid(map<TString,FairIon*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOFairIonmUgR_Dictionary, isa_proxy, 4,
                  sizeof(map<TString,FairIon*>) );
      instance.SetNew(&new_maplETStringcOFairIonmUgR);
      instance.SetNewArray(&newArray_maplETStringcOFairIonmUgR);
      instance.SetDelete(&delete_maplETStringcOFairIonmUgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOFairIonmUgR);
      instance.SetDestructor(&destruct_maplETStringcOFairIonmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,FairIon*> >()));

      ::ROOT::AddClassAlternate("map<TString,FairIon*>","std::map<TString, FairIon*, std::less<TString>, std::allocator<std::pair<TString const, FairIon*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,FairIon*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOFairIonmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,FairIon*>*)nullptr)->GetClass();
      maplETStringcOFairIonmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOFairIonmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOFairIonmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,FairIon*> : new map<TString,FairIon*>;
   }
   static void *newArray_maplETStringcOFairIonmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,FairIon*>[nElements] : new map<TString,FairIon*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOFairIonmUgR(void *p) {
      delete ((map<TString,FairIon*>*)p);
   }
   static void deleteArray_maplETStringcOFairIonmUgR(void *p) {
      delete [] ((map<TString,FairIon*>*)p);
   }
   static void destruct_maplETStringcOFairIonmUgR(void *p) {
      typedef map<TString,FairIon*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,FairIon*>

namespace {
  void TriggerDictionaryInitialization_G__MpdGenDict_Impl() {
    static const char* headers[] = {
"MpdMCEventHeader.h",
"MpdLAQGSMGenerator.h",
"MpdHypYPtGenerator.h",
"MpdRainGenerator.h",
"MpdPHSDGenerator.h",
"MpdUrqmdGenerator.h",
"MpdGetNumEvents.h",
"MpdHistoGenerator.h",
"Mpd3fdGenerator.h",
"MpdVHLLEGenerator.h",
"MpdDCMSMMGenerator.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/config",
"/data/yaopeng/bmnroot_Yaopeng/generators",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/generators/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__MpdGenDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$MpdMCEventHeader.h")))  MpdMCEventHeader;
class __attribute__((annotate("$clingAutoload$TString.h")))  __attribute__((annotate("$clingAutoload$MpdMCEventHeader.h")))  TString;
class __attribute__((annotate("$clingAutoload$MpdLAQGSMGenerator.h")))  FairIon;
namespace std{template <typename _Tp = void> struct __attribute__((annotate("$clingAutoload$bits/stl_function.h")))  __attribute__((annotate("$clingAutoload$string")))  less;
}
namespace std{template <typename _T1, typename _T2> struct __attribute__((annotate("$clingAutoload$bits/stl_iterator.h")))  __attribute__((annotate("$clingAutoload$string")))  pair;
}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
class __attribute__((annotate("$clingAutoload$MpdLAQGSMGenerator.h")))  MpdLAQGSMGenerator;
class __attribute__((annotate("$clingAutoload$MpdHypYPtGenerator.h")))  MpdHypYPtGenerator;
class __attribute__((annotate("$clingAutoload$MpdRainGenerator.h")))  MpdRainGenerator;
class __attribute__((annotate("$clingAutoload$MpdPHSDGenerator.h")))  MpdPHSDGenerator;
class __attribute__((annotate("$clingAutoload$MpdUrqmdGenerator.h")))  MpdUrqmdGenerator;
class __attribute__((annotate("$clingAutoload$MpdGetNumEvents.h")))  MpdLibZ;
class __attribute__((annotate("$clingAutoload$MpdGetNumEvents.h")))  MpdGetNumEvents;
class __attribute__((annotate("$clingAutoload$MpdHistoGenerator.h")))  MpdHistoGenerator;
class __attribute__((annotate("$clingAutoload$Mpd3fdGenerator.h")))  Mpd3fdGenerator;
class __attribute__((annotate("$clingAutoload$MpdVHLLEGenerator.h")))  MpdVHLLEGenerator;
class __attribute__((annotate("$clingAutoload$MpdDCMSMMGenerator.h")))  MpdDCMSMMGenerator;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__MpdGenDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MpdMCEventHeader.h"
#include "MpdLAQGSMGenerator.h"
#include "MpdHypYPtGenerator.h"
#include "MpdRainGenerator.h"
#include "MpdPHSDGenerator.h"
#include "MpdUrqmdGenerator.h"
#include "MpdGetNumEvents.h"
#include "MpdHistoGenerator.h"
#include "Mpd3fdGenerator.h"
#include "MpdVHLLEGenerator.h"
#include "MpdDCMSMMGenerator.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"Mpd3fdGenerator", payloadCode, "@",
"MpdDCMSMMGenerator", payloadCode, "@",
"MpdGetNumEvents", payloadCode, "@",
"MpdHistoGenerator", payloadCode, "@",
"MpdHypYPtGenerator", payloadCode, "@",
"MpdLAQGSMGenerator", payloadCode, "@",
"MpdLibZ", payloadCode, "@",
"MpdMCEventHeader", payloadCode, "@",
"MpdPHSDGenerator", payloadCode, "@",
"MpdRainGenerator", payloadCode, "@",
"MpdUrqmdGenerator", payloadCode, "@",
"MpdVHLLEGenerator", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__MpdGenDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__MpdGenDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__MpdGenDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__MpdGenDict() {
  TriggerDictionaryInitialization_G__MpdGenDict_Impl();
}
