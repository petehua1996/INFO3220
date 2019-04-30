#pragma once

#include "VectorRuntimeException.h"

namespace Week9 {

class VectorIndexOutOfBoundsException: public VectorRuntimeException {
public:
    VectorIndexOutOfBoundsException(const char* message) : VectorRuntimeException(message) {}

    virtual ~VectorIndexOutOfBoundsException() = default;
};
}  // namespace Week9
