// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

void* winrt_make_test_component_Simple()
{
    return winrt::detach_abi(winrt::make<winrt::test_component::factory_implementation::Simple>());
}
WINRT_EXPORT namespace winrt::test_component
{
    Simple::Simple() :
        Simple(make<test_component::implementation::Simple>())
    {
    }
}
