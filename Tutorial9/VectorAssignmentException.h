#pragma once

#include "VectorRuntimeException.h"

namespace Week9 {

class VectorAssignmentException: public VectorRuntimeException {
public:
    VectorAssignmentException(const char* message) : VectorRuntimeException(message) {}

    virtual ~VectorAssignmentException() = default;
};
}  // namespace Week9
