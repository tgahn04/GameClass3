#include "stdafx.h"
#include <unordered_set>
#include <unordered_map>

int main()
{
#pragma region 연관 컨테이너
	// 특정한 방식으로 데이터 저장하고 검색하는 컨테이너입니다.

#pragma region  unordered_set

	// unordered_set<const char*> unordered_set;
	// 
	// unordered_set.reserve(16);
	// 
	// unordered_set.max_load_factor(2.0);
	// 
	// unordered_set.insert("Infinity Edge");
	// unordered_set.insert("Kraken Slayer");
	// unordered_set.insert("Heartsteel");
	// 
	// unordered_set.insert("Trinity Force");
	// unordered_set.insert("Luden's Tempest");
	// unordered_set.insert("Doran's Ring");
	// 
	// unordered_set.insert("Doran's Blade");
	// unordered_set.insert("Doran's Shield");
	// unordered_set.insert("Frozen Heart");
	// 
	// unordered_set.insert("Frozen Heart");
	// 
	// cout << "Load_Factor : " << unordered_set.load_factor() << endl;
	// cout << "Bucket_Count : " << unordered_set.bucket_count() << endl;
	// 
	// if (unordered_set.find("Heartsteel") != unordered_set.end())
	// {
	// 	cout << "the data exists..." << endl;
	// }
	// else
	// {
	// 	cout << "the data does not exits..." << endl;
	// }
	// 
	// unordered_set.erase("Doran's Blade");
	// 
	// for (const char* item : unordered_set)
	// {
	// 	cout << item << endl;
	// }
#pragma endregion

#pragma region unordered_map
	// unordered_map<std::string, int> inventory;
	// 
	// inventory["Potion"] = 5;
	// inventory["Elixir"] = 2;
	// inventory["Shiled"] = 1;
	// inventory["Oil"] = 3;
	// 
	// string item_name;
	// 
	// cin >> item_name;
	// 
	// if (inventory[item_name] > 0 && inventory.find(item_name) != inventory.end())
	// {
	// 	inventory[item_name]--;
	// 
	// 	cout << item_name << "use" << endl;
	// 
	// 	if (inventory[item_name] <= 0)
	// 	{
	// 		inventory.erase(item_name);
	// 
	// 		cout << item_name << "모두 소진하였습니다." << endl;
	// 	}
	// }
	// else
	// {
	// 	cout << "Doesn't exist" << endl;
	// }
	// 
	// for (const auto& element : inventory)
	// {
	// 	cout << "Name : " << element.first << "Quantity : " << element.second << endl;
	// }

#pragma endregion	

#pragma region  set

#pragma endregion

#pragma endregion

	return 0;
}