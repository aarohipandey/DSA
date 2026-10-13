class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>unique;
        for(string email:emails)
        {
            string clean_email="";
          for(int i=0;i<email.length();i++)
        {
            if(email[i]=='.')
            continue;
            else if(email[i]=='+'||email[i]=='@')
            break;
            clean_email+=email[i];
        }
        
        string domain;
        for(int i=email.length();i>=0;i--)
        {
            domain+=email[i];
            if(email[i]=='@')
            break;
        }
        reverse(domain.begin(),domain.end());
        clean_email+=domain;
        unique.insert(clean_email);}
        return unique.size();     
    }
};