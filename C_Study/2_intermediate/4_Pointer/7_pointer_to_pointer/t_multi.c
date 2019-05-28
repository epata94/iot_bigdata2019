int wordsinsentence(char **x) {
    int w = 0;
    while (*x) {
        w += 1;
        x++;
    }
    return w;
}

int wordsinmono(char ***x) {
    int w = 0;
    while (*x) {
        w += wordsinsentence(*x);
        x++;
    }
    return w;
}

int main(void){
	 char *word="banana";
    char **sentence={"apple","banana","mango"};
}