#include<iostream>
#include<unordered_map>
using namespace std;

/* Problem : 1
void printNum(int n){

    if(n==0){
        return;
    }
    cout<<n<<"\n";
    printNum(n-1);

}
int main(int argc, char const *argv[])
{  
    printNum(5);
    return 0;
}*/

/* Problem : 2
void printNum(int n){
    if(n==5){
        return;
    }
    cout<<n<<"\n";
    printNum(n+1);
}
int main(int argc, char const *argv[])
{
    printNum(1);
    return 0;
}*/

/*Problem : 3
void sumOfnum(int i , int n , int sum){
    if(n==i)
    {
        sum+=i;
        cout<<sum;
        return;
    }
    sum+=i;
    sumOfnum(i+1,n,sum);
}

int main(int argc, char const *argv[])
{
    sumOfnum(1,5, 0);
    return 0;
}*/

/* Problem : 4
int calcFactorial(int n){
    if(n==0 || n==1){
        
        return 1;
    }
     int fact_num = n*calcFactorial(n-1);
     return fact_num;
}
int main(int argc, char const *argv[])
{
    // int fact  = 1;
    // for (int i = 1; i <=7; i++)
    // {
    //     fact *=i;
    // }
    // cout<<fact;
    // return 0;

   cout<<calcFactorial(5);
}  */

/* Problem : 5
void fibonachi(int a, int b, int n){
        
    if(n==0){
        return;
    }
        int c =  a+b;
        cout<<c<<" ";
        fibonachi(b,c,n-1);
}
int main(int argc, char const *argv[])
{
    cout<<"0 "<<"1 ";
    fibonachi(0,1,5);
    return 0;
}
int fibo(int n){

    if(n<=1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(int argc, char const *argv[])
{
    int n = 9;
    cout<<fibo(n);
    return 0;
}*/


/* Problem : 6
    int printXn(int x , int n){
        if(x==0){
            return x;
        }
        else if(n == 0){
            return 1;
        }
        int xnPrint =x*printXn(x,n-1);
        return xnPrint;
    }
int main(int argc, char const *argv[])
{
    int x = 2 , n = 5;
   cout<<printXn(x ,n);
   return 0;
} 
*/

/* Problem : 7
int GCD(int a , int b){
    if(a==b){
        return b;
    }
    if(a%b==0){
        return b;
    }
    if( b%a==0){
        return a;
    }
    if(a>b){
       return GCD(a%b , b);
    }
    else if(a<b){
        return GCD(a ,b%a);
    }
}
int main(int argc, char const *argv[])
{
    cout<<GCD(14,91);
    return 0;
}*/


//CODER LIFE 1:02 AM

/* Problem : 8

    void reverse(string str,int i , int n){
    if(n==i){
        cout<<str[0];
        return;
    }
    cout<<str[n];
    reverse(str,i,n-1);
    }
    int main(int argc, char const *argv[]){ 

    string str =  "Jayesh";
    int n =  str.length();
    reverse(str ,0, n-1);
    }
*/
// Problem : 9
    /* 1st and last occurance of en element in string
int main(int argc, char const *argv[])
{
    string str = "abaacdaefaah";
    char element  = 'a';
    int first_index = -1;
    int last_index= 0;
    for (int i = 0; i < str.length()-1; i++){
        
        if(str[i]==element){
            if(first_index==-1){
                first_index++; 
            }
            last_index++;
        }
    }
    cout<<"First Index is :"<<first_index<<"\n";
    cout<<"Last Index is :"<<last_index<<"\n";
    return 0;
}
*/

/* Problem : 10

    bool isSorted(int a[], int index ){

        if(index == 5){
            return true;
        }
         if(a[index] >= a[index+1]){
             return false;
         }
         else{
              return isSorted(a,index+1);
         }
    } 
    int main(int argc, char const *argv[])
    {
        int arr[] =  {1,2,3,4,5};

        cout<<"Ans is :"<<isSorted(arr,0);
        return 0;
    }*/

/* Problem : 11
    unordered_map<char,int>map;
    string dublicate(string str){
        string newStr = "";
        for (int i = 0; i < str.length(); i++)
        {
            if(map.find(str[i])!= map.end()){
                
                // not add in string
            }
            else{
                newStr.push_back(str[i]);
            }
            map[str[i]]++;
        }
        return newStr;
    }

    int main(int argc, char const *argv[])
    {
        string str = "aabbccddefgghi";
        cout<<dublicate(str);
        return 0;
    }
*/

/* Problem : 12     ->subSequence string

   // self solve google coder
    void subSequence(string str , int idx , string newStr){

        // base case
        if(idx == str.length()){
            cout<<newStr<<"\n";
            return;
        }
        char curr_current  =  str[idx];
        // take 
        subSequence(str,idx+1,newStr+curr_current);
        // not take
        subSequence(str,idx+1,newStr);
    }
    int main(int argc, char const *argv[])
    {
        string str  = "aaa";
        subSequence(str,0 , "");
        return 0;
    }
    */

/* Problem:13   -->unique subString
  void subSequence(string str , int idx , string newStr ,unordered_map<string,int>map)
  {
        // base case
        if(idx == str.length())
        {
            if(map.find(newStr)==map.end()){
                return;
            }
            else{
                cout<<newStr<<"\n";
                map[newStr]++;
                return;
            }
        }
        char curr_current  =  str[idx];
        // take 
        subSequence(str,idx+1,newStr+curr_current,map);
        // not take
        subSequence(str,idx+1,newStr,map);
    }
    int main(int argc, char const *argv[])
    {
        string str  = "aaa";
        unordered_map<string,int>map;
        subSequence(str,0 , "",map);
        return 0;
    }
    */
/*  Problem : 13 keyPad 


 void printComb(string str , int idx , string combination )
 {
     string keyPad[] ={".","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
     // Base case
     if(idx == str.length()){ 
        cout<<combination<<"\n";
        return;
     }
     // current character
     char cur_char  = str[idx];

     string mapping  =  keyPad[cur_char-'0'];
     for (int i = 0; i < mapping.length(); i++){
      printComb(str,idx+1,combination+mapping[i]);
     }
 }
int main(int argc, char const *argv[])
{
    printComb("23", 0 , "");
    return 0;
}
*/


/* Problem :14 ->   TOWER OF HONAi -> 'To using desination'
void TOH(int n , string A, string B, string C ){
    // base case
     if(n<=0){
         return;
     }
     TOH(n-1, A,C,B);
     cout<<"Move a Disk from "<<A <<" To "<<C<<" \n";
     TOH(n-1, B,A,C);

}
int main(int argc, char const *argv[])
{   
    int n = 3; // disk
    TOH(3,"1","2","3");
    return 0;
}*/



/* Problem : 14 Move all 'x' to the end of the string
    void moveX(string str , int idx ,int cnt, string newStr){
        // base case
        char current_chara =  str[idx];
        if (idx == str.length())
        {
            for (int i = 0; i <cnt; i++)
            {
                newStr+='x';
            }
            cout<<newStr;
            return;
        }
        else if(current_chara=='x'){
            moveX(str,idx+1,cnt+1,newStr);
          }
          else {
              newStr +=current_chara;
              moveX(str,idx+1,cnt,newStr);
          }        
    }

int main(int argc, char const *argv[])
{
    string str = "axbxcxdxx";
    moveX(str , 0 , 0, "");
    return 0;
}*/