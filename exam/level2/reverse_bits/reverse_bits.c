unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char reverse;
    int i = 0;
    while(i < 8)
    {
        reverse = ((reverse << 1) | (octet & 1));
        octet >>= 1;
        i++;
    }
    return(reverse);
}