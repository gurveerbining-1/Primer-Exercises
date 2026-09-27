// Define your own version of StrBlobPtr and update your StrBlob
// class with the appropriate friend declaration and begin and end members.

#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <initializer_list>
#include <stdexcept>

class StrBlobPtr;

class StrBlob {
	friend class StrBlobPtr;
	public:
		typedef std::vector<std::string>::size_type size_type;
		StrBlob();
		StrBlob(std::initializer_list<std::string> il);
		size_type size() const { return data->size(); }
		bool empty() const { return data->empty(); }
		// add and remove elements
		void push_back(const std::string &t) {data->push_back(t);}
		void pop_back();
		// element access
		std::string& front();
		std::string& back();
		// other members as in § 12.1.1 (p. 456)
		StrBlobPtr begin(); // return StrBlobPtr to the first element
		StrBlobPtr end(); // and one past the last element
	private:
		std::shared_ptr<std::vector<std::string>> data;
		// throws msg if data[i] isn’t valid
		void check(size_type i, const std::string &msg) const;
};

class StrBlobPtr{
	public:
		StrBlobPtr() : curr(0) {}
		StrBlobPtr(StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz){}
		std::string& deref() const;
		StrBlobPtr& incr();
	private:
		// check returns a shared_ptr to the vector if the check succeeds
		std::shared_ptr<std::vector<std::string>> check(std::size_t, const std::string&) const;
		//store a weak_ptr, which means the underlying vector might be destroyed
		std::weak_ptr<std::vector<std::string>> wptr;
		std::size_t curr;	// current position within the array
};

std::shared_ptr<std::vector<std::string>> StrBlobPtr::check(std::size_t i, const std::string &msg) const{
	auto ret = wptr.lock();
	if(!ret){
		throw std::runtime_error("unbound StrBlobPtr");
	}
	if(i >= ret->size()){
		throw std::out_of_range(msg);
	}
	return ret;
}

std::string& StrBlobPtr::deref() const{
	auto ptr = check(curr, "dereferenced out of range");
	return (*ptr)[curr];
}

StrBlobPtr& StrBlobPtr::incr(){
	auto ptr = check(curr, "dereferenced out of range");
	++curr;
	return *this;
}

StrBlobPtr StrBlob::begin() { return StrBlobPtr(*this); }
StrBlobPtr StrBlob::end() { return StrBlobPtr(*this, data->size()); }

StrBlob::StrBlob() : data(std::make_shared<std::vector<std::string>>()){
   
}

StrBlob::StrBlob(std::initializer_list<std::string> il) : data(std::make_shared<std::vector<std::string>>(il)){
    
}

std::string& StrBlob::front(){
    check(0, "ERROR data[i] does not exist");
    return data->front();
}

std::string& StrBlob::back(){
    check(0, "ERROR data[i] does not exist");
    return data->back();
}

void StrBlob::pop_back(){
    check(0, "ERROR data[i] does not exist");
    data->pop_back();
}

void StrBlob::check(size_type i, const std::string &msg) const {
    if(i >= data->size()){
        throw std::out_of_range(msg);
    }
}