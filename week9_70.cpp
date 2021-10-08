#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
int main(){
    //ex. input"123456789123456789,123456789987654321" (is not input 123456789123456789 123456789987654321 )
    string a,b,input;
    string search =",";    
    stack<char> stack_a;
    stack<char> stack_b;
    stack<int> stack_sum;
    stack<char> stack_swap;
    int commute=0;
    cin>>input;
    bool empty=0;
    //0=stack_a empty first , 1= stack_b empty first
    size_t found =input.find(search);
    a=input.substr(0,found);
    b=input.substr(found+1,input.length()-1);
    for (size_t i = 0; i <a.length(); i++)
    {
        stack_a.push(a[i]);
    }
    for (size_t i = 0; i <b.length(); i++)
    {
        stack_b.push(b[i]);
    }
    while (1)
    {
        if(stack_a.empty()||stack_b.empty()){
            if(stack_a.empty())empty=0;
            else empty=1;
            break;
        }
        int sum;
        sum=((stack_a.top())-48)+((stack_b.top())-48)+commute;
        commute=sum/10;
        stack_sum.push(sum%10);
        stack_a.pop();
        stack_b.pop();
    }
    if(empty){
         stack_swap=stack_a;

    }
    else if(!empty){
         stack_swap.swap(stack_b);        
    }
    while(!stack_swap.empty()){
        //cout<<stack_swap.top();
        stack_sum.push(stack_swap.top()-48);
        stack_swap.pop();      
    }
    while(!stack_sum.empty()){
        cout<<stack_sum.top();
        stack_sum.pop();      
    }
    
    
    

        
    
    return 0;
}