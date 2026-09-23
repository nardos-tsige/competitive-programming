class Solution:
    def findRelativeRanks(self, score: list[int]) -> list[str]:
        sorted_scores = sorted(score, reverse=True)
        rank_map = {}
        
        for i, s in enumerate(sorted_scores):
            if i == 0:
                rank_map[s] = "Gold Medal"
            elif i == 1:
                rank_map[s] = "Silver Medal"
            elif i == 2:
                rank_map[s] = "Bronze Medal"
            else:
                rank_map[s] = f"{i + 1}"
        answer = []
        for s in score:
            answer.append(rank_map[s])
            
        return answer
