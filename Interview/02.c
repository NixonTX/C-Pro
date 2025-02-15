// Hackathon
int recurse(int num) {
    if (num == 0) {
        return 0;
    }
    // int res = recurse+ (num-1);
    // return res;
    return num + recurse(num - 1);
}