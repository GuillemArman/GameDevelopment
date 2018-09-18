#ifndef VEC3_CLASS
#define VEC3_CLASS

template <class T>

class vec3
{
public:
	T x;
	T y;
	T z;

public:
	// Constructors 
	vec3(T x, T y, T z): // we can improve the constructor. no worries about name collision
	
		x(x),
		y(y),
		z(z)
	{}

	vec3<T>():x(0),y(0),z(0) 
	{

	}

	//Destructor
	//vec3<T>::~vec3<T>


	// Operators
	vec3<T> operator+(vec3<T> vector) const;
	vec3<T> operator-(vec3<T> vector) const;
	void operator+=(vec3<T> vector);
	void operator-=(vec3<T> vector);
	void operator=(vec3<T> vector) ;
	bool operator==(vec3<T> vector) const;


	// Methods
	void normalize();
	void zero();
	bool is_zero();
	double distance_to(vec3<T> vector);
	double get_module();
	vec3<T> get_vector_from(vec3<T> vector);



};


// OPERATOR +
template<class T>
vec3<T> vec3<T>::operator+(vec3<T> vector) const  
{
	vec3<T> ret(x + vector.x, y + vector.y, z + vector.z);
	return ret;
}


// OPERATOR - 
template<class T>
vec3<T> vec3<T>::operator-(vec3<T> vector) const
{
	vec3<T> ret(x - vector.x, y - vector.y, z - vector.z);
	return ret;
}

// OPERATOR +=
template<class T>
void vec3<T>::operator+=(vec3<T> vector)
{
	x += vector.x;
	y += vector.y;
	z += vector.z;
}

// OPERATOR -=
template<class T>
void vec3<T>::operator-=(vec3<T> vector)
{
	x -= vector.x;
	y -= vector.y;
	z -= vector.z;
}

// OPERATOR =
template<class T>
void vec3<T>::operator=(vec3<T> vector) 
{
	x = vector.x;
	y = vector.y;
	z = vector.z;
}

// OPERATOR ==
template<class T>
bool vec3<T>::operator==(vec3<T> vector) const
{
	return x == vector.x && y == vector.y && z == vector.z;

}

//METHODS

template<class T>
void vec3<T>::normalize()
{
	vec3<T> module = this;

	x = x / module.get_module();
	y = y / module.get_module();
	z = z / module.get_module();
}

template<class T>
void vec3<T>::zero()
{
	x = 0;
	y = 0;
	z = 0;
}

template<class T>
bool vec3<T>::is_zero()
{
	return x == 0 && y == 0 & z == 0;
}

template<class T>
double vec3<T>::distance_to(vec3 vector)
{
	int dx, dy, dz;
	dx = x - vector.x;
	dy = y - vector.y;
	dz = z - vector.z;
	return sqrt(pow(dx, 2) + pow(dy, 2) + pow(dz, 2));
}

template<class T>
double vec3<T>::get_module()
{
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

template<class T>
vec3<T> vec3<T>::get_vector_from(vec3<T> vector)
{
	vec3 newvector = vec3(x - vector.x, y - vector.y, z - vector.z);
	return newvector;
	
}


#endif 

