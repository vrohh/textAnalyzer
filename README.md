# textAnalyzer

Given the text file UAH_sample.txt  write a program that performs the following tasks:

Find and count all words that are from 1 to 10 letters long. Print the results to the screen as a table.
Special circumstances:
You should not count punctuation at the end of a word as part of the word. Just erase the punctuation or subtract 1 from the length. (If a punctuation occurs in the middle of the word, like UAH's then you don't have to remove it.)
Do not count numbers as words or any words that have a number embedded in them.
You do not need to remove apostrophes. Just count that as part of the length.
Multiple words connected by dashes, like state-of-the-art, can be counted as one long word.
The table below shows the actual counts after ending punctuation has been removed.

It's possible to process the last word in the file, education, twice. Make sure you only process it once.
