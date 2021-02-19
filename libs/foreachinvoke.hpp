#include <utility>
#include <functional>

template <typename Iter, typename Callable, typename... Args>
void foreach(Iter current, Iter end, Callable op, Args const& ... args)
{
	while(current != end)
	{
		std::invoke(op, args..., *current);
		++current;
	}
}

template <typename Callable, typename... Args>
decltype(auto) call(Callable& op, Args&& ... args)
{
	if constexpr(std::is_same_v<std::invoke_result_t<Callable, Args...>,void>)
	{
		return std::invoke(std::forward<Callable>(op), std::forward<Args>(args)...);
	}
	else
	{
		decltype(auto) ret{std::invoke(std::forward<Callable>(op), std::forward<Args>(args)...)};
		return ret;
	}
}
