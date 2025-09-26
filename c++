string str = "csvCFCjgcgbcYcgmCUYGlhKBNJHulGCVcjgfD";
bitset<26> b;
for(auto c: str)
{
    if ((c >= 'A') && (c <= 'Z')) b.set(c-'A');
}
vector<char> v;
for(size_t i = 0; i < b.size(); ++i)
{
    if (b[i]) v.push_back('A'+i);
}
for(auto c: v)
{
    cout << c;
}
