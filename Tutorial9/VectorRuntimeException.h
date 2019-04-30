#pragma once

namespace Week9 {

class VectorRuntimeException {
public:
    VectorRuntimeException(const char* message) : m_message(message) {}

    virtual ~VectorRuntimeException() = default;

    virtual const char* getMessage() const {
        return m_message;
    }

protected:
    const char* m_message;
};
}  // namespace Week9
