class RandomizedSet {
    unordered_set<int> s;
public:
    RandomizedSet() {

    }
    
    bool insert(int val) {
        auto a = s.insert(val);
        return a.second;
    }
    
    bool remove(int val) {
        auto b = s.erase(val);
        return b;
    }
    
    int getRandom() {
        return *next(s.begin(),rand()%s.size());
    }
};
