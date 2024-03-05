clear:
	@ rm -rf *.out

build:
	@ g++ heapsort_c.cpp heapsort.cpp utils.cpp -o heapsort_c.out
	@ g++ heapsort_d.cpp heapsort.cpp utils.cpp -o heapsort_d.out
	@ g++ heapsort_r.cpp heapsort.cpp utils.cpp -o heapsort_r.out

graphs:
	@ g++ graph_heapsort_c.cpp utils.cpp -o graph_heapsort_c.out -lpython3.9
	@ g++ graph_heapsort_d.cpp utils.cpp -o graph_heapsort_d.out -lpython3.9
	@ g++ graph_heapsort_r.cpp utils.cpp -o graph_heapsort_r.out -lpython3.9
	@ g++ graph_all.cpp utils.cpp -o graph_all.out -lpython3.9
