#include <iostream>   //io相關函數
#include <cstdlib>    //動態記憶體配置，型態轉換，前置處理定義NULL = 0、EXIT_FAILURE、EXIT_SUCCESS
#include <cmath>      //數學相關的
#include <cctype>     //控制字元相關函數
#include <cstddef>    //定義陣列的下標型別size_t，陣列指標相減後值的型態ptrdiff_t
#include <cstdio>     //定義COF代表資料結尾是一個CONST
#include <ctime>      //系統時間相關函數 clock()等等
#include <cstring>    //c型態字串函數 strlen()等等
#include <climits>    //型態的限制  INT_MAX等等
#include <windows.h>    //系統函數
#include <fstream>    //檔案寫入匯出
#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include <stack>
#include <queue>
#include <stdint.h>
#include <iomanip>  //調整輸出型態用的
#include <memory>  //管理智慧指標shared_ptr unique_ptr weak_ptr make_shared(類似new 回傳給shared_ptr的指標)，allocator類別
#include <utility>  //pair定義 move定義
#include <iterator>     // std::istream_iterator  //back_inserter  //advance (InputIterator& it, Distance n);位移容器迭代器
#include <list>
#include <exception> //一般例外
#include <stdexcept> //p197 定義數個一班用途的例外類別
#include <new>  //定義bad_alloc例外型別(new 記憶體空間的時候錯誤空間不夠用會拋出) bad_array_new_length  int *b = int new[2]{1,2,3,4,5}(會錯1,2,3,4,5太多了), nothrow也定義在此
#include <typeinfo> //定義bad_cast type_info
#include <initializer_list> //提供intializer_list,intializer_list內的元素都是const
#include <cassert> //assert巨集定義
#include <ios>         // std::unitbuf可以讓輸出馬上排清緩衝區
#include <functional> //定義bind函式,placeholders,ref(回傳參考，用在auto運算要是參考或者bind到參考函數的時候) men_fn
#include <forward_list>
#include <set> //定義set unordered_set
#include <map> //定義map unordered_map
#include <unordered_map> //定義unordered_map unordered_mutimap
#include <unordered_set> //定義unordered_set unordered_mutiset
#include <type_traits>//定義型別轉換模板
#include <tuple>
#include <regex>//正規表達式
#include <numeric>  //accumulate函數
#include <bitset>
//#include <type_info>(找不到type_info) // 定義bad_cast例外型別
#include <tchar.h>
#include <commctrl.h> //window api的windows控制軟鍵
#if defined(UNICODE) || defined(_UNICODE)
#define tcout std::wcout
#else
#define tcout std::cout
#endif

using namespace std;
