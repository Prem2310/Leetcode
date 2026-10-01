class Solution:
    def change(self, amount: int, coins: list[int]) -> int:
        dp = [1] + [0] *(amount)
        
        for coin in coins:
            for amm in range(coin, amount+1):
                dp[amm] += dp[amm - coin]
        
        return dp[amount]
            
