class Solution {
public:
    string getHint(string secret, string guess) {
        int cntA = 0, cntB = 0;
		int NumSecret[10] = {0};
		int NumGuess[10] = {0};
		for(int i = 0; i < secret.size(); i++)
		{
			if(secret[i] == guess[i]) 
				cntA++;
			NumSecret[secret[i]-'0']++;
			NumGuess[guess[i]-'0']++;
		}
		for(int i = 0; i < 10; i++)
		{
			if(NumSecret[i] >= NumGuess[i])
				cntB += NumGuess[i];
			else cntB += NumSecret[i];
		}
		cntB -= cntA;

		char c_cntA[10]; sprintf(c_cntA,"%d",cntA);
		char c_cntB[10]; sprintf(c_cntB,"%d",cntB);

		string resault;
		resault += c_cntA;
		resault += 'A';
		resault += c_cntB;
		resault += 'B';

		return resault;
    }
};