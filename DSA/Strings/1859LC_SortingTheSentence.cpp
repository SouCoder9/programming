// string sortSentence(string s) {
//         vector<string> ans(10);
//         string temp;

//         for (char ch : s) {
//             if (ch != ' ') {
//                 temp += ch;
//             } else {
//                 int pos = temp.back() - '0';
//                 temp.pop_back();
//                 ans[pos] = temp; 
//                 temp.clear(); 
//             }
//         }

       
//         int pos = temp.back() - '0';
//         temp.pop_back();
//         ans[pos] = temp;

//         string result;
//         for (int i = 1; i < ans.size(); i++) {
//             if (!ans[i].empty()) {
//                 result += ans[i] + " ";
//             }
//         }

//         result.pop_back(); 
//         return result;
//     }