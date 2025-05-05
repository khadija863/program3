//1.LCS
#include <stdio.h>
#include <string.h>
void lcs(char S1[], char S2[]) {
    int m = strlen(S1), n = strlen(S2), LCS[m+1][n+1], i, j;
    for (i = 0; i <= m; i++)
        for (j = 0; j <= n; j++)
            LCS[i][j] = (!i || !j) ? 0 : (S1[i-1] == S2[j-1]) ? LCS[i-1][j-1] + 1 :
                        (LCS[i-1][j] > LCS[i][j-1] ? LCS[i-1][j] : LCS[i][j-1]);

    char LCS_seq[LCS[m][n] + 1];
    LCS_seq[LCS[m][n]] = '\0';
    int len = LCS[m][n];

    while (m && n)
        (S1[m-1] == S2[n-1]) ? (LCS_seq[--len] = S1[--m], n--) :
        (LCS[m-1][n] > LCS[m][n-1] ? m-- : n--);

    printf("LCS: %s\n", LCS_seq);
}

int main() {
    char S1[100], S2[100];
    printf("Enter first string: "); scanf("%s", S1);
    printf("Enter second string: "); scanf("%s", S2);

    lcs(S1, S2);
    return 0;
}

