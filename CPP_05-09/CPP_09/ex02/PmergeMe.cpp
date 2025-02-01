#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <cctype>
#include <deque>
#include <ctime>

void sortVector(std::vector<int>& vec)
{
	if (vec.size() < 2) {
		return ;
	}
	std::vector<int> winners;
	std::vector<int> losers;

	for (size_t i = 0; i < vec.size(); i += 2) {
		if (i + 1 < vec.size()) {
			if (vec[i] < vec[i + 1]) {
				winners.push_back(vec[i + 1]);
				losers.push_back(vec[i]);
			} else {
				winners.push_back(vec[i]);
				losers.push_back(vec[i + 1]);
			}
		}
		else
			winners.push_back(vec[i]);
	}
	sortVector(winners);

	for (size_t i = 0; i < losers.size(); ++i) {
		size_t pos = 0;
		while (pos < winners.size() && winners[pos] < losers[i]) {
			++pos;
		}
		winners.insert(winners.begin() + pos, losers[i]);
	}

	vec = winners;
}

void sortDeque(std::deque<int>& deq)
{
	if (deq.size() < 2)
		return;

	std::deque<int> winners;
	std::deque<int> losers;

	for (size_t i = 0; i < deq.size(); i += 2) {
		if (i + 1 < deq.size()) {
			if (deq[i] < deq[i + 1]) {
				winners.push_back(deq[i + 1]);
				losers.push_back(deq[i]);
			} else {
				winners.push_back(deq[i]);
				losers.push_back(deq[i + 1]);
			}
		} else {
			winners.push_back(deq[i]);
		}
	}

	sortDeque(winners);

	for (size_t i = 0; i < losers.size(); ++i) {
		size_t pos = 0;
		while (pos < winners.size() && winners[pos] < losers[i]) {
			++pos;
		}
		winners.insert(winners.begin() + pos, losers[i]);
	}

	deq = winners;
}
