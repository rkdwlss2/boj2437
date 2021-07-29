//// you can use includes, for example:
//// #include <algorithm>
//
//// you can write to stdout for debugging purposes, e.g.
//// cout << "this is a debug message" << endl;
//#include <string>
//#include <iostream>
//using namespace std;
//
//string solution(string &riddle) {
//    // write your code in C++14 (g++ 6.2.0)
//    string answer="";
//    char firstChar=riddle[0];
//    char lastChar=riddle[riddle.size()-1];
//    if (firstChar=='?'){
//        for (int i = 0;i<26;i++){
//            if (riddle[1]=='?'){
//                riddle[0]=(i+'a');
//                break;
//            }else{
//                if (riddle[1]!=firstChar){
//                    riddle[0]=(i+'a');
//                    break;
//                }
//            }
//        }
//    }else{
//        riddle[0]=firstChar;
//    }
//    for (int l = 1;l<riddle.size()-1;l++){
//        char now=riddle[l];
//        if (now=='?'){
//            char Front=riddle[l-1];
//            char Back=riddle[l+1];
//            int f=Front-'a';
//            int b=Back-'a';
//            for (int i = 0 ; i <26;i++){
//                if (Back=='?'){
//                    if (f!=i){
//                        char tmp=i+'a';
//                        riddle[l]=tmp;
//                        break;
//                    }
//                }else{
//                    if (f!=i&&b!=i){
//                        char tmp=i+'a';
//                        riddle[l]=tmp;
//                        break;
//                    }
//                }
//            }
//        }else{
//            riddle[l]=now;
//        }
//        
//    }
//    if (lastChar=='?'){
//        for (int i = 0;i<26;i++){
//            char now='a'+i;
//            if (riddle[riddle.size()-2]=='?'){
//                riddle[riddle.size()-1]=(i+'a');
//                break;
//            }else{
//                if (riddle[riddle.size()-2]!=now){
//                    riddle[riddle.size()-1]=now;
//                    break;
//                }
//            }
//        }
//    }else{
//        riddle[riddle.size()-1]=lastChar;
//    }
//    return riddle;
//}
//
//int main(){
//    string a;
//    cin>>a;
//    cout<<solution(a)<<'\n';
//}
