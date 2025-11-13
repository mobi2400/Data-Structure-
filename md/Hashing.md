# Hashing
- Hashing is a data structure that stores data in a way that allows fast access to the data.
- pre storing and  fetching data in O(1) time on average
```cpp
// precompute the hash array
int hash[13] = {0};
 for(int i=0;i<n;i++){
    hash[arr[i]]++;
 }
// fetching the frequency of an element
int frequency = hash[x];
```
- Hash function: A function that takes an input and returns a fixed-size string of bytes.
- for characters
```cpp
int hashChar[26] = {0};
for(int i=0;i<str.length();i++){
    // assuming all characters are lowercase a-z
    hashChar[str[i]-'a']++;
}
// ch is the character whose frequency is to be found
char ch = 'z'; // example
int frequency = hashChar[ch-'a'];
```
- map is better option than hashing as it takes less space and time
```cpp
// precompute the map
map<int,int> mp;
for(int i=0;i<n;i++){
    mp[arr[i]]++;
}
// fetching the frequency of an element
// x is the element whose frequency is to be found
int frequency = mp[x];
```
- ALWAYS GIVE FIRST PREFERENCE TO UNORDERD MAP
- unordered map`unordered_map<int,int> mp;`
```cpp
// takes less time as compared to map
unordered_map<int,int> mp;
for(int i=0;i<n;i++){
    mp[arr[i]]++;
}
int frequency = mp[x];
```