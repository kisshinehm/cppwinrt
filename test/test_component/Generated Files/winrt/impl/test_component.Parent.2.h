// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_test_component_Parent_2_H
#define WINRT_test_component_Parent_2_H
#include "winrt/impl/test_component.Parent.1.h"
WINRT_EXPORT namespace winrt::test_component::Parent
{
    struct ParentStruct
    {
        int32_t Value;
    };
    inline bool operator==(ParentStruct const& left, ParentStruct const& right) noexcept
    {
        return left.Value == right.Value;
    }
    inline bool operator!=(ParentStruct const& left, ParentStruct const& right) noexcept
    {
        return !(left == right);
    }
}
#endif
