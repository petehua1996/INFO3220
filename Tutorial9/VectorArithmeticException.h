#pragma once

#include "VectorRuntimeException.h"

namespace Week9 {

class VectorArithmeticException: public VectorRuntimeException {
public:
    VectorArithmeticException(const char* message) : VectorRuntimeException(message) {}

    virtual ~VectorArithmeticException() = default;
};
}  // namespace Week9
