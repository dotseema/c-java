//An even number of 4 or more can be represented by the sum of two prime numbers. 
//This is called Goldbach expectation, and it is confirmed that it is correct up 
//to a considerably large number by computer calculation. For example, 
//10 can be expressed as the sum of two prime numbers 7 + 3, 5 + 5. 
//Write a C++ program that accept an integer (n) from the user and 
//outputs the number of combinations that express n as a sum of two prime numbers
#include <iostream>
using namespace std;
 
int search(const int array[], int high, int key)
{
    int low_num = 0;
    int mid_num;
    int n=-1;
    while(low_num<=high){
        mid_num = (low_num + high)/2;
        if( array[mid_num] == key ){
            n = mid_num;
            break;
        }else if ( array[mid_num] < key){
            low_num = mid_num + 1;
        }else{
            high = mid_num -1;
        }
    }
    return(n);
}
 
int main(void){
    int prime_num[5136];
    prime_num[1] = 2;
    prime_num[2] = 3;
    int ptr=3;
    for(int num=5; num<=50000; num++){
        bool f = false;
        for(int i=1; i<ptr; i++){
            if(prime_num[i]*prime_num[i] > num){
                break;
            }
            if(num%prime_num[i]==0) {
                f = true;
                break;
            }
        }
        if(!f) {
            prime_num[ptr++] = num;
        }
    }
    prime_num[ptr] = 50001;
    int n;
    while(cin >> n){
        if(!n) break;
        int count = 0;
        if(n%2==0){
            for(int i=1; prime_num[i] <= n/2; i++){
                    if(search(prime_num,ptr,n-prime_num[i])!=-1) count++;
            }
        }else{
            if(search(prime_num,ptr,n-2)!=-1) count++;
        }
        cout << "\n enter number : " << n;
        cout << "\nNumber of combinations: " << count << endl;
    }
    return 0;
}
