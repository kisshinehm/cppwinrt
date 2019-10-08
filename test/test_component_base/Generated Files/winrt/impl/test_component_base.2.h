// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_test_component_base_2_H
#define WINRT_test_component_base_2_H
#include "winrt/impl/test_component_base.1.h"
WINRT_EXPORT namespace winrt::test_component_base
{
    struct __declspec(empty_bases) HierarchyA : test_component_base::IHierarchyA
    {
        HierarchyA(std::nullptr_t) noexcept {}
        HierarchyA(void* ptr, take_ownership_from_abi_t) noexcept : test_component_base::IHierarchyA(ptr, take_ownership_from_abi) {}
        HierarchyA();
        HierarchyA(param::hstring const& name);
    };
    struct __declspec(empty_bases) HierarchyB : test_component_base::IHierarchyB,
        impl::base<HierarchyB, test_component_base::HierarchyA>,
        impl::require<HierarchyB, test_component_base::IHierarchyA>
    {
        HierarchyB(std::nullptr_t) noexcept {}
        HierarchyB(void* ptr, take_ownership_from_abi_t) noexcept : test_component_base::IHierarchyB(ptr, take_ownership_from_abi) {}
        HierarchyB();
        HierarchyB(param::hstring const& name);
    };
}
#endif
