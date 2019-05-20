#pragma once

#include <vector>

namespace week12 {
template <class T>
class SharedPointer {
public:
    /**
     * @brief SharedPointer creates an new instance of an empty shared pointer
     */
    SharedPointer(): value(nullptr), counter(new int(1)){}
    /**
     * @brief SharedPointer creates an new instance of a shared pointer storing a copy of item
     * @param item the item to copy to this shared pointer
     */
    SharedPointer(const T& item): value(new T(item)), counter(new int(1)){}

    /**
     * @brief SharedPointer creates a new instance of a shared pointer storing the raw pointer
     * @param rawPointer the pointer to store in the newly created shared pointer
     */
    SharedPointer(T* rawPointer): value(rawPointer), counter(new int(1)){}

    /**
     * @brief SharedPointer creates a new instance of a shared pointer based on the construction of an
     * existing shared pointers
     * @param sharedPointer the shared pointer that the new shared pointer will be based on
     */
    SharedPointer(const SharedPointer& sharedPointer): value(sharedPointer.get()), counter(sharedPointer.counter){
        (*counter) ++;
    }

    /**
     * @brief ~SharedPointer destructor for the shared pointer
     */
    ~SharedPointer(){
        (*counter) --;
        if((*counter) == 0){
            delete counter;
            delete value;
        }
    }

    /**
     * @brief get retrieves the raw pointer stored in the shared pointer
     * @return the raw pointer stored in the shared pointer
     */
    T* get() const{
        return value;
    }

    /**
     * @brief reset returns the shared pointer to a state as if it had been default constructed
     */
    void reset(){
        if((*counter) == 1){
            delete value;
            value = nullptr;
        } else {
            value = nullptr;
            (*counter) --;
        }
    }

    /**
     * @brief unique checks if the shared pointer object does not share ownership over its pointer with other
     * shared_ptr objects. Empty pointers are not unique (as they do not own any pointers)
     * @return true if the shared pointer is unique otherwise false
     */
    bool unique() const{
        if(value == nullptr) return false;
        return (*counter) == 1 ? true:false;
    }

    /**
     * @brief operator = copy assignments add the object as a shared owner of other's assets and the counter
     * is then increased by 1
     * @param sharedPointer which is assignment to this pointer
     * @return a reference to this pointer
     */
    SharedPointer& operator=(const SharedPointer& sharedPointer){
        value = sharedPointer.get();
        (*counter) --;
        counter = sharedPointer.counter;
        (*counter) ++;
        return *this;
    }

    /**
     * @brief operator * recovers a reference to the shared pointer
     * @return a reference to the shared pointer
     */
    T& operator*() const{
        return *value;
    }

    /**
     * @brief operator -> recovers the pointer to the object stored in the shared pointer
     * @return the pointer to the object stored in the shared pointer
     */
    T* operator->() const{
        return value;
    }

    /**
     * @brief operator bool return true iff the pointer is not null
     */
    operator bool() const{
        return value == nullptr ? false:true;
    }

    int * counter;
private:
    T* value;
};
}  // namespace week12

