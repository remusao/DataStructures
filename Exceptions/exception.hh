#ifndef EXCEPTION_HH_
# define EXCEPTION_HH_

# include <string>

namespace Structures
{
    class Exception
    {
        public:
            Exception();
            Exception(const char* message);
            virtual ~Exception() = default;

            virtual const std::string& what() const final;

        private:
            std::string message_;
    };

    class OutOfBound final : Exception
    {
        public:
            ~OutOfBound() override = default;
            OutOfBound();
    };

// Implementation
# include "exception.hxx"
}

#endif /* !EXCEPTION_HH_ */
