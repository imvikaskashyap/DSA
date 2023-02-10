const anagrams = (arr) => {
	let result = {};

	arr.forEach((word) => {
		const sortedWord = word.split("").sort().join("");
		result[sortedWord]
			? result[sortedWord].push(word)
			: (result[sortedWord] = [word]);
	});

	return Object.values(result);
};
