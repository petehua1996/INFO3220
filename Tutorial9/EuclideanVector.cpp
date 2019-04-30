#include "EuclideanVector.h"

namespace Week9 {
EuclideanVector::EuclideanVector(unsigned int size)
    : values(size){}

EuclideanVector::EuclideanVector(const std::vector<double>& vector)
    :values(vector){}

EuclideanVector::EuclideanVector(const EuclideanVector& vector)
    :values(vector.size()){
    for (int i=0; i<vector.size(); i++) {
        values[i] = vector[i];
    }
}

EuclideanVector::EuclideanVector(const EuclideanVector&& vector)
    :values(vector.size()){
    for (int i=0; i<vector.size(); i++) {
        values[i] = vector[i];
    }
}

EuclideanVector::~EuclideanVector(){}

EuclideanVector& EuclideanVector::operator=(const EuclideanVector& vector){
    if(vector.size()!=size()){
        throw VectorAssignmentException("Incompatible Vector Sizes");
    }
    values = std::vector<double>(vector.size());
    for (int i=0; i<vector.size(); i++) {
        values[i] = vector[i];
    }
    return *this;
}

unsigned int EuclideanVector::size() const{
    return values.size();
}

bool EuclideanVector::operator==(const EuclideanVector &vector) const{
    if(vector.size()!=size()){
        return false;
    }
    for (int i=0; i<vector.size(); i++) {
        if((int)(values[i]*100) != (int)(vector[i]*100)) return false;
    }
    return true;
}

bool EuclideanVector::operator!=(const EuclideanVector &vector) const{
    return !operator==(vector);
}

double EuclideanVector::length() const{
    double val = 0.0;
    for(auto it = values.begin();it < values.end();it++){
        val += pow(*it, 2);
    }
    return sqrt(val);
}

double EuclideanVector::dotProduct(const EuclideanVector &vector) const{
    if(vector.size()!=size()){
        throw VectorArithmeticException("Vectors are not the same size");
    }
    double val = 0.0;
    for (int i=0; i<vector.size(); i++) {
        val += values[i] * vector[i];
    }
    return val;
}

EuclideanVector EuclideanVector::unitVector() const{
    std::vector<double> result(values);
    double len = length();
    for (int i=0; i<result.size(); i++) {
        result[i] /= len;
    }
    return EuclideanVector(result);
}

EuclideanVector EuclideanVector::operator+(const EuclideanVector &vector) const{
    if(vector.size()!=size()){
        throw VectorArithmeticException("Vectors are not the same size");
    }
    std::vector<double> result(values);
    for (int i=0; i<result.size(); i++) {
        result[i] += vector[i];
    }
    return EuclideanVector(result);
}

EuclideanVector EuclideanVector::operator-(const EuclideanVector &vector) const{
    if(vector.size()!=size()){
        throw VectorArithmeticException("Vectors are not the same size");
    }
    std::vector<double> result(values);
    for (int i=0; i<result.size(); i++) {
        result[i] -= vector[i];
    }
    return EuclideanVector(result);
}

EuclideanVector& EuclideanVector::operator+=(const EuclideanVector &vector){
    if(vector.size()!=size()){
        throw VectorArithmeticException("Vectors are not the same size");
    }
    for (int i=0; i<values.size(); i++) {
        values[i] += vector[i];
    }
    return *this;
}

EuclideanVector& EuclideanVector::operator-=(const EuclideanVector &vector){
    if(vector.size()!=size()){
        throw VectorArithmeticException("Vectors are not the same size");
    }
    for (int i=0; i<values.size(); i++) {
        values[i] -= vector[i];
    }
    return *this;
}

EuclideanVector& EuclideanVector::operator*=(double scalingValue){
    for (int i=0; i<values.size(); i++) {
        values[i] *= scalingValue;
    }
    return *this;
}

EuclideanVector& EuclideanVector::operator/=(double scalingValue){
    for (int i=0; i<values.size(); i++) {
        values[i] /= scalingValue;
    }
    return *this;
}

double& EuclideanVector::operator[](unsigned int index){
    if(index >= values.size()){
        throw VectorIndexOutOfBoundsException("Index is greater than or equal to the allocated size");
    }
    return values[index];
}

const double& EuclideanVector::operator[](unsigned int index) const{
    if(index >= values.size()){
        throw VectorIndexOutOfBoundsException("Index is greater than or equal to the allocated size");
    }
    return values[index];
}

}
