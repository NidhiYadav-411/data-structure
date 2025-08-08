
/*Organizing Cards in a Hand:
Application: When playing card games, players often use an approach similar to insertion sort to  organize their cards. 
* They pick one card at a time and insert it into the correct position in their hand, maintaining a sorted sequence. 
* Write a program that demonstrates how to organize (sort) cards in a hand using insertion sort
*/

Code 
#include<iostream>
using namespace std;
int main(){
int n=5, temp;
int arr[n];
cout<<"Nidhi yadav- B24CE1072"<<endl;
cout<<"Enter card numbers :\n";//input card numbers
for (int i=0; i<n; i++){
cin>>arr[i];
}
for(int p=0; p<=n-1;p++){ //passes
    int i=p+1;  //initialization
    int j=i-1;
    temp=arr[i]; //element is getting stored temporarily
    while (j>=0 && temp<arr[j]){
        arr[j+1]=arr[j];  //element switching places
        j--;
        }
        arr[j+1]=temp;
}

cout<<"Cards in hand :"<<endl;
for (int i = 0; i < n; i++) {
cout<<arr[i]<<" ";
}

return 0;
}
