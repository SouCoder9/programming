#include<iostream>
using namespace std;    
int main(){
    string s1;
    cin >> s1;
    if(islower(s1[0])){
        for(int i = 1; i < s1.length(); i++){
                s1[i] = tolower(s1[i]);
        }
    }else if(isupper(s1[0])){
        for(int i = 1; i < s1.length(); i++){
                s1[i] = toupper(s1[i]);
        }
    }
    cout << s1 << endl;
}

// import java.util.Scanner;

// public class ChangeStrings {
//     public static void main(String[] args) {
//         Scanner scanner = new Scanner(System.in);
//         String s1 = scanner.nextLine();
//         StringBuilder result = new StringBuilder(s1);

//         if (Character.isLowerCase(s1.charAt(0))) {
//             for (int i = 1; i < s1.length(); i++) {
//                 result.setCharAt(i, Character.toLowerCase(s1.charAt(i)));
//             }
//         } else if (Character.isUpperCase(s1.charAt(0))) {
//             for (int i = 1; i < s1.length(); i++) {
//                 result.setCharAt(i, Character.toUpperCase(s1.charAt(i)));
//             }
//         }

//         System.out.println(result.toString());
//     }
// }