#ifndef VECTOR_H
#define VECTOR_H

#include <stdexcept>
#include <cmath>

/**
 * @brief The Vector class is list of floats representing a mathematical vector
 */
class Vector
{
public:
    /**
     * @brief Constructs the vector allocating space for size number of floats and initialize all values to zero
     * @param size
     */
    Vector(unsigned int size)
        :m_elements(new float[size]()),
          m_size(size){}

    /**
     * @brief copy constructor that replaces default shallow copy with a deep copy
     * @param other
     */
    Vector(const Vector& other)
        :m_elements(new float[other.size()]()),
          m_size(other.size()){
        for (int i=0;i<other.size();i++) {
            m_elements[i] = other[i];
        }
    }

    /**
     * @brief the assignment operator
     * @param other
     * @return
     */
    Vector & operator=(const Vector& other){
        delete [] m_elements;
        m_elements = new float[other.size()]();
        m_size = other.size();
        for (int i=0;i<other.size();i++) {
            m_elements[i] = other[i];
        }
        return *this;
    }

    /**
     * @brief calculates the euclidean length of the vector using L = sqrt(a*a + b*b + c*c ...) for all elements in the vector
     * @return the euclidean length of the vector
     */
    float length()const{
        float length = 0.0;
        for (int i=0;i<m_size;i++) {
            length+=m_elements[i]*m_elements[i];
        }
        return sqrt(length);
    }

    /**
     * @brief operator + adds two vectors together a3 = a1+a2, b3 = b1 + b2 ... for all elements in the two vectors. If the vectors are of
     * different dimensions (i.e. the sizes are different) then this throws std::range_error
     * @param other vector to add
     * @return the vector of which each element is the sum of the two parent elements
     */
    Vector operator+(const Vector &other)const{
        if(other.size() != m_size){
            throw std::range_error("Unmatch Vector Sizes");
        }
        Vector v(other);
        for (int i=0;i<m_size;i++) {
            v[i] += m_elements[i];
        }
        return v;
    }

    /**
     * @brief operator [] returns a reference to the float at the provided index. Throws std::out_of_range if index is >= size()
     * @param index
     * @return
     */
    float& operator[](unsigned int index){
        return m_elements[index];
    }

    float& operator[](unsigned int index) const{
        return m_elements[index];
    }

    /**
     * @brief
     * @return the number of elements in the vector
     */
    unsigned int size()const{
        return m_size;
    }

    ~Vector(){
        delete [] m_elements;
    }


private:
    unsigned int m_size;
    float * m_elements;
};

#endif // VECTOR_H
