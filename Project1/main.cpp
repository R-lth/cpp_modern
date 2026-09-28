#include <iostream>
using namespace std;

// 자료형만 다른 여러 함수 // 너무 많은 오버로드(다형성)
//int Add(int num1, int num2) { return num1 + num2; }
//float Add(float num1, float num2) { return num1 + num2; }
//double Add(double num1, double num2) { return num1 + num2; }

// 함수 템플릿 // 제너릭 코드(다형성)
//template<typename T>
//template<class T>
//T Add(T num1, T  num2) { return num1 + num2; }

// 템플릿 함수
//int Add<int>(int num1, int num2) { return num1 + num2; }
//float Add<float>(float num1, float num2) { return num1 + num2; }
//double Add<double>(double num1, double num2) { return num1 + num2; }

// 템플릿으로 바꿔 보세요.
//template <class T1, class T2>
//void ShowData(double num) 
//{
//	cout << (T1)num << ", " << (T2)num << '\n';
//}

//template<typename T>
//T Max(T lhs, T rhs) { return lhs > rhs ? lhs : rhs; }

//template <typename T, typename U>
//decltype(auto) Max(T lhs, U rhs) 
//{
//	return (lhs > rhs ? lhs : rhs);
//}
//
//template <typename T>
//class CTest 
//{
//public: 
//	CTest(T param) : ndata(param) {}
//	~CTest() {}
//
//	void SetData(T val) { ndata = val; }
//	T GetData() { return ndata; }
//
//private:
//	T ndata;
//	//int ndata;
//};
//
//template<typename T>
//class Point 
//{
//public:
//	Point(T x = 0, T y = 0);
//	void ShowPosition() const;
//
//private:
//	T xpos, ypos;
//};
//
//template <typename T>
//Point<T>::Point(T x, T y) : xpos(x), ypos(y) {}
//
//template <typename T>
//void Point<T>::ShowPosition() const {}

//template <typename T>
//class Data 
//{
//public:
//	Data(T v);
//
//public:
//	void CopyData(T& v);
//	T GetData();
//
//private:
//	T value;
//};
//
//template <typename T>
//Data<T>::Data(T v) : value(v) {}
//
//template <typename T>
//void Data<T>::CopyData(T& v) { value = v; }
//
//template <typename T>
//T Data<T>::GetData() { return value; }

//template <typename T>
//T Max(T a, T b)
//{
//	return a > b ? a : b;
//}
//
//template <>
//const char* Max(const char* a, const char* b) 
//{
//	return strcmp(a, b) > 0 ? a : b; // 문자열 비고
//}

template <typename T> void Swap(T& a, T& b); // 선언
template <> void Swap<double>(double&, double&); // 선언

int main() 
{
	int a = 2, b = 3;
	Swap(a, b);
	cout << a << " " << b << endl;

	double c = 1.234, d = 4.321;
	Swap(c, d);
	cout << c << " " << d << endl;

	/*cout << Max(11, 15) << '\n';
	cout << Max(3.5, 7.5) << '\n';
	cout << Max('T', 'Q') << '\n';

	cout << Max("Simple", "Best") << '\n';*/

	/*Data<int> obj1(10);

	int a = 10;
	obj1.CopyData(a);

	cout << obj1.GetData() << '\n';*/

	/*int a = 1;
	int sum = Add<double>(1.0, 2.0);
	sum = Add(1, 2);*/

	/*int a = 1;
	Max<int>(1, 2);

	ShowData<char, int>(65);
	ShowData<double, float>(67);*/

	/*CTest<int> a(1);
	cout << a.GetData() << '\n';

	CTest<float> b(1.5f);
	cout << b.GetData() << '\n';*/
}