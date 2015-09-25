#pragma once

#include <Unknwnbase.h>

namespace simply { namespace clr { namespace profiler
{
    [uuid("{F2AC8F68-16D5-4D3B-A508-854966D36493}")]
    class factory : public IClassFactory
    {
    public:
        factory();
        static HRESULT get_class_object(const GUID& classId, const GUID& interfaceId, void** object);

    private:
        unsigned long referenceCount;

        HRESULT __stdcall QueryInterface(const GUID& interfaceId, void** object) noexcept override;
        ULONG __stdcall AddRef(void) noexcept override;
        ULONG __stdcall Release(void) noexcept override;
        HRESULT __stdcall CreateInstance(IUnknown* outer, const GUID& interfaceId, void** object) noexcept override;
        HRESULT __stdcall LockServer(BOOL lock) noexcept override;
    };
}}}