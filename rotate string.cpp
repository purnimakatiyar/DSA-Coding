class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())
            return false;
        return ((s+s).find(goal)!=string::npos);
    }
};


void main()
{
    string a,b;
    int n,m;
    n=a.length();
    m=b.length();
    cin.getline(a,n);
    cin.getline(b,m);
    rotateString(a,b);
    


}