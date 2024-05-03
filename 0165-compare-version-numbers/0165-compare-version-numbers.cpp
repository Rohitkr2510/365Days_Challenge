class Solution {
public:
    int compareVersion(string version1, string version2) {

        int n = version1.size();
        int m = version2.size();

        string v1 = "";
        string v2 = "";
        int i =0,j=0;

        while(i<n && j<m)
        {
            while(i <n && version1[i]!='.')
            {
                if(version1[i]!= '.')
                {
                    v1 += version1[i];
                }
                i++;
            }

            while(j<m && version2[j]!='.')
            {
                if(version2[j]!='.')
                {
                    v2 += version2[j];
                }
                j++;
            }
            int n1 = stoi(v1);
            int n2 = stoi(v2);
            // cout<<n1<<" "<<n2<<endl;

            if(n1>n2) return 1;
            else if(n2>n1) return -1;
            else
            {
                v1 = "";
                v2 = "";
                i++;
                j++;
            }
        }

        v1 = "";
        v2 = "";

         while(j<m )
            {
                if(version2[j]!= '0' && version2[j]!='.')
                {
                    v2 += version2[j];
                }
                j++;
            }

            while(i <n)
            {
                if(version1[i]!='0' && version1[i]!= '.')
                {
                    v1 += version1[i];
                }
                i++;
            }
            if(v1>v2) return 1;
            else if(v2>v1) return -1;

        return 0;

        
    }
};