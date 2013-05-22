

template <typename T, std::size_t N>
T& Array<T, N>::operator[](std::size_t i)
{
#ifdef DEBUG
    assert(i >= 0 && i < N);
#else
    throw OutOfBound();
#endif
    return array_[i];
}


template <typename T, std::size_t N>
const T& Array<T, N>::operator[](std::size_t i) const
{
#ifdef DEBUG
    assert(i >= 0 && i < N);
#else
    throw OutOfBound();
#endif
    return array_[i];
}


template <typename T, std::size_t N>
T& Array<T, N>::at(std::size_t i)
{
    return *this[i];
}


template <typename T, std::size_t N>
const T& Array<T, N>::at(std::size_t i) const
{
    return *this[i];
}


template <typename T, std::size_t N>
const T& Array<T, N>::front() const
{
    return this->front();
}


template <typename T, std::size_t N>
T& Array<T, N>::front()
{
    static_assert(N > 0, "Empty array has no first element");
    return array_[0];
}


template <typename T, std::size_t N>
const T& Array<T, N>::back() const
{
    return this->back();
}


template <typename T, std::size_t N>
T& Array<T, N>::back()
{
    static_assert(N > 0, "Empty array has no last element");
    return array_[N - 1];
}


template <typename T, std::size_t N>
std::size_t Array<T, N>::size() const
{
    return N;
}


template <typename T, std::size_t N>
std::size_t Array<T, N>::max_size() const
{
    return N;
}


template <typename T, std::size_t N>
bool Array<T, N>::empty() const
{
    return (N == 0);
}


template <typename T, std::size_t N>
T* Array<T, N>::data() noexcept
{
    return array_;
}


template <typename T, std::size_t N>
const T* Array<T, N>::data() const noexcept
{
    return array_;
}


template <typename T, std::size_t N>
void Array<T, N>::fill(const T& value)
{
    for (std::size_t i = 0; i < N; ++i)
        array_ = value;
}
