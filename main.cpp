#include <iostream>
#include <string>
using namespace std;

/* problem 12*
#define val 33.3;
#define number 50;
int a;
 int& fun(){
    return a;
}
 int foo(){
    return a;
}*/

void swap(int *a, int *b);
void mid(int *arr, int size);
void square(int *ptr);
int max(int *arr, int size);
void reverse(int *arr, int size);
void top3(int *arr, int size);
int* count(const int &num);
void sort(int *arr, int size);
void countChar(char* str, int len);
/* problem 1
int main() {
    int x = 10;
    int *xPtr = &x;
    cout << "The value of x: " << x << endl;
    cout << "The address of x: " << xPtr << endl;
    cout <<  "Value of x using pointer: " << *xPtr << endl;
    return 0;
}*/

/* problem 2
int main() {
    int x = 10;
    int *xPtr = &x;
    cout << "The value of x before changing: " << x << endl;
    *xPtr = 5;
    cout << "Changing the value of x with pointer" << endl;
    cout << "The value of x after changing: " << x << endl;
    return 0;
}*/

int main() {
    /* problem 3
    int a = 10;
    int b = 20;
    swap(&a, &b); */
    /* problem 4
    int arr[5] = {5, 4, 3, 2, 1};
    int *arrPtr = arr;
    for (int i = 0; i < 5; i++) {
        cout << *(arrPtr + i) << endl;
    }*/
    /* problem 5
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    mid(arr, size); */
    /* problem 6
    int x = 4;
    int *ptr = &x;
    cout << "X before modification: " << x << endl;
    square(ptr);
    cout << "X after modification: " << x << endl; */
    /* problem 7
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    cout << sizeof(arr) << endl;
    cout << sizeof(ptr) << endl; */
    /* problem 8
    int x = 10;
    void *ptr = &x;
    cout << "value of x: " << *(int *)ptr << endl; */
    /* problem 9
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Max element: " << max(arr, size) << endl; */
    /* problem 10
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    int *aPtr = &a;
    int *bPtr = &b;
    cout << "A: " << *aPtr << endl;
    cout << "B: " << *bPtr << endl; */
    /* problem 11
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter " << i + 1 << "th element of array: ";
        cin >> arr[i];
    }
    int Max = max(arr, size);
    cout << "The address of max value: " << &Max << endl; */
    /* problem 12
    int n1=8,n2=12, *ptr_1= nullptr, *ptr_2= nullptr, k=0;
    double t;
    //*ptr_1=&n1;
    ptr_1=&n2;
    //*ptr_2=&n2;
    ptr_2=&n1;
    //t=val;
    k=val;
    //foo()=number;
    fun()=number;
    cout<<fun()<<" "<<*ptr_1<<" "<<k<<" "<<*ptr_2<<endl; */
    /* problem 13
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        cout << "Value: " << *(ptr + i) << endl;
        cout << "Address: " << ptr + i << endl;
    } */
    /* problem 14
    int x = 420;
    int *ptr = &x;
    cout << "Secret value: " << *ptr << endl; */
    /* problem 15
    int arr[] = {10, 20, 30 , 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *ptr = &arr[0];
    cout << "Last element : " << *(ptr + size - 1) << endl; */
    /* problem 16
    int score = 75;
    int *ptr = &score;
    cout << "Original score: " << score << endl;
    *ptr += 10;
    cout << "New score: " << score << endl; */
    /* problem 17
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse(&arr[0], size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    } */
    /* problem 18
    int arr[] = {78, 95, 85, 62, 88};
    cout << "Top 3" << endl;
    top3(arr, 5); */
    /* problem 19
    int num;
    cout << "Please enter a number: ";
    cin >> num;
    int* counts = count(num);
    for (int i = 0; i < 10; i++) {
        cout << "Digit " << i << ": " << counts[i] << endl;
    } */
    /* problem 20
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    sort(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    } */
    /* problem 21
    string txt;
    getline(cin, txt);
    char *ch = &txt[0];
    int l = txt.length();
    countChar(ch, l); */
    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "A: " << *a << endl;
    cout << "B: " << *b << endl;
}
void mid(int *arr, int size) {
    int *ptr = arr;
    int *middle = arr + (size / 2);
    cout << "Middle: " << *middle << endl;
}
void square(int *ptr) {
    *ptr = *ptr * *ptr;
}
int max(int *arr, int size) {
    int max = 0;
    for (int i = 0; i < size; i++) {
        if (*(arr + i) > max) max = *(arr + i);
    }
    return max;
}
void reverse(int *arr, int size) {
    int temp = 0;
    int *ptr1 = arr - 1;
    int *ptr2 = arr + size;
    while (ptr1 < ptr2) {
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2--;
    }
}
void top3(int *arr, int size) {
    int *ptr = arr;
    int current;
    int first = max(ptr, size);
    int second = 0;
    int third = 0;
    for (int i = 0; i < size; i++) {
        current = *(ptr + i);
        if (current > second && current < first) {
            third = second;
            second = current;
        }
        if (current > third && current < first && current < second) third = current;

    }
    cout << first << " " << second << " " << third << endl;
}
int* count(const int& num) {
    static int digits[10] = {0};
    int numba = num;
    while (numba > 0) {
        int digit = numba % 10;
        digits[digit]++;
        numba /= 10;
    }
    return digits;
}
void sort(int *arr, int size) {
    int temp;
    int *ptr = arr;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}
void countChar(char* str, int len) {
    int vowels = 0, consonant = 0;
    for (int i = 0; i < len; i++) {

        char c = *(str + i);
        switch (c) {
            case 'a':
                vowels++;
                break;
            case 'e':
                vowels++;
                break;
            case 'i':
                vowels++;
                break;
            case 'o':
                vowels++;
                break;
            case 'u':
                vowels++;
                break;
            default:
                consonant++;
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonant: " << consonant << endl;
}