clear:
	@ rm -rf *.out

build:
	@ g++ countingsort_c.cpp countingsort.cpp utils.cpp -o countingsort_c.out
	@ g++ countingsort_d.cpp countingsort.cpp utils.cpp -o countingsort_d.out
	@ g++ countingsort_r.cpp countingsort.cpp utils.cpp -o countingsort_r.out

graphs:
	@ g++ graph_countingsort_c.cpp utils.cpp -o graph_countingsort_c.out -lpython3.9
	@ g++ graph_countingsort_d.cpp utils.cpp -o graph_countingsort_d.out -lpython3.9
	@ g++ graph_countingsort_r.cpp utils.cpp -o graph_countingsort_r.out -lpython3.9
	@ g++ graph_all.cpp utils.cpp -o graph_all.out -lpython3.9
