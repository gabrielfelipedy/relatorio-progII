clear:
	@ rm -rf *.out

graphs:
	@ g++ compquickmerge_c.cpp quicksort/utils.cpp -lpython3.9 -o compquickmerge_c.out
	@ g++ compquickmerge_d.cpp quicksort/utils.cpp -lpython3.9 -o compquickmerge_d.out
	@ g++ compquickmerge_r.cpp quicksort/utils.cpp -lpython3.9 -o compquickmerge_r.out 