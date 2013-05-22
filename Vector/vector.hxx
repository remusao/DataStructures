
//
// Constructors
//

template <typename T>
Vector<T>::Vector()
    : size_(100),
      count_(0),
      vector_(new T[100])
{
}


template <typename T>
Vector<T>::Vector(std::size_t size)
    : size_(size),
      count_(0),
      vector_(new T[size])
{
}


template <typename T>
Vector<T>::Vector(std::size_t size, const T& elt)
    : size_(size),
      count_(size),
      vector_(new T[size])
{
    for (int i = 0; i < size_; ++i)
        vector_[i] = elt;
}


template <typename T>
Vector<T>::~Vector()
{
    if (vector_ != nullptr)
    {
        delete vector_;
        vector_ = nullptr;
    }
}


// Operators

template <typename T>
T& Vector<T>::operator[](std::size_t i)
{
#ifdef DEBUG
    assert(i >= 0 && i < size_);
#endif
    return vector_[i];
}


template <typename T>
const T& Vector<T>::operator[](std::size_t i) const
{
#ifdef DEBUG
    assert(i >= 0 && i < size_);
#endif
    return vector_[i];
}


//
// Methods
//

template <typename T>
void Vector<T>::push_back(const T& elt)
{
    // Resize
    if (count_ >= size_)
    {
        T *newVector = new T[size_ * 1.5];
        std::copy(vector_, vector_ + size_, newVector);
        delete [] vector_;
        vector_ = newVector;
        size_ *= 1.5;
    }

    vector_[count_++] = elt;
}


template <typename T>
void Vector<T>::pop_back()
{
#ifdef DEBUG
    assert(count_ > 0);
#endif
    --count_;
}


template <typename T>
T& Vector<T>::back()
{
#ifdef DEBUG
    assert(count_ > 0);
#endif
    return vector_[count_ - 1];
}


template <typename T>
const T& Vector<T>::back() const
{
#ifdef DEBUG
    assert(count_ > 0);
#endif
    return vector_[count_ - 1];
}
