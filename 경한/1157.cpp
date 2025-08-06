#include<iostream>
using namespace std;

struct MaxResult {
    int max_value;
    int max_index;
};

MaxResult findMax(int arr[], int size) {
    int max_value = arr[0];
    int max_index = 0;

    for (int i = 1; i < size; i++) {
        if (max_value < arr[i]) {
            max_value = arr[i];
            max_index = i;
        }
    }

    return { max_value, max_index };
}

char toUpper(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 32;
    }
    else {
        return ch;
    }
}


int main() {
	char word[1000000];
	cin >> word;

    // 전체 대문자화
    for (int i = 0; word[i] != '\0'; i++) {
        word[i] = toUpper(word[i]);
    }

	int alphabet_count[200] = { 0 };
	for (int i = 0; word[i] != '\0'; i++) {
		alphabet_count[word[i]]++;
	}

    char output;
    MaxResult result = findMax(alphabet_count, 200);
    alphabet_count[result.max_index] = 0;

    MaxResult jungbok_result = findMax(alphabet_count, 200);

    if (result.max_value == jungbok_result.max_value) {
        output = '?';
    }
    else {
        output = (char)(result.max_index);
    }

    cout << output;
}