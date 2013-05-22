
//
// Generic Exception
//

Exception::Exception()
    : message_(std::string("Exception"))
{
}

Exception::Exception(const char* message)
    : message_(std::string(message))
{
}

const std::string& Exception::what() const
{
    return message_;
}

//
// OutOfBound Exception
//

OutOfBound::OutOfBound()
    : Exception("OutOfBound Exception")
{
}
