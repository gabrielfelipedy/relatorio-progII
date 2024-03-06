clear:
	@ rm -rf *.out

graphs:
	@ g++ compquickheap_c.cpp quicksort/utils.cpp -lpython3.9 -o compquickheap_c.out
	@ g++ compquickheap_d.cpp quicksort/utils.cpp -lpython3.9 -o compquickheap_d.out
	@ g++ compquickheap_r.cpp quicksort/utils.cpp -lpython3.9 -o compquickheap_r.out
	@ g++ compquickcounting_c.cpp quicksort/utils.cpp -lpython3.9 -o compquickcounting_c.out
	@ g++ compquickcounting_d.cpp quicksort/utils.cpp -lpython3.9 -o compquickcounting_d.out
	@ g++ compquickcounting_r.cpp quicksort/utils.cpp -lpython3.9 -o compquickcounting_r.out 