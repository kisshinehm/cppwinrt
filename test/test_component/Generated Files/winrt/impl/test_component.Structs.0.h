// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_test_component_Structs_0_H
#define WINRT_test_component_Structs_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
}
WINRT_EXPORT namespace winrt::test_component::Structs
{
    struct All;
    struct Inner;
}
namespace winrt::impl
{
    template <> struct category<test_component::Structs::All>{ using type = struct_category<Windows::Foundation::Numerics::float3x2, Windows::Foundation::Numerics::float4x4, Windows::Foundation::Numerics::plane, Windows::Foundation::Numerics::quaternion, Windows::Foundation::Numerics::float2, Windows::Foundation::Numerics::float3, Windows::Foundation::Numerics::float4, winrt::guid>; };
    template <> struct category<test_component::Structs::Inner>{ using type = struct_category<int32_t>; };
    template <> inline constexpr auto& name_v<test_component::Structs::All>{ L"test_component.Structs.All" };
    template <> inline constexpr auto& name_v<test_component::Structs::Inner>{ L"test_component.Structs.Inner" };
#ifndef WINRT_LEAN_AND_MEAN
#endif
    struct struct_test_component_Structs_All
    {
        Windows::Foundation::Numerics::float3x2 A;
        Windows::Foundation::Numerics::float4x4 B;
        Windows::Foundation::Numerics::plane C;
        Windows::Foundation::Numerics::quaternion D;
        Windows::Foundation::Numerics::float2 E;
        Windows::Foundation::Numerics::float3 F;
        Windows::Foundation::Numerics::float4 G;
        winrt::guid H;
    };
    template <> struct abi<test_component::Structs::All>
    {
        using type = struct_test_component_Structs_All;
    };
    struct struct_test_component_Structs_Inner
    {
        int32_t InnerValue;
    };
    template <> struct abi<test_component::Structs::Inner>
    {
        using type = struct_test_component_Structs_Inner;
    };
}
#endif
