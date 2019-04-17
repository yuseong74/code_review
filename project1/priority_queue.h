#include <queue>

template <typename T> 
class templatePriorityQueue {
	private:
		std::priority_queue<T> storage;
	public:
		templatePriorityQueue() { }
		~templatePriorityQueue() { }
		bool empty() const
		{
			return storage.empty();
		}

		const T& top() const
		{
			return storage.top();
		}

		int size()
		{
			return storage.size();
		}
		void push(const T& val)
		{
			storage.push(val);
		}

		void pop()
		{
			storage.pop();
		}
};
