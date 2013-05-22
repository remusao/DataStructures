#ifndef VECTOR_HH_
# define VECTOR_HH_

# include <cstddef>
# include <algorithm>

# ifdef DEBUG
#  include <assert.h>
# endif

namespace Structures
{
    template <typename T>
    class Vector
    {
        public:
            ~Vector();
            Vector();
            Vector(const Vector&) = default;
            Vector(Vector&&) = default;
            Vector(std::size_t size);
            Vector(std::size_t size, const T& elt);

            // Operators
            Vector& operator=(const Vector&) = default;
            Vector& operator=(Vector&&) = default;

            // Methods
            T& operator[](std::size_t i);
            const T& operator[](std::size_t i) const;

            void push_back(const T& elt);
            void pop_back();
            const T& back() const;
            T& back();

        private:
            std::size_t size_;
            std::size_t count_;
            T*          vector_;
    };

// Implementation
# include "vector.hxx"
}

#endif /* !VECTOR_HH_ */
