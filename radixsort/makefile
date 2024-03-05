clear:
	@ rm -rf *.out

build:
	@ g++ radixsort_c.cpp radixsort.cpp utils.cpp -o radixsort_c.out
	@ g++ radixsort_d.cpp radixsort.cpp utils.cpp -o radixsort_d.out
	@ g++ radixsort_r.cpp radixsort.cpp utils.cpp -o radixsort_r.out

graphs:
	@ g++ graph_radixsort_c.cpp utils.cpp -o graph_radixsort_c.out -lpython3.9
	@ g++ graph_radixsort_d.cpp utils.cpp -o graph_radixsort_d.out -lpython3.9
	@ g++ graph_radixsort_r.cpp utils.cpp -o graph_radixsort_r.out -lpython3.9
	@ g++ graph_all.cpp utils.cpp -o graph_all.out -lpython3.9
