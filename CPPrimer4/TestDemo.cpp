#include "TestDemo.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::bitset;
using std::flush;
using std::list;
using std::find;
using std::set;
using std::map;
using std::pair;

//int gcd(int v1, int v2)
//{
//	//最大公约数？？？
//	while (v2) {
//		int temp = v2;
//		v2 = v1 % v2;
//		v1 = temp;
//	}
//	return v1;
//}
//
//template<typename T1, typename T2>
//bool searchInt(vector<T1>::iterator begin, vector<T2>::iterator end, int num) {
//	while (begin != end) {
//		if (*begin == num) {
//			return true;
//		}
//		++begin;
//	}
//	return false;
//}



int main(int argc, char* argv[]) {

	#pragma region used
	/*int i, j;
		cin >> i >> j;
		cout << (i > j ? i : j) << " is bigger..." << endl;

		double x = 0;
		x = 3.142 + 3;
		int y = static_cast<int>(x);

		switch (switch_on)
		{
		default:
		break;
		}*/

	//string rsp;
	//do {
	//	cout << "enter 2 number to get sum..." << endl;
	//	int val1, val2;
	//	cin >> val1 >> val2;
	//	cout << "Sum is: " << val1 + val2 << endl;

	//	cout << "Continue? [ y / n ]" << endl;
	//	cin >> rsp;
	//} while (!rsp.empty() && tolower(rsp[0]) != 'n');

	//bitset<500> bs("110");
	//try {
	//	cout << bs.to_ulong() << endl;
	//}
	//catch (std::runtime_error err) {
	//	cout << err.what() << endl;
	//}

	//cout << gcd(84, 28) << endl;

	//for (int i = 0; i < 10; ++i) {
	//	cout << countCall() << endl;
	//}

	//string s1("hello");
	//string s2("worlds");
	//cout << getLarte(s1, s2) << endl;


	//std::ofstream examplefile("example.txt");
	//if (examplefile.is_open())
	//{
	//	// 输出到（写入）文件
	//	examplefile << "This is a line.\n";
	//	examplefile << "This is another line.\n";
	//	examplefile.close();
	//}

	//list<string> lists;
	//string temp;
	//cout << "enter some strings..." << endl;
	//while (cin>>temp) {
	//	lists.push_back(temp);
	//}

	//for (list<string>::iterator ite = lists.begin(); ite != lists.end(); ++ite) {
	//	cout << *ite << endl;
	//}

	//int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };

	//vector<int> iVec(ia, ia + 11);
	//list<int> iList(ia, ia + 11);

	//vector<int>::iterator iter = iVec.begin();
	//while (iter != iVec.end()) {
	//	if (*iter % 2 != 0) {
	//		iter = iVec.erase(iter);
	//	}
	//	else {
	//		++iter;
	//	}
	//}

	//list<int>::iterator ite = iList.begin();
	//while (ite != iList.end()) {
	//	if (*ite % 2 == 0) {
	//		ite = iList.erase(ite);
	//	}
	//	else {
	//		++ite;
	//	}
	//}

	//for (vector<int>::iterator ite = iVec.begin(); ite != iVec.end(); ++ite) {
	//	cout << *ite << endl;
	//}

	//for (list<int>::iterator ite = iList.begin(); ite != iList.end(); ++ite) {
	//	cout << *ite << endl;
	//}

#pragma endregion used
	
	//Screen myScreen((string)"123");
	//myScreen.move(4, 0).set('#').display(cout);


	Test t;
	cout << t.sval << endl;
	cout << t.i << endl;
	cout << ::j;

	cout << endl;
	system("pause");
	return 0;
}

#pragma region Test...
void nagCount() {
	int counter = 0;
	int value;
	while (cin >> value) {
		if (value < 0) {
			++counter;
		}
	}
	cout << "counter is: " << counter << flush;
}

void getSumFromInput() {
	int sum = 0;
	int value;

	cout << "Enter number to get sum..." << endl;
	while (cin >> value) {
		sum += value;
	}

	cout << "Sum of all input numbers are: " << sum << endl;
}

/*
	***编写程序，提示用户输入两个数并将这两个数范围内的每
	***个数写到标准输出
	*/
void printNumSeq() {
	int lower, uppper;
	cout << "enter two number: " << endl;

	cin >> lower >> uppper;
	if (lower > uppper) {
		int temp = lower;
		lower = uppper;
		uppper = temp;
	}

	cout << "The seq are: " << endl;
	for (int i = lower, numCounter = 1; i <= uppper; ++i, numCounter++) {
		cout << i << " ";
		if (numCounter % 10 == 0) {    //限制每行输出10个数字
			cout << endl;
		}
	}
	cout << endl;

}

int sales_item_test() {
	/*Sales_item book1,book2;
	cin >> book1 >> book2;
	cout << book1 + book2 << endl;*/

	Sales_item book, total;
	int bCounter;

	cout << "enter same ISBN books:" << endl;

	if (cin >> total) {
		bCounter = 1;
		while (cin >> book) {
			if (total.same_isbn(book)) {
				total = total + book;
				++bCounter;
			}
			else {
				cout << "book info: " << total << endl;
				cout << "book sum: " << bCounter << endl;

				total = book;
				bCounter = 1;
			}
		}
		cout << total << endl;
		return 0;
	}
	else {
		cout << "No data enter!" << endl;
		return -1;
	}
}

int getPow() {
	int value;
	int pow;
	int result = 1;
	cout << "enter two number:" << endl;
	cin >> value >> pow;
	if (pow < 0) {
		cout << "wrong input..." << endl;
		return -1;
	}
	else {
		for (int i = 1; i <= pow; ++i) {
			result *= value;
		}
	}

	return result;
}

void getString() {
	string word;
	getline(cin, word);
	/*for each (char c in word)
	{
	cout << c << endl;
	}*/
	for (std::size_t i = 0; i < word.size(); ++i) {
		cout << word[i] << endl;
	}

}

void delPunct() {
	string str;
	string resultStr = "";
	bool hasPunct = false;

	getline(cin, str);

	for (string::size_type i = 0; i < str.size(); ++i) {
		if (ispunct(str[i])) {
			hasPunct = true;
		}
		else {
			resultStr += str[i];
		}
	}

	if (hasPunct) {
		cout << resultStr << endl;
	}
	else {
		cout << "no punct in string!" << endl;
	}

}

void getIntSum() {
	vector<int> vect;
	int numb;
	while (cin >> numb) {
		if (numb != EOF) {
			vect.push_back(numb);
		}
	}
	vector<int>::size_type front = 0, behind = vect.size() - 1;
	for (; front < behind; ++front, --behind) {
		cout << "sum is: " << vect[front] + vect[behind] << endl;
	}

	if (front == behind){
		cout << "middle number \" " << vect[front] << " \"not use" << endl;
	}

}


void wordToUpper() {
	vector<string> text;
	string word;

	while (cin >> word) {
		text.push_back(word);
	}

	for (vector<string>::size_type i = 0; i < text.size(); ++i) {
		for (string::size_type j = 0; j < text[i].size(); ++j) {
			if (islower(text[i][j])) {
				text[i][j] = toupper(text[i][j]);
			}
		}
		cout << text[i];
		if ((i + 1) % 8 == 0) {
			cout << endl;
			continue;
		}
		cout << " ";
	}
}

void iteratorDemo() {
	vector<string> text;
	vector<string>::iterator itr = text.end();
	for (int i = 0; i < 10; ++i) {
		text.insert(itr, "abc");
		itr = text.end();
	}

	vector<string> text2(10);
	for (vector<string>::iterator itr = text2.begin(); itr != text2.end(); ++itr) {
		*itr = "abc";
	}

	for each(string a in text) {
		cout << a << endl;
	}
}

void bitsetDemo() {
	/*string str("B");
	bitset<64> bs(32);
	for (int i = 0; i < bs.size(); ++i) {
	cout << bs[i];
	}*/
	//cout << bs.to_ulong() << endl;

	bitset<32> bs;

	vector<int> iVect;
	iVect.push_back(0);
	iVect.push_back(1);
	vector<int>::iterator itr = iVect.end();
	int temp = *(itr - 1) + *(itr - 2);
	while (temp < 32) {
		iVect.push_back(temp);
		itr = iVect.end();
		temp = *(itr - 1) + *(itr - 2);
		bs.set(*(itr - 1));
	}

	cout << bs << endl;
}

const unsigned get_size()
{
	//throw std::logic_error("The method or operation is not implemented.");
	return 12u;
}

void arrayTest() {
	const unsigned buf_size = 512, max_files = 20;
	int staff_size = 27;
	const unsigned sz = get_size();

	char input_buffer[buf_size];
	string fileTable[max_files];
	//double salaries[staff_size];
	//int test_scores[get_size()];
	//int vals[sz];
	const char ch3[7] = "Daniel";  // with a '\0'


}

void pointerTest() {
	double* d1, d2;
	double x = 1.2;
	double y = 1.3;
	d1 = &x;
	d2 = y;
	cout << d1 << " " << *d1 << endl;
	cout << d2 << endl;

	int *sp1 = NULL;
}

void dymArr() {
	//vector<int> vec;
	//int temp;
	//while (cin >> temp) {
	//	vec.push_back(temp);
	//}

	//int *pa = new int[vec.size()];
	//int *pstr = pa;
	//for (vector<int>::iterator ite = vec.begin(); ite != vec.end(); ++ite, ++pstr) {
	//	*pstr = *ite;
	//}

	//delete[] pa;

	//const char *str1 = "Hello";
	//const char *str2 = "World";
	//const string s1("Hello");
	//const string s2("World");

	//size_t Length = strlen(str1) + strlen(str2) + 1;
	//char *nStr = new char[Length];
	//strcpy(nStr, str1);
	//strcat(nStr, str2);

	//delete[] nStr;

	//string nString;
	//nString = s1;
	//nString += s2;

	/*编写程序读入一组 string 类型的数据，并将它们存储在
		vector 中。接着，把该 vector 对象复制给一个字符指
		针数组。为 vector 中的每个元素创建一个新的字符数
		组，并把该 vector 元素的数据复制到相应的字符数组
		中，最后把指向该数组的指针插入字符指针数组。*/

	vector<string> sVect;
	string str;
	cout << "enter some strings...(ctrl+Z to end)..." << endl;
	while (cin >> str) {
		sVect.push_back(str);
	}

	char **pStr = new char *[sVect.size()];
	char **tp = pStr;
	for (vector<string>::iterator iter = sVect.begin(); iter != sVect.end(); ++iter, ++tp) {
		char *cp = new char[(*iter).size() + 1];
		strcpy(cp, (*iter).c_str());
		*(cp + (*iter).size()) = '\0';
		*tp = cp;
	}

	for (size_t i = 0; i < sVect.size(); ++i) {
		delete[] * (pStr + i);
	}
	delete[] pStr;
	pStr = NULL;
}

void SaleItemDemo() {
	vector<Sales_item> books;
	Sales_item item;

	cout << "enter books:" << endl;
	if (cin >> item) {
		books.push_back(item);
		while (cin >> item, !cin.eof()) {
			bool hasSame = false;   //判断是否有同一本书
			for (vector<Sales_item>::iterator iter = books.begin(); iter != books.end(); ++iter) {
				if (iter->same_isbn(item)) {
					(*iter) += item;
					hasSame = true;
					break;
				}
			}
			if (!hasSame) {
				books.push_back(item);
			}
		}
	}
	else {
		cout << "no data enter..." << endl;
		return;
	}

	for (vector<Sales_item>::iterator iter = books.begin(); iter != books.end(); ++iter) {
		cout << *iter << endl;
	}
}


#pragma endregion




