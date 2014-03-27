/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_WindowBinding_h__
#define mozilla_dom_WindowBinding_h__

#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/CallbackFunction.h"
#include "mozilla/dom/DOMJSClass.h"
#include "mozilla/dom/DOMJSProxyHandler.h"

namespace mozilla {
namespace dom {

class FrameRequestCallback;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

class FrameRequestCallback : public CallbackFunction
{
public:
  explicit inline FrameRequestCallback(JSObject* aCallback)
    : CallbackFunction(aCallback)
  {
  }

  explicit inline FrameRequestCallback(CallbackFunction* aOther)
    : CallbackFunction(aOther)
  {
  }

  template <typename T>
  inline void
  Call(const T& thisObj, double time, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions)
  {
    CallSetup s(CallbackPreserveColor(), aRv, aExceptionHandling);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    JS::Rooted<JSObject*> thisObjJS(s.GetContext(),
      WrapCallThisObject(s.GetContext(), CallbackPreserveColor(), thisObj));
    if (!thisObjJS) {
      aRv.Throw(NS_ERROR_FAILURE);
      return;
    }
    return Call(s.GetContext(), thisObjJS, time, aRv);
  }

  inline void
  Call(double time, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions)
  {
    CallSetup s(CallbackPreserveColor(), aRv, aExceptionHandling);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    return Call(s.GetContext(), JS::NullPtr(), time, aRv);
  }

private:
  void Call(JSContext* cx, JS::Handle<JSObject*> aThisObj, double time, ErrorResult& aRv);
};


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_WindowBinding_h__