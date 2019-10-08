// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#ifndef WINRT_test_component_Delegates_H
#define WINRT_test_component_Delegates_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.3.4.5"), "Mismatched C++/WinRT headers.");
#include "winrt/test_component.h"
#include "winrt/impl/test_component.Delegates.2.h"
namespace winrt::impl
{
    template <typename H> struct delegate<test_component::Delegates::AgileDelegate, H> final : implements_delegate<test_component::Delegates::AgileDelegate, H>
    {
        delegate(H&& handler) : implements_delegate<test_component::Delegates::AgileDelegate, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke() noexcept final try
        {
            (*this)();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<test_component::Delegates::InDelegate, H> final : implements_delegate<test_component::Delegates::InDelegate, H>
    {
        delegate(H&& handler) : implements_delegate<test_component::Delegates::InDelegate, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* value) noexcept final try
        {
            (*this)(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<test_component::Delegates::OutInt32Delegate, H> final : implements_delegate<test_component::Delegates::OutInt32Delegate, H>
    {
        delegate(H&& handler) : implements_delegate<test_component::Delegates::OutInt32Delegate, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(int32_t* value) noexcept final try
        {
            (*this)(*value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<test_component::Delegates::OutStringArrayDelegate, H> final : implements_delegate<test_component::Delegates::OutStringArrayDelegate, H>
    {
        delegate(H&& handler) : implements_delegate<test_component::Delegates::OutStringArrayDelegate, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(uint32_t* __valueSize, void*** value) noexcept final try
        {
            clear_abi(value);
            (*this)(detach_abi<hstring>(__valueSize, value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<test_component::Delegates::OutStringDelegate, H> final : implements_delegate<test_component::Delegates::OutStringDelegate, H>
    {
        delegate(H&& handler) : implements_delegate<test_component::Delegates::OutStringDelegate, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void** value) noexcept final try
        {
            clear_abi(value);
            (*this)(*reinterpret_cast<hstring*>(value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<test_component::Delegates::RefStringArrayDelegate, H> final : implements_delegate<test_component::Delegates::RefStringArrayDelegate, H>
    {
        delegate(H&& handler) : implements_delegate<test_component::Delegates::RefStringArrayDelegate, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(uint32_t __valueSize, void** value) noexcept final try
        {
            zero_abi<hstring>(value, __valueSize);
            (*this)(array_view<hstring>(reinterpret_cast<hstring*>(value), reinterpret_cast<hstring*>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<test_component::Delegates::ReturnInt32Delegate, H> final : implements_delegate<test_component::Delegates::ReturnInt32Delegate, H>
    {
        delegate(H&& handler) : implements_delegate<test_component::Delegates::ReturnInt32Delegate, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(int32_t* result) noexcept final try
        {
            *result = detach_from<int32_t>((*this)());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<test_component::Delegates::ReturnStringArrayDelegate, H> final : implements_delegate<test_component::Delegates::ReturnStringArrayDelegate, H>
    {
        delegate(H&& handler) : implements_delegate<test_component::Delegates::ReturnStringArrayDelegate, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(uint32_t* __resultSize, void*** result) noexcept final try
        {
            clear_abi(result);
            std::tie(*__resultSize, *result) = detach_abi((*this)());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<test_component::Delegates::ReturnStringDelegate, H> final : implements_delegate<test_component::Delegates::ReturnStringDelegate, H>
    {
        delegate(H&& handler) : implements_delegate<test_component::Delegates::ReturnStringDelegate, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void** result) noexcept final try
        {
            clear_abi(result);
            *result = detach_from<hstring>((*this)());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
WINRT_EXPORT namespace winrt::test_component::Delegates
{
    template <typename L> AgileDelegate::AgileDelegate(L handler) :
        AgileDelegate(impl::make_delegate<AgileDelegate>(std::forward<L>(handler)))
    {
    }
    template <typename F> AgileDelegate::AgileDelegate(F* handler) :
        AgileDelegate([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> AgileDelegate::AgileDelegate(O* object, M method) :
        AgileDelegate([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> AgileDelegate::AgileDelegate(com_ptr<O>&& object, M method) :
        AgileDelegate([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> AgileDelegate::AgileDelegate(weak_ref<O>&& object, M method) :
        AgileDelegate([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto AgileDelegate::operator()() const
    {
        check_hresult((*(impl::abi_t<AgileDelegate>**)this)->Invoke());
    }
    template <typename L> InDelegate::InDelegate(L handler) :
        InDelegate(impl::make_delegate<InDelegate>(std::forward<L>(handler)))
    {
    }
    template <typename F> InDelegate::InDelegate(F* handler) :
        InDelegate([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> InDelegate::InDelegate(O* object, M method) :
        InDelegate([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> InDelegate::InDelegate(com_ptr<O>&& object, M method) :
        InDelegate([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> InDelegate::InDelegate(weak_ref<O>&& object, M method) :
        InDelegate([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto InDelegate::operator()(param::hstring const& value) const
    {
        check_hresult((*(impl::abi_t<InDelegate>**)this)->Invoke(*(void**)(&value)));
    }
    template <typename L> OutInt32Delegate::OutInt32Delegate(L handler) :
        OutInt32Delegate(impl::make_delegate<OutInt32Delegate>(std::forward<L>(handler)))
    {
    }
    template <typename F> OutInt32Delegate::OutInt32Delegate(F* handler) :
        OutInt32Delegate([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> OutInt32Delegate::OutInt32Delegate(O* object, M method) :
        OutInt32Delegate([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> OutInt32Delegate::OutInt32Delegate(com_ptr<O>&& object, M method) :
        OutInt32Delegate([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> OutInt32Delegate::OutInt32Delegate(weak_ref<O>&& object, M method) :
        OutInt32Delegate([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto OutInt32Delegate::operator()(int32_t& value) const
    {
        check_hresult((*(impl::abi_t<OutInt32Delegate>**)this)->Invoke(&value));
    }
    template <typename L> OutStringArrayDelegate::OutStringArrayDelegate(L handler) :
        OutStringArrayDelegate(impl::make_delegate<OutStringArrayDelegate>(std::forward<L>(handler)))
    {
    }
    template <typename F> OutStringArrayDelegate::OutStringArrayDelegate(F* handler) :
        OutStringArrayDelegate([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> OutStringArrayDelegate::OutStringArrayDelegate(O* object, M method) :
        OutStringArrayDelegate([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> OutStringArrayDelegate::OutStringArrayDelegate(com_ptr<O>&& object, M method) :
        OutStringArrayDelegate([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> OutStringArrayDelegate::OutStringArrayDelegate(weak_ref<O>&& object, M method) :
        OutStringArrayDelegate([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto OutStringArrayDelegate::operator()(com_array<hstring>& value) const
    {
        check_hresult((*(impl::abi_t<OutStringArrayDelegate>**)this)->Invoke(impl::put_size_abi(value), put_abi(value)));
    }
    template <typename L> OutStringDelegate::OutStringDelegate(L handler) :
        OutStringDelegate(impl::make_delegate<OutStringDelegate>(std::forward<L>(handler)))
    {
    }
    template <typename F> OutStringDelegate::OutStringDelegate(F* handler) :
        OutStringDelegate([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> OutStringDelegate::OutStringDelegate(O* object, M method) :
        OutStringDelegate([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> OutStringDelegate::OutStringDelegate(com_ptr<O>&& object, M method) :
        OutStringDelegate([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> OutStringDelegate::OutStringDelegate(weak_ref<O>&& object, M method) :
        OutStringDelegate([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto OutStringDelegate::operator()(hstring& value) const
    {
        check_hresult((*(impl::abi_t<OutStringDelegate>**)this)->Invoke(impl::bind_out(value)));
    }
    template <typename L> RefStringArrayDelegate::RefStringArrayDelegate(L handler) :
        RefStringArrayDelegate(impl::make_delegate<RefStringArrayDelegate>(std::forward<L>(handler)))
    {
    }
    template <typename F> RefStringArrayDelegate::RefStringArrayDelegate(F* handler) :
        RefStringArrayDelegate([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> RefStringArrayDelegate::RefStringArrayDelegate(O* object, M method) :
        RefStringArrayDelegate([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> RefStringArrayDelegate::RefStringArrayDelegate(com_ptr<O>&& object, M method) :
        RefStringArrayDelegate([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> RefStringArrayDelegate::RefStringArrayDelegate(weak_ref<O>&& object, M method) :
        RefStringArrayDelegate([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto RefStringArrayDelegate::operator()(array_view<hstring> value) const
    {
        check_hresult((*(impl::abi_t<RefStringArrayDelegate>**)this)->Invoke(value.size(), put_abi(value)));
    }
    template <typename L> ReturnInt32Delegate::ReturnInt32Delegate(L handler) :
        ReturnInt32Delegate(impl::make_delegate<ReturnInt32Delegate>(std::forward<L>(handler)))
    {
    }
    template <typename F> ReturnInt32Delegate::ReturnInt32Delegate(F* handler) :
        ReturnInt32Delegate([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> ReturnInt32Delegate::ReturnInt32Delegate(O* object, M method) :
        ReturnInt32Delegate([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> ReturnInt32Delegate::ReturnInt32Delegate(com_ptr<O>&& object, M method) :
        ReturnInt32Delegate([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> ReturnInt32Delegate::ReturnInt32Delegate(weak_ref<O>&& object, M method) :
        ReturnInt32Delegate([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto ReturnInt32Delegate::operator()() const
    {
        int32_t result;
        check_hresult((*(impl::abi_t<ReturnInt32Delegate>**)this)->Invoke(&result));
        return result;
    }
    template <typename L> ReturnStringArrayDelegate::ReturnStringArrayDelegate(L handler) :
        ReturnStringArrayDelegate(impl::make_delegate<ReturnStringArrayDelegate>(std::forward<L>(handler)))
    {
    }
    template <typename F> ReturnStringArrayDelegate::ReturnStringArrayDelegate(F* handler) :
        ReturnStringArrayDelegate([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> ReturnStringArrayDelegate::ReturnStringArrayDelegate(O* object, M method) :
        ReturnStringArrayDelegate([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> ReturnStringArrayDelegate::ReturnStringArrayDelegate(com_ptr<O>&& object, M method) :
        ReturnStringArrayDelegate([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> ReturnStringArrayDelegate::ReturnStringArrayDelegate(weak_ref<O>&& object, M method) :
        ReturnStringArrayDelegate([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto ReturnStringArrayDelegate::operator()() const
    {
        uint32_t result_impl_size{};
        void** result{};
        check_hresult((*(impl::abi_t<ReturnStringArrayDelegate>**)this)->Invoke(&result_impl_size, &result));
        return com_array<hstring>{ result, result_impl_size, take_ownership_from_abi };
    }
    template <typename L> ReturnStringDelegate::ReturnStringDelegate(L handler) :
        ReturnStringDelegate(impl::make_delegate<ReturnStringDelegate>(std::forward<L>(handler)))
    {
    }
    template <typename F> ReturnStringDelegate::ReturnStringDelegate(F* handler) :
        ReturnStringDelegate([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> ReturnStringDelegate::ReturnStringDelegate(O* object, M method) :
        ReturnStringDelegate([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> ReturnStringDelegate::ReturnStringDelegate(com_ptr<O>&& object, M method) :
        ReturnStringDelegate([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> ReturnStringDelegate::ReturnStringDelegate(weak_ref<O>&& object, M method) :
        ReturnStringDelegate([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto ReturnStringDelegate::operator()() const
    {
        void* result{};
        check_hresult((*(impl::abi_t<ReturnStringDelegate>**)this)->Invoke(&result));
        return hstring{ result, take_ownership_from_abi };
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
#endif
}
#endif
