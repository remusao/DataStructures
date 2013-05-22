#ifndef ARRAY_HH_
# define ARRAY_HH_

# include <cstddef>
# include <exception.hh>

# ifdef DEBUG
#  include <assert.h>
# endif

namespace Structures
{
    template <typename T, std::size_t N>
    class Array
    {
        public:
            ~Array() = default;

            // Constructors
            Array() = default;
            Array(Array&&) = default;
            Array(const Array&) = default;

            // Operators
            Array& operator=(Array&&) = default;
            Array& operator=(const Array&) = default;

            //
            // Element access
            //

            T& operator[](std::size_t i);
            const T& operator[](std::size_t i) const;

            T& at(std::size_t i);
            const T& at(std::size_t i) const;

            const T& front() const;
            T& front();

            const T& back() const;
            T& back();

            T* data() noexcept;
            const T* data() const noexcept;

            //
            // Capacity
            //

            std::size_t size() const;
            std::size_t max_size() const;
            bool empty() const;

            //
            // Modifiers
            //

            void fill(const T& value);

        private:
            T array_[N];
    };

// Implementation
# include "array.hxx"
}

#endif /* !ARRAY_HH_ */
