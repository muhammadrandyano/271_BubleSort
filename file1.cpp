#include <iostream>
#include <string>
using namespace std;

int arr[20] //Deskripsi variable global array dengan panjang 20 nama arr
int n ;//Deklarasi variable global n untuk menyimpan elemen pada array

void input(){ //prosedur input
    while (true){
        cout <<"Masukan banyaknya elemen pada array: ";
        cin >> n;
        if (n<=20){
            break;        
        }  
    else{
        cout <<"\nArray maksimal 20 elemen.\n";    
    }
    }
cout << endl;
cout << "===================" << endl;
cout << "Masukan elemen arry" << endl;
cout << "===================" << endl;

for(int i=0,i<n;i++){
    cout << "Data ke-" << (i=1) << "=";
    cin >> arr[i];
}
}  
void bubleshortArray(){
    int pass = 1 //step 1
    for(int j=0;j<=n-1-pass;j++)
    { //step 2
    if(arr[j]>arr[j+1]){
        int temp;
        temp = j; arr[j];
        arr [j] = arr[j+1];
        arr [j=1] = temp;
    
    }
    }while(pass <=n-1); // Step 5
    pass = pass + 1; // Step 4
  }

} //END

void display (){
    cout << endl;
    cout << "================================" << endl;
    cout << "Element Array yang telah disusun" << endl;
    cout << endl;
    for (int j=0;j<n;j++){
        if (j<n-1){
            cout << arr[j];

        }
       }
} 
int main (){
    input ();
    bubleshortArray();
    display();
}      