int maxPower(char * s){
    int tmpLength = 1,maxLength = 1;
    for(int i=0,j=1;i<strlen(s)-1 && j<strlen(s);i++,j++)
    {
        if(s[i]== s[j])
        {
            tmpLength++;
            maxLength = fmax(tmpLength,maxLength);
        }else
        {
            tmpLength = 1;
        }
    }
    return maxLength;
}