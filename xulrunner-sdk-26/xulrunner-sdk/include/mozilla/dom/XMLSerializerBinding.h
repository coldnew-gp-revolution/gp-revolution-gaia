/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_XMLSerializerBinding_h__
#define mozilla_dom_XMLSerializerBinding_h__

#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/DOMJSClass.h"
#include "mozilla/dom/DOMJSProxyHandler.h"

class nsDOMSerializer;

namespace mozilla {
namespace dom {

template <>
struct PrototypeTraits<prototypes::id::XMLSerializer>
{
  enum
  {
    Depth = 0
  };
  typedef nsDOMSerializer NativeType;
};
template <>
struct PrototypeIDMap<nsDOMSerializer>
{
  enum
  {
    PrototypeID = prototypes::id::XMLSerializer
  };
};
} // namespace dom
} // namespace mozilla


namespace mozilla {
namespace dom {

namespace XMLSerializerBinding {

  extern const NativePropertyHooks sNativePropertyHooks;

  void
  CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Heap<JSObject*>* protoAndIfaceArray);

  inline JS::Handle<JSObject*> GetProtoObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal)
  {

    /* Get the interface prototype object for this class.  This will create the
       object as needed. */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return JS::NullPtr();
    }
    /* Check to see whether the interface objects are already installed */
    JS::Heap<JSObject*>* protoAndIfaceArray = GetProtoAndIfaceArray(aGlobal);
    if (!protoAndIfaceArray[prototypes::id::XMLSerializer]) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
    }

    /*
     * The object might _still_ be null, but that's OK.
     *
     * Calling fromMarkedLocation() is safe because protoAndIfaceArray is
     * traced by TraceProtoAndIfaceCache() and its contents are never
     * changed after they have been set.
     */
    return JS::Handle<JSObject*>::fromMarkedLocation(protoAndIfaceArray[prototypes::id::XMLSerializer].address());
  }

  inline JS::Handle<JSObject*> GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal)
  {

    /* Get the interface object for this class.  This will create the object as
       needed. */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return JS::NullPtr();
    }
    /* Check to see whether the interface objects are already installed */
    JS::Heap<JSObject*>* protoAndIfaceArray = GetProtoAndIfaceArray(aGlobal);
    if (!protoAndIfaceArray[constructors::id::XMLSerializer]) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
    }

    /*
     * The object might _still_ be null, but that's OK.
     *
     * Calling fromMarkedLocation() is safe because protoAndIfaceArray is
     * traced by TraceProtoAndIfaceCache() and its contents are never
     * changed after they have been set.
     */
    return JS::Handle<JSObject*>::fromMarkedLocation(protoAndIfaceArray[constructors::id::XMLSerializer].address());
  }

  JSObject*
  DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool* aEnabled);

  extern DOMJSClass Class;

  JSObject*
  Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, nsDOMSerializer* aObject, nsWrapperCache* aCache);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, T* aObject)
  {
    return Wrap(aCx, aScope, aObject, aObject);
  }

} // namespace XMLSerializerBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_XMLSerializerBinding_h__