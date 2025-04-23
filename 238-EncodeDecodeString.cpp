class Solution{
public:
    string encode(vector<string>& strs){
        string res;
    for(string s : strs) res += to_string(s.length())+"@"+s;
       return res;
    }
    vector<string> decode(string s){
        vector<string> res;     int i=0;
        string taille,chaine;

        while(i < s.length()){
            cout<<"i : "<<i<<endl;
            while(s[i] != '@'){
                taille += s[i++];
            }
            i++;
            int j=0;
            while(stoi(taille) > j){
                chaine += s[i];
                j++;
                i++;
            }
            res.push_back(chaine);
            taille = chaine = "";

        }
        return res;
    }
};
