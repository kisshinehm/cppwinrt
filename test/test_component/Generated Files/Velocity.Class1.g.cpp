// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

void* winrt_make_test_component_Velocity_Class1()
{
    return winrt::detach_abi(winrt::make<winrt::test_component::Velocity::factory_implementation::Class1>());
}
WINRT_EXPORT namespace winrt::test_component::Velocity
{
    Class1::Class1() :
        Class1(make<test_component::Velocity::implementation::Class1>())
    {
    }
}
