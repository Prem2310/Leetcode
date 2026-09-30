class Solution:
    def coinChange(self, coins: list[int], amount: int) -> int:
        coins.sort()
        dp = [0]*(amount+1)

        for i in range(1, amount+1):
            minn = float('inf')

            for coin in coins:
                amm = i - coin
                if amm < 0:
                    break
                minn = min(minn, dp[amm]+1)
            
            dp[i] = minn

        if dp[amount] < float('inf'):
            return dp[amount]
        else:
            return -1