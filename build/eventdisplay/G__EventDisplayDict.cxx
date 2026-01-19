// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdatadIyaopengdIbmnroot_YaopengdIbuilddIeventdisplaydIG__EventDisplayDict
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
#include "MpdEventManager.h"
#include "MpdMCTracks.h"
#include "MpdMCStack.h"
#include "MpdEventManagerEditor.h"
#include "MpdMCTracksEditor.h"
#include "MpdBoxSet.h"
#include "MpdBoxSetDraw.h"
#include "MpdBoxSetEditor.h"
#include "MpdPointSetDraw.h"
#include "MpdMCPointDraw.h"
#include "MpdHitDraw.h"
#include "MpdXMLNode.h"
#include "MpdHitPointSetDraw.h"
#include "MpdWebScreenshots.h"
#include "BmnTrackDrawH.h"
#include "BmnTrackDrawP.h"
#include "BmnGlobalTrackDraw.h"
#include "BmnCaloTowerDraw.h"
#include "FairMCModuleDraw.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_MpdXMLAttrib(void *p = nullptr);
   static void *newArray_MpdXMLAttrib(Long_t size, void *p);
   static void delete_MpdXMLAttrib(void *p);
   static void deleteArray_MpdXMLAttrib(void *p);
   static void destruct_MpdXMLAttrib(void *p);
   static void streamer_MpdXMLAttrib(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdXMLAttrib*)
   {
      ::MpdXMLAttrib *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdXMLAttrib >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdXMLAttrib", ::MpdXMLAttrib::Class_Version(), "MpdXMLNode.h", 20,
                  typeid(::MpdXMLAttrib), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdXMLAttrib::Dictionary, isa_proxy, 16,
                  sizeof(::MpdXMLAttrib) );
      instance.SetNew(&new_MpdXMLAttrib);
      instance.SetNewArray(&newArray_MpdXMLAttrib);
      instance.SetDelete(&delete_MpdXMLAttrib);
      instance.SetDeleteArray(&deleteArray_MpdXMLAttrib);
      instance.SetDestructor(&destruct_MpdXMLAttrib);
      instance.SetStreamerFunc(&streamer_MpdXMLAttrib);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdXMLAttrib*)
   {
      return GenerateInitInstanceLocal((::MpdXMLAttrib*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdXMLAttrib*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdXMLNode(void *p = nullptr);
   static void *newArray_MpdXMLNode(Long_t size, void *p);
   static void delete_MpdXMLNode(void *p);
   static void deleteArray_MpdXMLNode(void *p);
   static void destruct_MpdXMLNode(void *p);
   static void streamer_MpdXMLNode(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdXMLNode*)
   {
      ::MpdXMLNode *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdXMLNode >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdXMLNode", ::MpdXMLNode::Class_Version(), "MpdXMLNode.h", 50,
                  typeid(::MpdXMLNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdXMLNode::Dictionary, isa_proxy, 16,
                  sizeof(::MpdXMLNode) );
      instance.SetNew(&new_MpdXMLNode);
      instance.SetNewArray(&newArray_MpdXMLNode);
      instance.SetDelete(&delete_MpdXMLNode);
      instance.SetDeleteArray(&deleteArray_MpdXMLNode);
      instance.SetDestructor(&destruct_MpdXMLNode);
      instance.SetStreamerFunc(&streamer_MpdXMLNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdXMLNode*)
   {
      return GenerateInitInstanceLocal((::MpdXMLNode*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdXMLNode*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdXMLFile(void *p = nullptr);
   static void *newArray_MpdXMLFile(Long_t size, void *p);
   static void delete_MpdXMLFile(void *p);
   static void deleteArray_MpdXMLFile(void *p);
   static void destruct_MpdXMLFile(void *p);
   static void streamer_MpdXMLFile(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdXMLFile*)
   {
      ::MpdXMLFile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdXMLFile >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdXMLFile", ::MpdXMLFile::Class_Version(), "MpdXMLNode.h", 145,
                  typeid(::MpdXMLFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdXMLFile::Dictionary, isa_proxy, 16,
                  sizeof(::MpdXMLFile) );
      instance.SetNew(&new_MpdXMLFile);
      instance.SetNewArray(&newArray_MpdXMLFile);
      instance.SetDelete(&delete_MpdXMLFile);
      instance.SetDeleteArray(&deleteArray_MpdXMLFile);
      instance.SetDestructor(&destruct_MpdXMLFile);
      instance.SetStreamerFunc(&streamer_MpdXMLFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdXMLFile*)
   {
      return GenerateInitInstanceLocal((::MpdXMLFile*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdXMLFile*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdEventManager(void *p = nullptr);
   static void *newArray_MpdEventManager(Long_t size, void *p);
   static void delete_MpdEventManager(void *p);
   static void deleteArray_MpdEventManager(void *p);
   static void destruct_MpdEventManager(void *p);
   static void streamer_MpdEventManager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdEventManager*)
   {
      ::MpdEventManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdEventManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdEventManager", ::MpdEventManager::Class_Version(), "MpdEventManager.h", 26,
                  typeid(::MpdEventManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdEventManager::Dictionary, isa_proxy, 16,
                  sizeof(::MpdEventManager) );
      instance.SetNew(&new_MpdEventManager);
      instance.SetNewArray(&newArray_MpdEventManager);
      instance.SetDelete(&delete_MpdEventManager);
      instance.SetDeleteArray(&deleteArray_MpdEventManager);
      instance.SetDestructor(&destruct_MpdEventManager);
      instance.SetStreamerFunc(&streamer_MpdEventManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdEventManager*)
   {
      return GenerateInitInstanceLocal((::MpdEventManager*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdEventManager*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdMCTracks(void *p = nullptr);
   static void *newArray_MpdMCTracks(Long_t size, void *p);
   static void delete_MpdMCTracks(void *p);
   static void deleteArray_MpdMCTracks(void *p);
   static void destruct_MpdMCTracks(void *p);
   static void streamer_MpdMCTracks(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdMCTracks*)
   {
      ::MpdMCTracks *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdMCTracks >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdMCTracks", ::MpdMCTracks::Class_Version(), "MpdMCTracks.h", 25,
                  typeid(::MpdMCTracks), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdMCTracks::Dictionary, isa_proxy, 16,
                  sizeof(::MpdMCTracks) );
      instance.SetNew(&new_MpdMCTracks);
      instance.SetNewArray(&newArray_MpdMCTracks);
      instance.SetDelete(&delete_MpdMCTracks);
      instance.SetDeleteArray(&deleteArray_MpdMCTracks);
      instance.SetDestructor(&destruct_MpdMCTracks);
      instance.SetStreamerFunc(&streamer_MpdMCTracks);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdMCTracks*)
   {
      return GenerateInitInstanceLocal((::MpdMCTracks*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdMCTracks*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdMCStack(void *p = nullptr);
   static void *newArray_MpdMCStack(Long_t size, void *p);
   static void delete_MpdMCStack(void *p);
   static void deleteArray_MpdMCStack(void *p);
   static void destruct_MpdMCStack(void *p);
   static void streamer_MpdMCStack(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdMCStack*)
   {
      ::MpdMCStack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdMCStack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdMCStack", ::MpdMCStack::Class_Version(), "MpdMCStack.h", 21,
                  typeid(::MpdMCStack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdMCStack::Dictionary, isa_proxy, 16,
                  sizeof(::MpdMCStack) );
      instance.SetNew(&new_MpdMCStack);
      instance.SetNewArray(&newArray_MpdMCStack);
      instance.SetDelete(&delete_MpdMCStack);
      instance.SetDeleteArray(&deleteArray_MpdMCStack);
      instance.SetDestructor(&destruct_MpdMCStack);
      instance.SetStreamerFunc(&streamer_MpdMCStack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdMCStack*)
   {
      return GenerateInitInstanceLocal((::MpdMCStack*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdMCStack*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdEventManagerEditor(void *p = nullptr);
   static void *newArray_MpdEventManagerEditor(Long_t size, void *p);
   static void delete_MpdEventManagerEditor(void *p);
   static void deleteArray_MpdEventManagerEditor(void *p);
   static void destruct_MpdEventManagerEditor(void *p);
   static void streamer_MpdEventManagerEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdEventManagerEditor*)
   {
      ::MpdEventManagerEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdEventManagerEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdEventManagerEditor", ::MpdEventManagerEditor::Class_Version(), "MpdEventManagerEditor.h", 29,
                  typeid(::MpdEventManagerEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdEventManagerEditor::Dictionary, isa_proxy, 16,
                  sizeof(::MpdEventManagerEditor) );
      instance.SetNew(&new_MpdEventManagerEditor);
      instance.SetNewArray(&newArray_MpdEventManagerEditor);
      instance.SetDelete(&delete_MpdEventManagerEditor);
      instance.SetDeleteArray(&deleteArray_MpdEventManagerEditor);
      instance.SetDestructor(&destruct_MpdEventManagerEditor);
      instance.SetStreamerFunc(&streamer_MpdEventManagerEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdEventManagerEditor*)
   {
      return GenerateInitInstanceLocal((::MpdEventManagerEditor*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdEventManagerEditor*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdMCTracksEditor(void *p = nullptr);
   static void *newArray_MpdMCTracksEditor(Long_t size, void *p);
   static void delete_MpdMCTracksEditor(void *p);
   static void deleteArray_MpdMCTracksEditor(void *p);
   static void destruct_MpdMCTracksEditor(void *p);
   static void streamer_MpdMCTracksEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdMCTracksEditor*)
   {
      ::MpdMCTracksEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdMCTracksEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdMCTracksEditor", ::MpdMCTracksEditor::Class_Version(), "MpdMCTracksEditor.h", 10,
                  typeid(::MpdMCTracksEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdMCTracksEditor::Dictionary, isa_proxy, 16,
                  sizeof(::MpdMCTracksEditor) );
      instance.SetNew(&new_MpdMCTracksEditor);
      instance.SetNewArray(&newArray_MpdMCTracksEditor);
      instance.SetDelete(&delete_MpdMCTracksEditor);
      instance.SetDeleteArray(&deleteArray_MpdMCTracksEditor);
      instance.SetDestructor(&destruct_MpdMCTracksEditor);
      instance.SetStreamerFunc(&streamer_MpdMCTracksEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdMCTracksEditor*)
   {
      return GenerateInitInstanceLocal((::MpdMCTracksEditor*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdMCTracksEditor*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_MpdBoxSetDraw(void *p);
   static void deleteArray_MpdBoxSetDraw(void *p);
   static void destruct_MpdBoxSetDraw(void *p);
   static void streamer_MpdBoxSetDraw(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdBoxSetDraw*)
   {
      ::MpdBoxSetDraw *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdBoxSetDraw >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdBoxSetDraw", ::MpdBoxSetDraw::Class_Version(), "MpdBoxSetDraw.h", 31,
                  typeid(::MpdBoxSetDraw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdBoxSetDraw::Dictionary, isa_proxy, 16,
                  sizeof(::MpdBoxSetDraw) );
      instance.SetDelete(&delete_MpdBoxSetDraw);
      instance.SetDeleteArray(&deleteArray_MpdBoxSetDraw);
      instance.SetDestructor(&destruct_MpdBoxSetDraw);
      instance.SetStreamerFunc(&streamer_MpdBoxSetDraw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdBoxSetDraw*)
   {
      return GenerateInitInstanceLocal((::MpdBoxSetDraw*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdBoxSetDraw*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_MpdBoxSet(void *p);
   static void deleteArray_MpdBoxSet(void *p);
   static void destruct_MpdBoxSet(void *p);
   static void streamer_MpdBoxSet(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdBoxSet*)
   {
      ::MpdBoxSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdBoxSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdBoxSet", ::MpdBoxSet::Class_Version(), "MpdBoxSet.h", 24,
                  typeid(::MpdBoxSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdBoxSet::Dictionary, isa_proxy, 16,
                  sizeof(::MpdBoxSet) );
      instance.SetDelete(&delete_MpdBoxSet);
      instance.SetDeleteArray(&deleteArray_MpdBoxSet);
      instance.SetDestructor(&destruct_MpdBoxSet);
      instance.SetStreamerFunc(&streamer_MpdBoxSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdBoxSet*)
   {
      return GenerateInitInstanceLocal((::MpdBoxSet*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdBoxSet*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdBoxSetEditor(void *p = nullptr);
   static void *newArray_MpdBoxSetEditor(Long_t size, void *p);
   static void delete_MpdBoxSetEditor(void *p);
   static void deleteArray_MpdBoxSetEditor(void *p);
   static void destruct_MpdBoxSetEditor(void *p);
   static void streamer_MpdBoxSetEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdBoxSetEditor*)
   {
      ::MpdBoxSetEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdBoxSetEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdBoxSetEditor", ::MpdBoxSetEditor::Class_Version(), "MpdBoxSetEditor.h", 29,
                  typeid(::MpdBoxSetEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdBoxSetEditor::Dictionary, isa_proxy, 16,
                  sizeof(::MpdBoxSetEditor) );
      instance.SetNew(&new_MpdBoxSetEditor);
      instance.SetNewArray(&newArray_MpdBoxSetEditor);
      instance.SetDelete(&delete_MpdBoxSetEditor);
      instance.SetDeleteArray(&deleteArray_MpdBoxSetEditor);
      instance.SetDestructor(&destruct_MpdBoxSetEditor);
      instance.SetStreamerFunc(&streamer_MpdBoxSetEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdBoxSetEditor*)
   {
      return GenerateInitInstanceLocal((::MpdBoxSetEditor*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdBoxSetEditor*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_MpdPointSetDraw(void *p);
   static void deleteArray_MpdPointSetDraw(void *p);
   static void destruct_MpdPointSetDraw(void *p);
   static void streamer_MpdPointSetDraw(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdPointSetDraw*)
   {
      ::MpdPointSetDraw *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdPointSetDraw >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdPointSetDraw", ::MpdPointSetDraw::Class_Version(), "MpdPointSetDraw.h", 25,
                  typeid(::MpdPointSetDraw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdPointSetDraw::Dictionary, isa_proxy, 16,
                  sizeof(::MpdPointSetDraw) );
      instance.SetDelete(&delete_MpdPointSetDraw);
      instance.SetDeleteArray(&deleteArray_MpdPointSetDraw);
      instance.SetDestructor(&destruct_MpdPointSetDraw);
      instance.SetStreamerFunc(&streamer_MpdPointSetDraw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdPointSetDraw*)
   {
      return GenerateInitInstanceLocal((::MpdPointSetDraw*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdPointSetDraw*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdMCPointDraw(void *p = nullptr);
   static void *newArray_MpdMCPointDraw(Long_t size, void *p);
   static void delete_MpdMCPointDraw(void *p);
   static void deleteArray_MpdMCPointDraw(void *p);
   static void destruct_MpdMCPointDraw(void *p);
   static void streamer_MpdMCPointDraw(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdMCPointDraw*)
   {
      ::MpdMCPointDraw *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdMCPointDraw >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdMCPointDraw", ::MpdMCPointDraw::Class_Version(), "MpdMCPointDraw.h", 16,
                  typeid(::MpdMCPointDraw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdMCPointDraw::Dictionary, isa_proxy, 16,
                  sizeof(::MpdMCPointDraw) );
      instance.SetNew(&new_MpdMCPointDraw);
      instance.SetNewArray(&newArray_MpdMCPointDraw);
      instance.SetDelete(&delete_MpdMCPointDraw);
      instance.SetDeleteArray(&deleteArray_MpdMCPointDraw);
      instance.SetDestructor(&destruct_MpdMCPointDraw);
      instance.SetStreamerFunc(&streamer_MpdMCPointDraw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdMCPointDraw*)
   {
      return GenerateInitInstanceLocal((::MpdMCPointDraw*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdMCPointDraw*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdHitDraw(void *p = nullptr);
   static void *newArray_MpdHitDraw(Long_t size, void *p);
   static void delete_MpdHitDraw(void *p);
   static void deleteArray_MpdHitDraw(void *p);
   static void destruct_MpdHitDraw(void *p);
   static void streamer_MpdHitDraw(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdHitDraw*)
   {
      ::MpdHitDraw *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdHitDraw >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdHitDraw", ::MpdHitDraw::Class_Version(), "MpdHitDraw.h", 17,
                  typeid(::MpdHitDraw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdHitDraw::Dictionary, isa_proxy, 16,
                  sizeof(::MpdHitDraw) );
      instance.SetNew(&new_MpdHitDraw);
      instance.SetNewArray(&newArray_MpdHitDraw);
      instance.SetDelete(&delete_MpdHitDraw);
      instance.SetDeleteArray(&deleteArray_MpdHitDraw);
      instance.SetDestructor(&destruct_MpdHitDraw);
      instance.SetStreamerFunc(&streamer_MpdHitDraw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdHitDraw*)
   {
      return GenerateInitInstanceLocal((::MpdHitDraw*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdHitDraw*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdHitPointSetDraw(void *p = nullptr);
   static void *newArray_MpdHitPointSetDraw(Long_t size, void *p);
   static void delete_MpdHitPointSetDraw(void *p);
   static void deleteArray_MpdHitPointSetDraw(void *p);
   static void destruct_MpdHitPointSetDraw(void *p);
   static void streamer_MpdHitPointSetDraw(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdHitPointSetDraw*)
   {
      ::MpdHitPointSetDraw *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdHitPointSetDraw >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdHitPointSetDraw", ::MpdHitPointSetDraw::Class_Version(), "MpdHitPointSetDraw.h", 15,
                  typeid(::MpdHitPointSetDraw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdHitPointSetDraw::Dictionary, isa_proxy, 16,
                  sizeof(::MpdHitPointSetDraw) );
      instance.SetNew(&new_MpdHitPointSetDraw);
      instance.SetNewArray(&newArray_MpdHitPointSetDraw);
      instance.SetDelete(&delete_MpdHitPointSetDraw);
      instance.SetDeleteArray(&deleteArray_MpdHitPointSetDraw);
      instance.SetDestructor(&destruct_MpdHitPointSetDraw);
      instance.SetStreamerFunc(&streamer_MpdHitPointSetDraw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdHitPointSetDraw*)
   {
      return GenerateInitInstanceLocal((::MpdHitPointSetDraw*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdHitPointSetDraw*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_MpdWebScreenshots(void *p);
   static void deleteArray_MpdWebScreenshots(void *p);
   static void destruct_MpdWebScreenshots(void *p);
   static void streamer_MpdWebScreenshots(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdWebScreenshots*)
   {
      ::MpdWebScreenshots *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdWebScreenshots >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MpdWebScreenshots", ::MpdWebScreenshots::Class_Version(), "MpdWebScreenshots.h", 29,
                  typeid(::MpdWebScreenshots), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdWebScreenshots::Dictionary, isa_proxy, 16,
                  sizeof(::MpdWebScreenshots) );
      instance.SetDelete(&delete_MpdWebScreenshots);
      instance.SetDeleteArray(&deleteArray_MpdWebScreenshots);
      instance.SetDestructor(&destruct_MpdWebScreenshots);
      instance.SetStreamerFunc(&streamer_MpdWebScreenshots);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdWebScreenshots*)
   {
      return GenerateInitInstanceLocal((::MpdWebScreenshots*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdWebScreenshots*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrackDrawH(void *p = nullptr);
   static void *newArray_BmnTrackDrawH(Long_t size, void *p);
   static void delete_BmnTrackDrawH(void *p);
   static void deleteArray_BmnTrackDrawH(void *p);
   static void destruct_BmnTrackDrawH(void *p);
   static void streamer_BmnTrackDrawH(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrackDrawH*)
   {
      ::BmnTrackDrawH *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrackDrawH >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrackDrawH", ::BmnTrackDrawH::Class_Version(), "BmnTrackDrawH.h", 21,
                  typeid(::BmnTrackDrawH), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrackDrawH::Dictionary, isa_proxy, 16,
                  sizeof(::BmnTrackDrawH) );
      instance.SetNew(&new_BmnTrackDrawH);
      instance.SetNewArray(&newArray_BmnTrackDrawH);
      instance.SetDelete(&delete_BmnTrackDrawH);
      instance.SetDeleteArray(&deleteArray_BmnTrackDrawH);
      instance.SetDestructor(&destruct_BmnTrackDrawH);
      instance.SetStreamerFunc(&streamer_BmnTrackDrawH);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrackDrawH*)
   {
      return GenerateInitInstanceLocal((::BmnTrackDrawH*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrackDrawH*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrackDrawP(void *p = nullptr);
   static void *newArray_BmnTrackDrawP(Long_t size, void *p);
   static void delete_BmnTrackDrawP(void *p);
   static void deleteArray_BmnTrackDrawP(void *p);
   static void destruct_BmnTrackDrawP(void *p);
   static void streamer_BmnTrackDrawP(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrackDrawP*)
   {
      ::BmnTrackDrawP *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrackDrawP >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrackDrawP", ::BmnTrackDrawP::Class_Version(), "BmnTrackDrawP.h", 20,
                  typeid(::BmnTrackDrawP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrackDrawP::Dictionary, isa_proxy, 16,
                  sizeof(::BmnTrackDrawP) );
      instance.SetNew(&new_BmnTrackDrawP);
      instance.SetNewArray(&newArray_BmnTrackDrawP);
      instance.SetDelete(&delete_BmnTrackDrawP);
      instance.SetDeleteArray(&deleteArray_BmnTrackDrawP);
      instance.SetDestructor(&destruct_BmnTrackDrawP);
      instance.SetStreamerFunc(&streamer_BmnTrackDrawP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrackDrawP*)
   {
      return GenerateInitInstanceLocal((::BmnTrackDrawP*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrackDrawP*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGlobalTrackDraw(void *p = nullptr);
   static void *newArray_BmnGlobalTrackDraw(Long_t size, void *p);
   static void delete_BmnGlobalTrackDraw(void *p);
   static void deleteArray_BmnGlobalTrackDraw(void *p);
   static void destruct_BmnGlobalTrackDraw(void *p);
   static void streamer_BmnGlobalTrackDraw(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGlobalTrackDraw*)
   {
      ::BmnGlobalTrackDraw *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGlobalTrackDraw >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGlobalTrackDraw", ::BmnGlobalTrackDraw::Class_Version(), "BmnGlobalTrackDraw.h", 19,
                  typeid(::BmnGlobalTrackDraw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGlobalTrackDraw::Dictionary, isa_proxy, 16,
                  sizeof(::BmnGlobalTrackDraw) );
      instance.SetNew(&new_BmnGlobalTrackDraw);
      instance.SetNewArray(&newArray_BmnGlobalTrackDraw);
      instance.SetDelete(&delete_BmnGlobalTrackDraw);
      instance.SetDeleteArray(&deleteArray_BmnGlobalTrackDraw);
      instance.SetDestructor(&destruct_BmnGlobalTrackDraw);
      instance.SetStreamerFunc(&streamer_BmnGlobalTrackDraw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGlobalTrackDraw*)
   {
      return GenerateInitInstanceLocal((::BmnGlobalTrackDraw*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGlobalTrackDraw*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnCaloTowerDraw(void *p = nullptr);
   static void *newArray_BmnCaloTowerDraw(Long_t size, void *p);
   static void delete_BmnCaloTowerDraw(void *p);
   static void deleteArray_BmnCaloTowerDraw(void *p);
   static void destruct_BmnCaloTowerDraw(void *p);
   static void streamer_BmnCaloTowerDraw(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCaloTowerDraw*)
   {
      ::BmnCaloTowerDraw *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCaloTowerDraw >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCaloTowerDraw", ::BmnCaloTowerDraw::Class_Version(), "BmnCaloTowerDraw.h", 17,
                  typeid(::BmnCaloTowerDraw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCaloTowerDraw::Dictionary, isa_proxy, 16,
                  sizeof(::BmnCaloTowerDraw) );
      instance.SetNew(&new_BmnCaloTowerDraw);
      instance.SetNewArray(&newArray_BmnCaloTowerDraw);
      instance.SetDelete(&delete_BmnCaloTowerDraw);
      instance.SetDeleteArray(&deleteArray_BmnCaloTowerDraw);
      instance.SetDestructor(&destruct_BmnCaloTowerDraw);
      instance.SetStreamerFunc(&streamer_BmnCaloTowerDraw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCaloTowerDraw*)
   {
      return GenerateInitInstanceLocal((::BmnCaloTowerDraw*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCaloTowerDraw*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_FairMCModuleDraw(void *p = nullptr);
   static void *newArray_FairMCModuleDraw(Long_t size, void *p);
   static void delete_FairMCModuleDraw(void *p);
   static void deleteArray_FairMCModuleDraw(void *p);
   static void destruct_FairMCModuleDraw(void *p);
   static void streamer_FairMCModuleDraw(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FairMCModuleDraw*)
   {
      ::FairMCModuleDraw *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FairMCModuleDraw >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("FairMCModuleDraw", ::FairMCModuleDraw::Class_Version(), "FairMCModuleDraw.h", 16,
                  typeid(::FairMCModuleDraw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FairMCModuleDraw::Dictionary, isa_proxy, 16,
                  sizeof(::FairMCModuleDraw) );
      instance.SetNew(&new_FairMCModuleDraw);
      instance.SetNewArray(&newArray_FairMCModuleDraw);
      instance.SetDelete(&delete_FairMCModuleDraw);
      instance.SetDeleteArray(&deleteArray_FairMCModuleDraw);
      instance.SetDestructor(&destruct_FairMCModuleDraw);
      instance.SetStreamerFunc(&streamer_FairMCModuleDraw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FairMCModuleDraw*)
   {
      return GenerateInitInstanceLocal((::FairMCModuleDraw*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::FairMCModuleDraw*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MpdXMLAttrib::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdXMLAttrib::Class_Name()
{
   return "MpdXMLAttrib";
}

//______________________________________________________________________________
const char *MpdXMLAttrib::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdXMLAttrib*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdXMLAttrib::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdXMLAttrib*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdXMLAttrib::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdXMLAttrib*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdXMLAttrib::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdXMLAttrib*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdXMLNode::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdXMLNode::Class_Name()
{
   return "MpdXMLNode";
}

//______________________________________________________________________________
const char *MpdXMLNode::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdXMLNode*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdXMLNode::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdXMLNode*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdXMLNode::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdXMLNode*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdXMLNode::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdXMLNode*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdXMLFile::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdXMLFile::Class_Name()
{
   return "MpdXMLFile";
}

//______________________________________________________________________________
const char *MpdXMLFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdXMLFile*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdXMLFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdXMLFile*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdXMLFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdXMLFile*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdXMLFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdXMLFile*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdEventManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdEventManager::Class_Name()
{
   return "MpdEventManager";
}

//______________________________________________________________________________
const char *MpdEventManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdEventManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdEventManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdEventManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdEventManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdEventManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdEventManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdEventManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdMCTracks::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdMCTracks::Class_Name()
{
   return "MpdMCTracks";
}

//______________________________________________________________________________
const char *MpdMCTracks::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdMCTracks*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdMCTracks::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdMCTracks*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdMCTracks::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdMCTracks*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdMCTracks::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdMCTracks*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdMCStack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdMCStack::Class_Name()
{
   return "MpdMCStack";
}

//______________________________________________________________________________
const char *MpdMCStack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdMCStack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdMCStack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdMCStack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdMCStack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdMCStack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdMCStack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdMCStack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdEventManagerEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdEventManagerEditor::Class_Name()
{
   return "MpdEventManagerEditor";
}

//______________________________________________________________________________
const char *MpdEventManagerEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdEventManagerEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdEventManagerEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdEventManagerEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdEventManagerEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdEventManagerEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdEventManagerEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdEventManagerEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdMCTracksEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdMCTracksEditor::Class_Name()
{
   return "MpdMCTracksEditor";
}

//______________________________________________________________________________
const char *MpdMCTracksEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdMCTracksEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdMCTracksEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdMCTracksEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdMCTracksEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdMCTracksEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdMCTracksEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdMCTracksEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdBoxSetDraw::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdBoxSetDraw::Class_Name()
{
   return "MpdBoxSetDraw";
}

//______________________________________________________________________________
const char *MpdBoxSetDraw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSetDraw*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdBoxSetDraw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSetDraw*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdBoxSetDraw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSetDraw*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdBoxSetDraw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSetDraw*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdBoxSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdBoxSet::Class_Name()
{
   return "MpdBoxSet";
}

//______________________________________________________________________________
const char *MpdBoxSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdBoxSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdBoxSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdBoxSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdBoxSetEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdBoxSetEditor::Class_Name()
{
   return "MpdBoxSetEditor";
}

//______________________________________________________________________________
const char *MpdBoxSetEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSetEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdBoxSetEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSetEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdBoxSetEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSetEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdBoxSetEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSetEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdPointSetDraw::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdPointSetDraw::Class_Name()
{
   return "MpdPointSetDraw";
}

//______________________________________________________________________________
const char *MpdPointSetDraw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdPointSetDraw*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdPointSetDraw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdPointSetDraw*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdPointSetDraw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdPointSetDraw*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdPointSetDraw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdPointSetDraw*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdMCPointDraw::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdMCPointDraw::Class_Name()
{
   return "MpdMCPointDraw";
}

//______________________________________________________________________________
const char *MpdMCPointDraw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdMCPointDraw*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdMCPointDraw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdMCPointDraw*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdMCPointDraw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdMCPointDraw*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdMCPointDraw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdMCPointDraw*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdHitDraw::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdHitDraw::Class_Name()
{
   return "MpdHitDraw";
}

//______________________________________________________________________________
const char *MpdHitDraw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdHitDraw*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdHitDraw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdHitDraw*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdHitDraw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdHitDraw*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdHitDraw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdHitDraw*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdHitPointSetDraw::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdHitPointSetDraw::Class_Name()
{
   return "MpdHitPointSetDraw";
}

//______________________________________________________________________________
const char *MpdHitPointSetDraw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdHitPointSetDraw*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdHitPointSetDraw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdHitPointSetDraw*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdHitPointSetDraw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdHitPointSetDraw*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdHitPointSetDraw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdHitPointSetDraw*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdWebScreenshots::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdWebScreenshots::Class_Name()
{
   return "MpdWebScreenshots";
}

//______________________________________________________________________________
const char *MpdWebScreenshots::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdWebScreenshots*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MpdWebScreenshots::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdWebScreenshots*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdWebScreenshots::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdWebScreenshots*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdWebScreenshots::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdWebScreenshots*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrackDrawH::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrackDrawH::Class_Name()
{
   return "BmnTrackDrawH";
}

//______________________________________________________________________________
const char *BmnTrackDrawH::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackDrawH*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrackDrawH::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackDrawH*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrackDrawH::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackDrawH*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrackDrawH::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackDrawH*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrackDrawP::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrackDrawP::Class_Name()
{
   return "BmnTrackDrawP";
}

//______________________________________________________________________________
const char *BmnTrackDrawP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackDrawP*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrackDrawP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackDrawP*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrackDrawP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackDrawP*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrackDrawP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackDrawP*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGlobalTrackDraw::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGlobalTrackDraw::Class_Name()
{
   return "BmnGlobalTrackDraw";
}

//______________________________________________________________________________
const char *BmnGlobalTrackDraw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTrackDraw*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGlobalTrackDraw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTrackDraw*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGlobalTrackDraw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTrackDraw*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGlobalTrackDraw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTrackDraw*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnCaloTowerDraw::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCaloTowerDraw::Class_Name()
{
   return "BmnCaloTowerDraw";
}

//______________________________________________________________________________
const char *BmnCaloTowerDraw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCaloTowerDraw*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCaloTowerDraw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCaloTowerDraw*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCaloTowerDraw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCaloTowerDraw*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCaloTowerDraw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCaloTowerDraw*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr FairMCModuleDraw::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FairMCModuleDraw::Class_Name()
{
   return "FairMCModuleDraw";
}

//______________________________________________________________________________
const char *FairMCModuleDraw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairMCModuleDraw*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FairMCModuleDraw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairMCModuleDraw*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FairMCModuleDraw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairMCModuleDraw*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FairMCModuleDraw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairMCModuleDraw*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MpdXMLAttrib::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdXMLAttrib.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, MpdXMLAttrib::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdXMLAttrib::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdXMLAttrib(void *p) {
      return  p ? new(p) ::MpdXMLAttrib : new ::MpdXMLAttrib;
   }
   static void *newArray_MpdXMLAttrib(Long_t nElements, void *p) {
      return p ? new(p) ::MpdXMLAttrib[nElements] : new ::MpdXMLAttrib[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdXMLAttrib(void *p) {
      delete ((::MpdXMLAttrib*)p);
   }
   static void deleteArray_MpdXMLAttrib(void *p) {
      delete [] ((::MpdXMLAttrib*)p);
   }
   static void destruct_MpdXMLAttrib(void *p) {
      typedef ::MpdXMLAttrib current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdXMLAttrib(TBuffer &buf, void *obj) {
      ((::MpdXMLAttrib*)obj)->::MpdXMLAttrib::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdXMLAttrib

//______________________________________________________________________________
void MpdXMLNode::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdXMLNode.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      fChildren.Streamer(R__b);
      fAttrib.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, MpdXMLNode::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdXMLNode::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      fChildren.Streamer(R__b);
      fAttrib.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdXMLNode(void *p) {
      return  p ? new(p) ::MpdXMLNode : new ::MpdXMLNode;
   }
   static void *newArray_MpdXMLNode(Long_t nElements, void *p) {
      return p ? new(p) ::MpdXMLNode[nElements] : new ::MpdXMLNode[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdXMLNode(void *p) {
      delete ((::MpdXMLNode*)p);
   }
   static void deleteArray_MpdXMLNode(void *p) {
      delete [] ((::MpdXMLNode*)p);
   }
   static void destruct_MpdXMLNode(void *p) {
      typedef ::MpdXMLNode current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdXMLNode(TBuffer &buf, void *obj) {
      ((::MpdXMLNode*)obj)->::MpdXMLNode::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdXMLNode

//______________________________________________________________________________
void MpdXMLFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdXMLFile.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.StreamObject(&(fRootNode),typeid(fRootNode));
      fName.Streamer(R__b);
      R__b >> fOverwrite;
      R__b.CheckByteCount(R__s, R__c, MpdXMLFile::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdXMLFile::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.StreamObject(&(fRootNode),typeid(fRootNode));
      fName.Streamer(R__b);
      R__b << fOverwrite;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdXMLFile(void *p) {
      return  p ? new(p) ::MpdXMLFile : new ::MpdXMLFile;
   }
   static void *newArray_MpdXMLFile(Long_t nElements, void *p) {
      return p ? new(p) ::MpdXMLFile[nElements] : new ::MpdXMLFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdXMLFile(void *p) {
      delete ((::MpdXMLFile*)p);
   }
   static void deleteArray_MpdXMLFile(void *p) {
      delete [] ((::MpdXMLFile*)p);
   }
   static void destruct_MpdXMLFile(void *p) {
      typedef ::MpdXMLFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdXMLFile(TBuffer &buf, void *obj) {
      ((::MpdXMLFile*)obj)->::MpdXMLFile::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdXMLFile

//______________________________________________________________________________
void MpdEventManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdEventManager.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TEveEventManager::Streamer(R__b);
      R__b >> EveMCPoints;
      R__b >> EveMCTracks;
      R__b >> EveRecoPoints;
      R__b >> EveRecoTracks;
      void *ptr_gVisualizationColoring = (void*)&gVisualizationColoring;
      R__b >> *reinterpret_cast<Int_t*>(ptr_gVisualizationColoring);
      R__b >> background_color;
      R__b >> isDarkColor;
      R__b >> isOnline;
      R__b >> iDataSource;
      R__b >> fgShowShowMCPoints;
      R__b >> fgShowShowRecoPoints;
      R__b >> fgShowShowRecoTracks;
      R__b >> fgRedrawRecoPointsReqired;
      {
         unordered_set<Int_t> &R__stl =  fCurrentPDG;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            int R__t;
            R__b >> R__t;
            R__stl.insert(R__t);
         }
      }
      R__b >> fRPhiView;
      R__b >> fRhoZView;
      R__b >> fMulti3DView;
      R__b >> fMultiRPhiView;
      R__b >> fMultiRhoZView;
      R__b >> fRPhiMng;
      R__b >> fRhoZMng;
      R__b >> fRPhiGeomScene;
      R__b >> fRhoZGeomScene;
      R__b >> fAxesPhi;
      R__b >> fAxesRho;
      R__b.ReadStaticArray((double*)fRPhiPlane);
      R__b.ReadStaticArray((double*)fRhoZPlane);
      R__b >> iCurrentEvent;
      R__b >> fPriOnly;
      R__b >> fMinEnergy;
      R__b >> fMaxEnergy;
      R__b >> fEvtMinEnergy;
      R__b >> fEvtMaxEnergy;
      R__b >> fLastUsedColor;
      fXMLConfig.Streamer(R__b);
      {
         map<int,int> &R__stl =  fPDGToColor;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            int R__t;
            R__b >> R__t;
            int R__t2;
            R__b >> R__t2;
            typedef int Value_t;
            std::pair<Value_t const, int > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      R__b.CheckByteCount(R__s, R__c, MpdEventManager::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdEventManager::IsA(), kTRUE);
      TEveEventManager::Streamer(R__b);
      R__b << EveMCPoints;
      R__b << EveMCTracks;
      R__b << EveRecoPoints;
      R__b << EveRecoTracks;
      R__b << (Int_t)gVisualizationColoring;
      R__b << background_color;
      R__b << isDarkColor;
      R__b << isOnline;
      R__b << iDataSource;
      R__b << fgShowShowMCPoints;
      R__b << fgShowShowRecoPoints;
      R__b << fgShowShowRecoTracks;
      R__b << fgRedrawRecoPointsReqired;
      {
         unordered_set<Int_t> &R__stl =  fCurrentPDG;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            unordered_set<Int_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      R__b << fRPhiView;
      R__b << fRhoZView;
      R__b << fMulti3DView;
      R__b << fMultiRPhiView;
      R__b << fMultiRhoZView;
      R__b << fRPhiMng;
      R__b << fRhoZMng;
      R__b << fRPhiGeomScene;
      R__b << fRhoZGeomScene;
      R__b << fAxesPhi;
      R__b << fAxesRho;
      R__b.WriteArray(fRPhiPlane, 4);
      R__b.WriteArray(fRhoZPlane, 4);
      R__b << iCurrentEvent;
      R__b << fPriOnly;
      R__b << fMinEnergy;
      R__b << fMaxEnergy;
      R__b << fEvtMinEnergy;
      R__b << fEvtMaxEnergy;
      R__b << fLastUsedColor;
      fXMLConfig.Streamer(R__b);
      {
         map<int,int> &R__stl =  fPDGToColor;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            map<int,int>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << ((*R__k).first );
            R__b << ((*R__k).second);
            }
         }
      }
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdEventManager(void *p) {
      return  p ? new(p) ::MpdEventManager : new ::MpdEventManager;
   }
   static void *newArray_MpdEventManager(Long_t nElements, void *p) {
      return p ? new(p) ::MpdEventManager[nElements] : new ::MpdEventManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdEventManager(void *p) {
      delete ((::MpdEventManager*)p);
   }
   static void deleteArray_MpdEventManager(void *p) {
      delete [] ((::MpdEventManager*)p);
   }
   static void destruct_MpdEventManager(void *p) {
      typedef ::MpdEventManager current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdEventManager(TBuffer &buf, void *obj) {
      ((::MpdEventManager*)obj)->::MpdEventManager::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdEventManager

//______________________________________________________________________________
void MpdMCTracks::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdMCTracks.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairTask::Streamer(R__b);
      R__b >> fTrPr;
      R__b >> fEveTrList;
      R__b >> MinEnergyLimit;
      R__b >> MaxEnergyLimit;
      R__b >> PEnergy;
      R__b.CheckByteCount(R__s, R__c, MpdMCTracks::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdMCTracks::IsA(), kTRUE);
      FairTask::Streamer(R__b);
      R__b << fTrPr;
      R__b << fEveTrList;
      R__b << MinEnergyLimit;
      R__b << MaxEnergyLimit;
      R__b << PEnergy;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdMCTracks(void *p) {
      return  p ? new(p) ::MpdMCTracks : new ::MpdMCTracks;
   }
   static void *newArray_MpdMCTracks(Long_t nElements, void *p) {
      return p ? new(p) ::MpdMCTracks[nElements] : new ::MpdMCTracks[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdMCTracks(void *p) {
      delete ((::MpdMCTracks*)p);
   }
   static void deleteArray_MpdMCTracks(void *p) {
      delete [] ((::MpdMCTracks*)p);
   }
   static void destruct_MpdMCTracks(void *p) {
      typedef ::MpdMCTracks current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdMCTracks(TBuffer &buf, void *obj) {
      ((::MpdMCTracks*)obj)->::MpdMCTracks::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdMCTracks

//______________________________________________________________________________
void MpdMCStack::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdMCStack.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairTask::Streamer(R__b);
      R__b >> fEveTrList;
      R__b >> fTrPr;
      R__b.ReadStaticArray((float*)x1);
      R__b.ReadStaticArray((float*)x2);
      R__b.ReadStaticArray((float*)p1);
      R__b.ReadStaticArray((float*)p2);
      R__b.ReadStaticArray((float*)ein);
      R__b >> MinEnergyLimit;
      R__b >> MaxEnergyLimit;
      R__b >> PEnergy;
      R__b.CheckByteCount(R__s, R__c, MpdMCStack::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdMCStack::IsA(), kTRUE);
      FairTask::Streamer(R__b);
      R__b << fEveTrList;
      R__b << fTrPr;
      R__b.WriteArray(x1, 3);
      R__b.WriteArray(x2, 3);
      R__b.WriteArray(p1, 3);
      R__b.WriteArray(p2, 3);
      R__b.WriteArray(ein, 15);
      R__b << MinEnergyLimit;
      R__b << MaxEnergyLimit;
      R__b << PEnergy;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdMCStack(void *p) {
      return  p ? new(p) ::MpdMCStack : new ::MpdMCStack;
   }
   static void *newArray_MpdMCStack(Long_t nElements, void *p) {
      return p ? new(p) ::MpdMCStack[nElements] : new ::MpdMCStack[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdMCStack(void *p) {
      delete ((::MpdMCStack*)p);
   }
   static void deleteArray_MpdMCStack(void *p) {
      delete [] ((::MpdMCStack*)p);
   }
   static void destruct_MpdMCStack(void *p) {
      typedef ::MpdMCStack current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdMCStack(TBuffer &buf, void *obj) {
      ((::MpdMCStack*)obj)->::MpdMCStack::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdMCStack

//______________________________________________________________________________
void MpdEventManagerEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdEventManagerEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdEventManagerEditor(void *p) {
      return  p ? new(p) ::MpdEventManagerEditor : new ::MpdEventManagerEditor;
   }
   static void *newArray_MpdEventManagerEditor(Long_t nElements, void *p) {
      return p ? new(p) ::MpdEventManagerEditor[nElements] : new ::MpdEventManagerEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdEventManagerEditor(void *p) {
      delete ((::MpdEventManagerEditor*)p);
   }
   static void deleteArray_MpdEventManagerEditor(void *p) {
      delete [] ((::MpdEventManagerEditor*)p);
   }
   static void destruct_MpdEventManagerEditor(void *p) {
      typedef ::MpdEventManagerEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdEventManagerEditor(TBuffer &buf, void *obj) {
      ((::MpdEventManagerEditor*)obj)->::MpdEventManagerEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdEventManagerEditor

//______________________________________________________________________________
void MpdMCTracksEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdMCTracksEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdMCTracksEditor(void *p) {
      return  p ? new(p) ::MpdMCTracksEditor : new ::MpdMCTracksEditor;
   }
   static void *newArray_MpdMCTracksEditor(Long_t nElements, void *p) {
      return p ? new(p) ::MpdMCTracksEditor[nElements] : new ::MpdMCTracksEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdMCTracksEditor(void *p) {
      delete ((::MpdMCTracksEditor*)p);
   }
   static void deleteArray_MpdMCTracksEditor(void *p) {
      delete [] ((::MpdMCTracksEditor*)p);
   }
   static void destruct_MpdMCTracksEditor(void *p) {
      typedef ::MpdMCTracksEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdMCTracksEditor(TBuffer &buf, void *obj) {
      ((::MpdMCTracksEditor*)obj)->::MpdMCTracksEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdMCTracksEditor

//______________________________________________________________________________
void MpdBoxSetDraw::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdBoxSetDraw.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairTask::Streamer(R__b);
      R__b >> fVerbose;
      R__b >> fX;
      R__b >> fY;
      R__b >> fZ;
      R__b >> fTimeWindowPlus;
      R__b >> fTimeWindowMinus;
      R__b >> fStartTime;
      R__b >> fUseEventTime;
      R__b >> isRedraw;
      R__b >> fStartFunctor;
      R__b >> fStopFunctor;
      R__b.CheckByteCount(R__s, R__c, MpdBoxSetDraw::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdBoxSetDraw::IsA(), kTRUE);
      FairTask::Streamer(R__b);
      R__b << fVerbose;
      R__b << fX;
      R__b << fY;
      R__b << fZ;
      R__b << fTimeWindowPlus;
      R__b << fTimeWindowMinus;
      R__b << fStartTime;
      R__b << fUseEventTime;
      R__b << isRedraw;
      R__b << fStartFunctor;
      R__b << fStopFunctor;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MpdBoxSetDraw(void *p) {
      delete ((::MpdBoxSetDraw*)p);
   }
   static void deleteArray_MpdBoxSetDraw(void *p) {
      delete [] ((::MpdBoxSetDraw*)p);
   }
   static void destruct_MpdBoxSetDraw(void *p) {
      typedef ::MpdBoxSetDraw current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdBoxSetDraw(TBuffer &buf, void *obj) {
      ((::MpdBoxSetDraw*)obj)->::MpdBoxSetDraw::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdBoxSetDraw

//______________________________________________________________________________
void MpdBoxSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdBoxSet.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TEveBoxSet::Streamer(R__b);
      R__b >> fDraw;
      R__b.CheckByteCount(R__s, R__c, MpdBoxSet::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdBoxSet::IsA(), kTRUE);
      TEveBoxSet::Streamer(R__b);
      R__b << fDraw;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MpdBoxSet(void *p) {
      delete ((::MpdBoxSet*)p);
   }
   static void deleteArray_MpdBoxSet(void *p) {
      delete [] ((::MpdBoxSet*)p);
   }
   static void destruct_MpdBoxSet(void *p) {
      typedef ::MpdBoxSet current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdBoxSet(TBuffer &buf, void *obj) {
      ((::MpdBoxSet*)obj)->::MpdBoxSet::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdBoxSet

//______________________________________________________________________________
void MpdBoxSetEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdBoxSetEditor.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TGedFrame::Streamer(R__b);
      R__b >> fInfoFrame;
      R__b >> fTimeWindowPlus;
      R__b >> fTimeWindowMinus;
      R__b >> fObject;
      R__b >> fM;
      R__b.CheckByteCount(R__s, R__c, MpdBoxSetEditor::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdBoxSetEditor::IsA(), kTRUE);
      TGedFrame::Streamer(R__b);
      R__b << fInfoFrame;
      R__b << fTimeWindowPlus;
      R__b << fTimeWindowMinus;
      R__b << fObject;
      R__b << fM;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdBoxSetEditor(void *p) {
      return  p ? new(p) ::MpdBoxSetEditor : new ::MpdBoxSetEditor;
   }
   static void *newArray_MpdBoxSetEditor(Long_t nElements, void *p) {
      return p ? new(p) ::MpdBoxSetEditor[nElements] : new ::MpdBoxSetEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdBoxSetEditor(void *p) {
      delete ((::MpdBoxSetEditor*)p);
   }
   static void deleteArray_MpdBoxSetEditor(void *p) {
      delete [] ((::MpdBoxSetEditor*)p);
   }
   static void destruct_MpdBoxSetEditor(void *p) {
      typedef ::MpdBoxSetEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdBoxSetEditor(TBuffer &buf, void *obj) {
      ((::MpdBoxSetEditor*)obj)->::MpdBoxSetEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdBoxSetEditor

//______________________________________________________________________________
void MpdPointSetDraw::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdPointSetDraw.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairTask::Streamer(R__b);
      R__b >> fVerbose;
      R__b.CheckByteCount(R__s, R__c, MpdPointSetDraw::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdPointSetDraw::IsA(), kTRUE);
      FairTask::Streamer(R__b);
      R__b << fVerbose;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MpdPointSetDraw(void *p) {
      delete ((::MpdPointSetDraw*)p);
   }
   static void deleteArray_MpdPointSetDraw(void *p) {
      delete [] ((::MpdPointSetDraw*)p);
   }
   static void destruct_MpdPointSetDraw(void *p) {
      typedef ::MpdPointSetDraw current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdPointSetDraw(TBuffer &buf, void *obj) {
      ((::MpdPointSetDraw*)obj)->::MpdPointSetDraw::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdPointSetDraw

//______________________________________________________________________________
void MpdMCPointDraw::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdMCPointDraw.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      MpdPointSetDraw::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, MpdMCPointDraw::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdMCPointDraw::IsA(), kTRUE);
      MpdPointSetDraw::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdMCPointDraw(void *p) {
      return  p ? new(p) ::MpdMCPointDraw : new ::MpdMCPointDraw;
   }
   static void *newArray_MpdMCPointDraw(Long_t nElements, void *p) {
      return p ? new(p) ::MpdMCPointDraw[nElements] : new ::MpdMCPointDraw[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdMCPointDraw(void *p) {
      delete ((::MpdMCPointDraw*)p);
   }
   static void deleteArray_MpdMCPointDraw(void *p) {
      delete [] ((::MpdMCPointDraw*)p);
   }
   static void destruct_MpdMCPointDraw(void *p) {
      typedef ::MpdMCPointDraw current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdMCPointDraw(TBuffer &buf, void *obj) {
      ((::MpdMCPointDraw*)obj)->::MpdMCPointDraw::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdMCPointDraw

//______________________________________________________________________________
void MpdHitDraw::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdHitDraw.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      MpdBoxSetDraw::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, MpdHitDraw::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdHitDraw::IsA(), kTRUE);
      MpdBoxSetDraw::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdHitDraw(void *p) {
      return  p ? new(p) ::MpdHitDraw : new ::MpdHitDraw;
   }
   static void *newArray_MpdHitDraw(Long_t nElements, void *p) {
      return p ? new(p) ::MpdHitDraw[nElements] : new ::MpdHitDraw[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdHitDraw(void *p) {
      delete ((::MpdHitDraw*)p);
   }
   static void deleteArray_MpdHitDraw(void *p) {
      delete [] ((::MpdHitDraw*)p);
   }
   static void destruct_MpdHitDraw(void *p) {
      typedef ::MpdHitDraw current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdHitDraw(TBuffer &buf, void *obj) {
      ((::MpdHitDraw*)obj)->::MpdHitDraw::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdHitDraw

//______________________________________________________________________________
void MpdHitPointSetDraw::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdHitPointSetDraw.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      MpdPointSetDraw::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, MpdHitPointSetDraw::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdHitPointSetDraw::IsA(), kTRUE);
      MpdPointSetDraw::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdHitPointSetDraw(void *p) {
      return  p ? new(p) ::MpdHitPointSetDraw : new ::MpdHitPointSetDraw;
   }
   static void *newArray_MpdHitPointSetDraw(Long_t nElements, void *p) {
      return p ? new(p) ::MpdHitPointSetDraw[nElements] : new ::MpdHitPointSetDraw[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdHitPointSetDraw(void *p) {
      delete ((::MpdHitPointSetDraw*)p);
   }
   static void deleteArray_MpdHitPointSetDraw(void *p) {
      delete [] ((::MpdHitPointSetDraw*)p);
   }
   static void destruct_MpdHitPointSetDraw(void *p) {
      typedef ::MpdHitPointSetDraw current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdHitPointSetDraw(TBuffer &buf, void *obj) {
      ((::MpdHitPointSetDraw*)obj)->::MpdHitPointSetDraw::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdHitPointSetDraw

//______________________________________________________________________________
void MpdWebScreenshots::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdWebScreenshots.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairTask::Streamer(R__b);
      R__b >> fMan;
      R__b >> iFormatFiles;
      R__b >> isMultiFiles;
      outputDir.Streamer(R__b);
      R__b >> web_port;
      R__b >> daemon;
      R__b >> isWebStarted;
      R__b >> isWeb;
      R__b.CheckByteCount(R__s, R__c, MpdWebScreenshots::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdWebScreenshots::IsA(), kTRUE);
      FairTask::Streamer(R__b);
      R__b << fMan;
      R__b << iFormatFiles;
      R__b << isMultiFiles;
      outputDir.Streamer(R__b);
      R__b << web_port;
      R__b << daemon;
      R__b << isWebStarted;
      R__b << isWeb;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MpdWebScreenshots(void *p) {
      delete ((::MpdWebScreenshots*)p);
   }
   static void deleteArray_MpdWebScreenshots(void *p) {
      delete [] ((::MpdWebScreenshots*)p);
   }
   static void destruct_MpdWebScreenshots(void *p) {
      typedef ::MpdWebScreenshots current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdWebScreenshots(TBuffer &buf, void *obj) {
      ((::MpdWebScreenshots*)obj)->::MpdWebScreenshots::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdWebScreenshots

//______________________________________________________________________________
void BmnTrackDrawH::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrackDrawH.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairTask::Streamer(R__b);
      R__b >> fTrPr;
      R__b >> MinEnergyLimit;
      R__b >> MaxEnergyLimit;
      R__b >> PEnergy;
      fHitsBranchName.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, BmnTrackDrawH::IsA());
   } else {
      R__c = R__b.WriteVersion(BmnTrackDrawH::IsA(), kTRUE);
      FairTask::Streamer(R__b);
      R__b << fTrPr;
      R__b << MinEnergyLimit;
      R__b << MaxEnergyLimit;
      R__b << PEnergy;
      fHitsBranchName.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrackDrawH(void *p) {
      return  p ? new(p) ::BmnTrackDrawH : new ::BmnTrackDrawH;
   }
   static void *newArray_BmnTrackDrawH(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrackDrawH[nElements] : new ::BmnTrackDrawH[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrackDrawH(void *p) {
      delete ((::BmnTrackDrawH*)p);
   }
   static void deleteArray_BmnTrackDrawH(void *p) {
      delete [] ((::BmnTrackDrawH*)p);
   }
   static void destruct_BmnTrackDrawH(void *p) {
      typedef ::BmnTrackDrawH current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_BmnTrackDrawH(TBuffer &buf, void *obj) {
      ((::BmnTrackDrawH*)obj)->::BmnTrackDrawH::Streamer(buf);
   }
} // end of namespace ROOT for class ::BmnTrackDrawH

//______________________________________________________________________________
void BmnTrackDrawP::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrackDrawP.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairTask::Streamer(R__b);
      R__b >> fEveTrList;
      R__b.ReadStaticArray((float*)x1);
      R__b.ReadStaticArray((float*)p1);
      R__b.ReadStaticArray((float*)x2);
      R__b.ReadStaticArray((float*)p2);
      R__b >> MinEnergyLimit;
      R__b >> MaxEnergyLimit;
      R__b >> PEnergy;
      R__b.CheckByteCount(R__s, R__c, BmnTrackDrawP::IsA());
   } else {
      R__c = R__b.WriteVersion(BmnTrackDrawP::IsA(), kTRUE);
      FairTask::Streamer(R__b);
      R__b << fEveTrList;
      R__b.WriteArray(x1, 3);
      R__b.WriteArray(p1, 3);
      R__b.WriteArray(x2, 3);
      R__b.WriteArray(p2, 3);
      R__b << MinEnergyLimit;
      R__b << MaxEnergyLimit;
      R__b << PEnergy;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrackDrawP(void *p) {
      return  p ? new(p) ::BmnTrackDrawP : new ::BmnTrackDrawP;
   }
   static void *newArray_BmnTrackDrawP(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrackDrawP[nElements] : new ::BmnTrackDrawP[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrackDrawP(void *p) {
      delete ((::BmnTrackDrawP*)p);
   }
   static void deleteArray_BmnTrackDrawP(void *p) {
      delete [] ((::BmnTrackDrawP*)p);
   }
   static void destruct_BmnTrackDrawP(void *p) {
      typedef ::BmnTrackDrawP current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_BmnTrackDrawP(TBuffer &buf, void *obj) {
      ((::BmnTrackDrawP*)obj)->::BmnTrackDrawP::Streamer(buf);
   }
} // end of namespace ROOT for class ::BmnTrackDrawP

//______________________________________________________________________________
void BmnGlobalTrackDraw::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGlobalTrackDraw.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairTask::Streamer(R__b);
      R__b >> fTrPr;
      R__b >> fEveTrList;
      R__b >> MinEnergyLimit;
      R__b >> MaxEnergyLimit;
      R__b >> PEnergy;
      R__b.CheckByteCount(R__s, R__c, BmnGlobalTrackDraw::IsA());
   } else {
      R__c = R__b.WriteVersion(BmnGlobalTrackDraw::IsA(), kTRUE);
      FairTask::Streamer(R__b);
      R__b << fTrPr;
      R__b << fEveTrList;
      R__b << MinEnergyLimit;
      R__b << MaxEnergyLimit;
      R__b << PEnergy;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGlobalTrackDraw(void *p) {
      return  p ? new(p) ::BmnGlobalTrackDraw : new ::BmnGlobalTrackDraw;
   }
   static void *newArray_BmnGlobalTrackDraw(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGlobalTrackDraw[nElements] : new ::BmnGlobalTrackDraw[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGlobalTrackDraw(void *p) {
      delete ((::BmnGlobalTrackDraw*)p);
   }
   static void deleteArray_BmnGlobalTrackDraw(void *p) {
      delete [] ((::BmnGlobalTrackDraw*)p);
   }
   static void destruct_BmnGlobalTrackDraw(void *p) {
      typedef ::BmnGlobalTrackDraw current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_BmnGlobalTrackDraw(TBuffer &buf, void *obj) {
      ((::BmnGlobalTrackDraw*)obj)->::BmnGlobalTrackDraw::Streamer(buf);
   }
} // end of namespace ROOT for class ::BmnGlobalTrackDraw

//______________________________________________________________________________
void BmnCaloTowerDraw::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCaloTowerDraw.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairTask::Streamer(R__b);
      R__b >> fCaloMinEnergyThreshold;
      R__b >> fMaxE;
      R__b >> fNumModules;
      R__b >> fMaxModuleZLen;
      R__b >> fResetRequiredFlag;
      R__b >> fInitDrawFlag;
      R__b.CheckByteCount(R__s, R__c, BmnCaloTowerDraw::IsA());
   } else {
      R__c = R__b.WriteVersion(BmnCaloTowerDraw::IsA(), kTRUE);
      FairTask::Streamer(R__b);
      R__b << fCaloMinEnergyThreshold;
      R__b << fMaxE;
      R__b << fNumModules;
      R__b << fMaxModuleZLen;
      R__b << fResetRequiredFlag;
      R__b << fInitDrawFlag;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCaloTowerDraw(void *p) {
      return  p ? new(p) ::BmnCaloTowerDraw : new ::BmnCaloTowerDraw;
   }
   static void *newArray_BmnCaloTowerDraw(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCaloTowerDraw[nElements] : new ::BmnCaloTowerDraw[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCaloTowerDraw(void *p) {
      delete ((::BmnCaloTowerDraw*)p);
   }
   static void deleteArray_BmnCaloTowerDraw(void *p) {
      delete [] ((::BmnCaloTowerDraw*)p);
   }
   static void destruct_BmnCaloTowerDraw(void *p) {
      typedef ::BmnCaloTowerDraw current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_BmnCaloTowerDraw(TBuffer &buf, void *obj) {
      ((::BmnCaloTowerDraw*)obj)->::BmnCaloTowerDraw::Streamer(buf);
   }
} // end of namespace ROOT for class ::BmnCaloTowerDraw

//______________________________________________________________________________
void FairMCModuleDraw::Streamer(TBuffer &R__b)
{
   // Stream an object of class FairMCModuleDraw.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairTask::Streamer(R__b);
      R__b >> fVerbose;
      R__b.CheckByteCount(R__s, R__c, FairMCModuleDraw::IsA());
   } else {
      R__c = R__b.WriteVersion(FairMCModuleDraw::IsA(), kTRUE);
      FairTask::Streamer(R__b);
      R__b << fVerbose;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FairMCModuleDraw(void *p) {
      return  p ? new(p) ::FairMCModuleDraw : new ::FairMCModuleDraw;
   }
   static void *newArray_FairMCModuleDraw(Long_t nElements, void *p) {
      return p ? new(p) ::FairMCModuleDraw[nElements] : new ::FairMCModuleDraw[nElements];
   }
   // Wrapper around operator delete
   static void delete_FairMCModuleDraw(void *p) {
      delete ((::FairMCModuleDraw*)p);
   }
   static void deleteArray_FairMCModuleDraw(void *p) {
      delete [] ((::FairMCModuleDraw*)p);
   }
   static void destruct_FairMCModuleDraw(void *p) {
      typedef ::FairMCModuleDraw current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_FairMCModuleDraw(TBuffer &buf, void *obj) {
      ((::FairMCModuleDraw*)obj)->::FairMCModuleDraw::Streamer(buf);
   }
} // end of namespace ROOT for class ::FairMCModuleDraw

namespace ROOT {
   static TClass *unordered_setlEintgR_Dictionary();
   static void unordered_setlEintgR_TClassManip(TClass*);
   static void *new_unordered_setlEintgR(void *p = nullptr);
   static void *newArray_unordered_setlEintgR(Long_t size, void *p);
   static void delete_unordered_setlEintgR(void *p);
   static void deleteArray_unordered_setlEintgR(void *p);
   static void destruct_unordered_setlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_set<int>*)
   {
      unordered_set<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_set<int>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_set<int>", -2, "unordered_set", 97,
                  typeid(unordered_set<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_setlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(unordered_set<int>) );
      instance.SetNew(&new_unordered_setlEintgR);
      instance.SetNewArray(&newArray_unordered_setlEintgR);
      instance.SetDelete(&delete_unordered_setlEintgR);
      instance.SetDeleteArray(&deleteArray_unordered_setlEintgR);
      instance.SetDestructor(&destruct_unordered_setlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< unordered_set<int> >()));

      ::ROOT::AddClassAlternate("unordered_set<int>","std::unordered_set<int, std::hash<int>, std::equal_to<int>, std::allocator<int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const unordered_set<int>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_setlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const unordered_set<int>*)nullptr)->GetClass();
      unordered_setlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_setlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_setlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_set<int> : new unordered_set<int>;
   }
   static void *newArray_unordered_setlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) unordered_set<int>[nElements] : new unordered_set<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_setlEintgR(void *p) {
      delete ((unordered_set<int>*)p);
   }
   static void deleteArray_unordered_setlEintgR(void *p) {
      delete [] ((unordered_set<int>*)p);
   }
   static void destruct_unordered_setlEintgR(void *p) {
      typedef unordered_set<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class unordered_set<int>

namespace ROOT {
   static TClass *maplEintcOintgR_Dictionary();
   static void maplEintcOintgR_TClassManip(TClass*);
   static void *new_maplEintcOintgR(void *p = nullptr);
   static void *newArray_maplEintcOintgR(Long_t size, void *p);
   static void delete_maplEintcOintgR(void *p);
   static void deleteArray_maplEintcOintgR(void *p);
   static void destruct_maplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,int>*)
   {
      map<int,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,int>", -2, "map", 100,
                  typeid(map<int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,int>) );
      instance.SetNew(&new_maplEintcOintgR);
      instance.SetNewArray(&newArray_maplEintcOintgR);
      instance.SetDelete(&delete_maplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOintgR);
      instance.SetDestructor(&destruct_maplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,int> >()));

      ::ROOT::AddClassAlternate("map<int,int>","std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,int>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,int>*)nullptr)->GetClass();
      maplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int> : new map<int,int>;
   }
   static void *newArray_maplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int>[nElements] : new map<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOintgR(void *p) {
      delete ((map<int,int>*)p);
   }
   static void deleteArray_maplEintcOintgR(void *p) {
      delete [] ((map<int,int>*)p);
   }
   static void destruct_maplEintcOintgR(void *p) {
      typedef map<int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,int>

namespace {
  void TriggerDictionaryInitialization_G__EventDisplayDict_Impl() {
    static const char* headers[] = {
"MpdEventManager.h",
"MpdMCTracks.h",
"MpdMCStack.h",
"MpdEventManagerEditor.h",
"MpdMCTracksEditor.h",
"MpdBoxSet.h",
"MpdBoxSetDraw.h",
"MpdBoxSetEditor.h",
"MpdPointSetDraw.h",
"MpdMCPointDraw.h",
"MpdHitDraw.h",
"MpdXMLNode.h",
"MpdHitPointSetDraw.h",
"MpdWebScreenshots.h",
"BmnTrackDrawH.h",
"BmnTrackDrawP.h",
"BmnGlobalTrackDraw.h",
"BmnCaloTowerDraw.h",
"FairMCModuleDraw.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tools/FairSoft/fairroot/install/include",
"/home/tools/FairSoft/fairsoft/install/include",
"/data/yaopeng/bmnroot_Yaopeng/config",
"/data/yaopeng/bmnroot_Yaopeng/eventdisplay",
"/data/yaopeng/bmnroot_Yaopeng/base",
"/data/yaopeng/bmnroot_Yaopeng/base/data",
"/data/yaopeng/bmnroot_Yaopeng/reconstruction/globaltracking",
"/data/yaopeng/bmnroot_Yaopeng/detectors/silicon",
"/data/yaopeng/bmnroot_Yaopeng/detectors/gem",
"/data/yaopeng/bmnroot_Yaopeng/detectors/dch",
"/data/yaopeng/bmnroot_Yaopeng/detectors/zdc",
"/data/yaopeng/bmnroot_Yaopeng/services",
"/data/yaopeng/bmnroot_Yaopeng/eventdisplay/bmn",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/home/tools/FairSoft/fairsoft/install/include/vmc",
"/home/tools/FairSoft/fairsoft/install/include/TGeant3",
"/usr/include/libxml2",
"/home/tools/FairSoft/fairsoft/install/include/root",
"/data/yaopeng/bmnroot_Yaopeng/build/eventdisplay/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__EventDisplayDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$MpdXMLNode.h")))  __attribute__((annotate("$clingAutoload$MpdEventManager.h")))  MpdXMLAttrib;
class __attribute__((annotate("$clingAutoload$MpdXMLNode.h")))  __attribute__((annotate("$clingAutoload$MpdEventManager.h")))  MpdXMLNode;
class __attribute__((annotate("$clingAutoload$MpdXMLNode.h")))  __attribute__((annotate("$clingAutoload$MpdEventManager.h")))  MpdXMLFile;
class __attribute__((annotate("$clingAutoload$MpdEventManager.h")))  MpdEventManager;
class __attribute__((annotate("$clingAutoload$MpdMCTracks.h")))  MpdMCTracks;
class __attribute__((annotate("$clingAutoload$MpdMCStack.h")))  MpdMCStack;
class __attribute__((annotate("$clingAutoload$MpdEventManagerEditor.h")))  MpdEventManagerEditor;
class __attribute__((annotate(R"ATTRDUMP(Specialization of TGedEditor for proper update propagation to TEveManager.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Specialization of TGedEditor for proper update propagation to TEveManager.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Specialization of TGedEditor for proper update propagation to TEveManager.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Specialization of TGedEditor for proper update propagation to TEveManager.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$MpdMCTracksEditor.h")))  MpdMCTracksEditor;
class __attribute__((annotate("$clingAutoload$MpdBoxSetDraw.h")))  __attribute__((annotate("$clingAutoload$MpdBoxSet.h")))  MpdBoxSetDraw;
class __attribute__((annotate("$clingAutoload$MpdBoxSet.h")))  MpdBoxSet;
class __attribute__((annotate("$clingAutoload$MpdBoxSetEditor.h")))  MpdBoxSetEditor;
class __attribute__((annotate("$clingAutoload$MpdPointSetDraw.h")))  MpdPointSetDraw;
class __attribute__((annotate("$clingAutoload$MpdMCPointDraw.h")))  MpdMCPointDraw;
class __attribute__((annotate("$clingAutoload$MpdHitDraw.h")))  MpdHitDraw;
class __attribute__((annotate("$clingAutoload$MpdHitPointSetDraw.h")))  MpdHitPointSetDraw;
class __attribute__((annotate("$clingAutoload$MpdWebScreenshots.h")))  MpdWebScreenshots;
class __attribute__((annotate("$clingAutoload$BmnTrackDrawH.h")))  BmnTrackDrawH;
class __attribute__((annotate("$clingAutoload$BmnTrackDrawP.h")))  BmnTrackDrawP;
class __attribute__((annotate("$clingAutoload$BmnGlobalTrackDraw.h")))  BmnGlobalTrackDraw;
class __attribute__((annotate("$clingAutoload$BmnCaloTowerDraw.h")))  BmnCaloTowerDraw;
class __attribute__((annotate("$clingAutoload$FairMCModuleDraw.h")))  FairMCModuleDraw;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__EventDisplayDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MpdEventManager.h"
#include "MpdMCTracks.h"
#include "MpdMCStack.h"
#include "MpdEventManagerEditor.h"
#include "MpdMCTracksEditor.h"
#include "MpdBoxSet.h"
#include "MpdBoxSetDraw.h"
#include "MpdBoxSetEditor.h"
#include "MpdPointSetDraw.h"
#include "MpdMCPointDraw.h"
#include "MpdHitDraw.h"
#include "MpdXMLNode.h"
#include "MpdHitPointSetDraw.h"
#include "MpdWebScreenshots.h"
#include "BmnTrackDrawH.h"
#include "BmnTrackDrawP.h"
#include "BmnGlobalTrackDraw.h"
#include "BmnCaloTowerDraw.h"
#include "FairMCModuleDraw.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"BmnCaloTowerDraw", payloadCode, "@",
"BmnGlobalTrackDraw", payloadCode, "@",
"BmnTrackDrawH", payloadCode, "@",
"BmnTrackDrawP", payloadCode, "@",
"FairMCModuleDraw", payloadCode, "@",
"MpdBoxSet", payloadCode, "@",
"MpdBoxSetDraw", payloadCode, "@",
"MpdBoxSetEditor", payloadCode, "@",
"MpdEventManager", payloadCode, "@",
"MpdEventManagerEditor", payloadCode, "@",
"MpdHitDraw", payloadCode, "@",
"MpdHitPointSetDraw", payloadCode, "@",
"MpdMCPointDraw", payloadCode, "@",
"MpdMCStack", payloadCode, "@",
"MpdMCTracks", payloadCode, "@",
"MpdMCTracksEditor", payloadCode, "@",
"MpdPointSetDraw", payloadCode, "@",
"MpdWebScreenshots", payloadCode, "@",
"MpdXMLAttrib", payloadCode, "@",
"MpdXMLFile", payloadCode, "@",
"MpdXMLNode", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__EventDisplayDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__EventDisplayDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__EventDisplayDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__EventDisplayDict() {
  TriggerDictionaryInitialization_G__EventDisplayDict_Impl();
}
