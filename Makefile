CC = gcc
CFLAGS = -I.
OUTPUT_DIR = ./output

$(OUTPUT_DIR):
	mkdir -p $(OUTPUT_DIR)

all: vect hashlset binarySearch trie patricia

vect: $(OUTPUT_DIR)
	$(CC) -o $(OUTPUT_DIR)/testDicoVect test/testDicoVect.c src/vect.c src/mystring.c src/utils.c $(CFLAGS)

hashlset: $(OUTPUT_DIR)
	$(CC) -o $(OUTPUT_DIR)/testDicoHashlset test/testDicoHashlset.c src/hashlset.c src/mystring.c src/list.c src/utils.c $(CFLAGS)

binarySearch: $(OUTPUT_DIR)
	$(CC) -o $(OUTPUT_DIR)/testDicoBinarySearch test/testDicoBinarySearch.c src/tri.c src/mystring.c src/vect.c src/swap.c src/heap.c src/utils.c $(CFLAGS)

trie: $(OUTPUT_DIR)
	$(CC) -o $(OUTPUT_DIR)/testDicoTrie test/testDicoTrie.c src/trie.c src/mystring.c src/utils.c $(CFLAGS)

patricia: $(OUTPUT_DIR)
	$(CC) -o $(OUTPUT_DIR)/testDicoPatricia test/testDicoPatricia.c src/patricia.c src/mystring.c src/utils.c $(CFLAGS)

run-dico-vect: vect
	./output/testDicoVect test/dico1.txt test/a_la_recherche_du_temps_perdu.txt

run-dico-binarySearch: binarySearch
	./output/testDicoBinarySearch test/dico1.txt test/a_la_recherche_du_temps_perdu.txt

run-dico-hashlset: hashlset
	./output/testDicoHashlset test/dico1.txt test/a_la_recherche_du_temps_perdu.txt

run-dico-trie: trie
	./output/testDicoTrie test/dico1.txt test/a_la_recherche_du_temps_perdu.txt

run-dico-patricia: patricia
	./output/testDicoPatricia test/dico1.txt test/a_la_recherche_du_temps_perdu.txt

clean:
	rm -rf $(OUTPUT_DIR)