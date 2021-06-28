 #include "./std_lib_facilities.h"
 using namespace std;
 /*Sentence:
 Noun Verb // e.g., C++ rules
 Sentence Conjunction Sentence // e.g., Birds fly but fish swim
Conjunction:
 "and"
 "or"
 "but"
Noun:
 "birds"
 "fish"
 "C++"
Verb:
 "rules"
 "fly"
 "swim"
*/
bool sentence();
bool noun();
void verb();
void conjunction();
bool sentence();
int main()
try{
    bool result=sentence();
    if(result==true)
    cout<<"correct sentence";
    //cout<<"incorrect sentecne";
}
catch (exception& e) {
 cerr << e.what() << '\n'; 
 return 1;
}
catch (...) {
 cerr << "exception \n";
 return 2;
}
bool sentence(){
    bool result=noun();
    return result;
}
bool noun(){
 string s;
 cin>>s;
if (s=="bird"||s=="fish"||s=="c++")
{
    verb();
    return true;
}
else
error("not specified noun");
//return false;
}
void verb(){
    string s;
 cin>>s;
if (s=="rules"||s=="fly"||s=="swim"){
 conjunction();
}
else
error("specified verb expected");
}
void conjunction(){
    string s;
    cin>>s;
    if(s==".")
    return;
     else if(s=="and"||s=="or"||s=="but"){
    bool result=sentence();
    if(result)
    return;
    }else
    error("grammatical mistake");
}
 