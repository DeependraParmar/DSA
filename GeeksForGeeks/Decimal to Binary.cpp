/*
int pow(int i)
{
    int ans = 1;
    for (int j = 0; j < i; j++)
    {
        ans *= 10;
    }
    return ans;
}
void toBinary(int N)
{
    int n = N;
    int binary = 0;
    for (int i = 0; n != 0; i++)
    {
        int bit = n & 1;
        binary += (bit * pow(i));
        n >>= 1;
    }
    cout << binary;
}
*/