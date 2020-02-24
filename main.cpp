#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string tokenize(string text){
    int i = 0;
    int state = 0;
    bool error = false;
    while (i < text.size() && !error){
        while (i < text.size() && text[i] == ' '){
            i++;
        }
        if (state == 0){
            if (text[i] == 'p' || text[i] == 'q' || text[i] == 'r' || text[i] == 's'){
                state = 1;
            }
            else if (text[i] == 'n'){
                state = 2;
            }
            else if (text[i] == 'a'){
                state = 5;
            }
            else if (text[i] == 'o'){
                state = 8;
            }
            else if (text[i] == 'x'){
                state = 10;
            }
            else if (text[i] == 't'){
                state = 13;
            }
            else if (text[i] == 'i'){
                state = 17;
            }
            else if (text[i] == '('){
                state = 20;
            }
            else if (text[i] == ')'){
                state = 21;
            }
            else{
                error = true;
            }
            i++;
        }
        if (state == 1){
            if (i < text.size()){
                if (text[i] == ' '){
                    i++;
                }
            }
        }
        if (state == 2){
            if (i < text.size()){
                if (text[i] == 'o'){
                    state = 3;
                    i++;
                }
                else{
                    error = true;
                }
            }
            else{
                error = true;
            }
        }
        if (state == 3){
            if (i < text.size()){
                if (text[i] == 't'){
                    state = 4;
                    i++;
                }
                else{
                    error = true;
                }
            }
            else{
                error = true;
            }
        }
        if (state == 4){
            ///

        }
        if (state == 5){
            if (i < text.size()){
                if (text[i] == 'n'){
                    state = 6;
                    i++;
                }
                else{
                    error = true;
                }
            }
            else{
                error = true;
            }
        }
        if (state == 6){
            if (i < text.size()){
                if (text[i] == 'd'){
                    state = 7;
                    i++;
                }
                else{
                    error = true;
                }
            }
            else{
                error = true;
            }
        }
        if (state == 7){
            if (i < text.size()){
                if (text[i] == ' '){
                    i++;
                }
            }
        }
        if (state == 8){
            if (i < text.size()){
                if (text[i] == 'r'){
                    state = 9;
                    i++;
                }
                else{
                    error = true;
                }
            }
            else{
                error = true;
            }
        }
        if (state == 9){
            if (i < text.size()){
                if (text[i] == ' '){
                    i++;
                }
            }
        }
        if (state == 10){
            if (i < text.size()){
                if (text[i] == 'o'){
                    state = 11;
                    i++;
                }
                else{
                    error = true;
                }
            }
            else{
                error = true;
            }
        }
        if (state == 11){
            if (i < text.size()){
                if (text[i] == 'r'){
                    state = 12;
                    i++;
                }
                else{
                    error = true;
                }
            }
            else{
                error = true;
            }
        }
        if (state == 12){
            if (i < text.size()){
                if (text[i] == ' '){
                    i++;
                }
            }
        }
        if (state == 13){
            if (i < text.size()){
                if (text[i] == 'h'){
                    state = 14;
                    i++;
                }
                else{
                    error = true;
                }
            }
            else{
                error = true;
            }
        }
        if (state == 14){
            if (i < text.size()){
                if (text[i] == 'e'){
                    state = 15;
                    i++;
                }
                else{
                    error = true;
                }
            }
            else{
                error = true;
            }
        }
        if (state == 15){
            if (i < text.size()){
                if (text[i] == 'n'){
                    state = 16;
                    i++;
                }
                else{
                    error = true;
                }
            }
            else{
                error = true;
            }
        }
        if (state == 16){
            if (i < text.size()){
                if (text[i] == ' '){
                    i++;
                }
            }
        }
        if (state == 17){
            if (i < text.size()){
                if (text[i] == 'f'){
                    state = 18;
                    i++;
                }
                else{
                    error = true;
                }
            }
            else{
                error = true;
            }
        }
        if (state == 18){
            if (i < text.size()){
                if (text[i] == 'f'){
                    state = 19;
                    i++;
                }
                else if (text[i] == ' '){
                    i++;
                }
                else if (i+1 == text.size() &&text[i] != 'p' && text[i] != 'q' && text[i] != 'r' && text[i] != 's' &&
                         text[i] != 'n' && text[i] != 'x' && text[i] != 'o' && text[i] != 'a' &&
                         text[i] != 'i' && text[i] != 't' && text[i] != '(' && text[i] != ')'){
                    error = true;
                }
                else if (i+1 < text.size() &&text[i] != 'p' && text[i] != 'q' && text[i] != 'r' && text[i] != 's' &&
                         text[i] != 'n' && text[i] != 'x' && text[i] != 'o' && text[i] != 'a' &&
                         text[i] != 'i' && text[i] != 't' && text[i] != '(' && text[i] != ')'){
                    error = true;
                }
            }
        }
        if (state == 19){
            if (i < text.size()){
                if (text[i] == ' '){
                    i++;
                }
            }
        }
        if (state == 20){
            if (i < text.size()){
                if (text[i] == ' '){
                    i++;
                }
            }
        }
        if (state == 21){
            if (i < text.size()){
                if (text[i] == ' '){
                    i++;
                }
            }
        }
        if (error){
            return "Error";
        }
        else{
            if (state == 1){
                string ret;
                int j = --i;
                for (;;j--){
                    if (text[j] == 'p' || text[j] == 'q' || text[j] == 'r' || text[j] == 's'){
                        char karakter = text[j];
                        string s(1,karakter);
                        ret = s;
                        break;
                    }
                }
                j++;
                while (j < text.size()){
                    if (text[j] != ' '){
                        return "Error";
                    }
                    j++;
                }
                return ret;
            }
            else if (state == 4){
                while (i < text.size()){
                    if (text[i] != ' '){
                        return "Error";
                    }
                    i++;
                }
                return "not";
            }
            else if (state == 7){
                while (i < text.size()){
                    if (text[i] != ' '){
                        return "Error";
                    }
                    i++;
                }
                return "and";
            }
            else if (state == 9){
                while (i < text.size()){
                    if (text[i] != ' '){
                        return "Error";
                    }
                    i++;
                }
                return "or";
            }
            else if (state == 12){
                while (i < text.size()){
                    if (text[i] != ' '){
                        return "Error";
                    }
                    i++;
                }
                return "xor";
            }
            else if (state == 16){
                while (i < text.size()){
                    if (text[i] != ' '){
                        return "Error";
                    }
                    i++;
                }
                return "then";
            }
            else if (state == 18){
                while (i < text.size()){
                    if (text[i] != ' '){
                        return "Error";
                    }
                    i++;
                }
                return "if";
            }
            else if (state == 19){
                while (i < text.size()){
                    if (text[i] != ' '){
                        return "Error";
                    }
                    i++;
                }
                return "iff";
            }
            else if (state == 20){
                while (i < text.size()){
                    if (text[i] != ' '){
                        return "Error";
                    }
                    i++;
                }
                return "(";
            }
            else if (state == 21){
                while (i < text.size()){
                    if (text[i] != ' '){
                        return "Error";
                    }
                    i++;
                }
                return ")";
            }

        }

        state = 0;
    } /// end while
}

 int getToken(string lexical){
    if (lexical == "p"||lexical=="q"||lexical == "r"||lexical=="s"){
        return 1;
    }
    else if (lexical == "not"){
        return 2;
    }
    else if (lexical == "and"){
        return 3;
    }
    else if (lexical == "or"){
        return 4;
    }
    else if (lexical == "xor"){
        return 5;
    }
    else if (lexical == "if"){
        return 6;
    }
    else if (lexical == "then"){
        return 7;
    }
    else if (lexical == "iff"){
        return 8;
    }
    else if (lexical == "("){
        return 9;
    }
    else if (lexical == ")"){
        return 10;
    }
    else{
        return 0;
    }
 }

string validator(vector<int> tokens){
    vector<int> stack;
    char state = '1';
    for (int i = 0; i < tokens.size(); i++) {
      if (tokens[i] == 0) {
          state = '1';
          break;
      }else if (tokens[i] == 1){
          if (state == '1') {
            state = '2';
          }else if (state == '2') {
            stack.push_back(1);
          }
          break;
       }else if (tokens[i] == 2){
          if ((tokens[i+1] == 1 || tokens[i+1] == 9)) {
            state = '2';
          }else{
            state = '1';
          }
          break;
       }else if (tokens[i] == 3){
          if (state == '2' && (tokens[i+1] == 1 || tokens[i+1] == 2 || tokens[i+1] == 9)) {
              state = '1';
          }else{
            state ='2';
          }
          break;
       }else if (tokens[i] == 4){
          if (state == '2' && (tokens[i+1] == 1 || tokens[i+1] == 2 || tokens[i+1] == 9)) {
            state = '1';
          }else{
            state = '2';
          }
          break;
       }else if (tokens[i] == 5){
          if (state == '2' && (tokens[i+1] == 1 || tokens[i+1] == 2 || tokens[i+1] == 9)) {
            state = '1';
          }else{
            state = '2';
          }
          break;
       }else if (tokens[i] == 6){
          if (tokens[i+1] == 1 && tokens [i+2] == 7 && tokens[i+3]== 1 ){
            state = '2';
          }else if (state == '1'){
            stack.push_back(6);
          }
          break;
       }else if (tokens[i] == 7){
          if (state == '2') {
            if (stack.back()==6) {
                state = '1';
                stack.pop_back();
            }
          }
          break;
       }else if (tokens[i] == 8){
          if (state == '2' && (tokens[i+1] == 1 || tokens[i+1] == 2 || tokens[i+1] == 9)) {
            state = '1';
          }else{
            state = '2';
          }
          break;
       }else if (tokens[i] == 9){
          if (tokens.size() == 11){
            if (tokens[0] == 9 && tokens[4] == 10 && tokens[6] == 9 && tokens[10] == 10){
                if (tokens[2] == 3 || tokens[2] == 4 || tokens[2] == 5 || tokens[2] == 8){
                    if (tokens[8] == 3 || tokens[8] == 4 || tokens[8] == 5 || tokens[8] == 8){
                        if (tokens[5] == 3 || tokens[5] == 4 || tokens[5] == 5 || tokens[5] == 8){
                            if (tokens[1] == 1 && tokens[3] == 1 && tokens[7] == 1 && tokens[9] == 1){
                                state = '2';
                            }
                            else {
                                state = '1';
                            }
                        }
                        else {
                            state = '1';
                        }
                    }
                    else{
                        state = '1';
                    }
                }
                else{
                    state = '1';
                }
            }
            else {
                state = '1';
            }
          }
          else if (tokens.size() == 10){
            if (tokens[0] == 9 && tokens[1] == 2 && tokens[2] == 1 && tokens[3] == 10 &&
                tokens[5] == 9 && tokens[6] == 1 && tokens[8] == 1 && tokens[9] == 10){
                if ( (tokens[4] ==  3 || tokens[4] == 4 || tokens[4] == 5 || tokens[4] == 8)
                    && (tokens[7] ==  3 || tokens[7] == 4 || tokens[7] == 5 || tokens[7] == 8)){
                    state = '2';
                }
                else {
                    state = '3';
                }
            }
            else if (tokens[0] == 9 && tokens[1] == 1 && tokens[3] == 1 && tokens[4] == 10 &&
                tokens[6] == 9 && tokens[7] == 2 && tokens[8] == 1 && tokens[9] == 10){
                if ( (tokens[2] ==  3 || tokens[2] == 4 || tokens[2] == 5 || tokens[2] == 8)
                    && (tokens[5] ==  3 || tokens[5] == 4 || tokens[5] == 5 || tokens[5] == 8)){
                    state = '2';
                }
                else {
                    state = '3';
                }
            }
          }
          else if (tokens.size() == 9) {
            if (tokens[0] == 9 && tokens[3] == 10 && tokens[5] == 9 && tokens[8] == 10){
                if (tokens[1] == tokens[6] && tokens[1] == 2){
                    if (tokens[2] == tokens[7] && tokens[2] == 1){
                        if (tokens[4] == 3 || tokens[4] == 4 || tokens[4] == 5 || tokens[4] == 8){
                            state = '2';
                        }
                        else {
                            state = '1';
                        }
                    }
                    else {
                        state = '1';
                    }
                }
                else {
                    return false;
                }
            }
            else {
                state = '1';
            }
          }
          else if (tokens[i+1] == 1 && tokens[i+2]==10){
            state = '2';
          }else if(state == '1') {
            stack.push_back(9);
          } else {
            state = '2';
          }
          break;
       }else if (tokens[i] == 10){
          if (state == '2') {
            if (stack.back()==9) {
              stack.pop_back();
            }
          }
          break;
       }
      }

    if (stack.size()==0 && state == '2') {
      return "VALID";
    }else{
      return "TIDAK VALID";
    }
}


int main()
{
    string stringInput;
    cout << "Input : ";
    getline(cin,stringInput);

    vector<string> tokenized_text;
    for (int i = 0; i < stringInput .size();i++){
        string kata = "";
        while (i < stringInput.size() && stringInput[i] != ' '){
            kata = kata + stringInput[i];
            i++;
        }
        if (kata != ""){
            tokenized_text.push_back(kata);
        }
    }

    cout << endl << "Output : ";

    vector<int> token ;
    for (int i = 0; i < tokenized_text.size(); i++){
        string g = tokenize(tokenized_text[i]);
        int temp = getToken(g);

        token.push_back(temp);

        if (temp != 0){
           cout << temp << " ";
        }
        else{
            cout << "Error ";
        }
    }

    cout << endl << validator(token);
    return 0;
}
