class EventManager {
public:
    unordered_map<int,int>mp;
    priority_queue<pair<int,int>> pq;
    EventManager(vector<vector<int>>& events) {
        for(auto &it:events)
            {
                int id=it[0],pri=it[1];
                mp[id]=pri;
                pq.push({pri,-id});
            }
    }
    
    void updatePriority(int eventId, int newPriority) {
        mp[eventId]=newPriority;
        pq.push({newPriority,-eventId});
    }
    
    int pollHighest() {
        while(!pq.empty())
            {
                auto[pri,negId]=pq.top();
                int id=-negId;
                if(mp[id]==pri)
                {
                    pq.pop();
                    mp.erase(id);
                    return id;
                }
                pq.pop();
            }
        return -1;
    }
};

/**
 * Your EventManager object will be instantiated and called as such:
 * EventManager* obj = new EventManager(events);
 * obj->updatePriority(eventId,newPriority);
 * int param_2 = obj->pollHighest();
 */