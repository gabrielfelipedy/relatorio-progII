clear:
	@ rm -rf *.out

build:
	@ g++ quick_sort_pm_d.cpp quicksort_m.cpp utils.cpp -o quick_sort_pm_d.out 
	@ g++ quick_sort_pm_c.cpp quicksort_m.cpp utils.cpp -o quick_sort_pm_c.out 
	@ g++ quick_sort_pm_r.cpp quicksort_m.cpp utils.cpp -o quick_sort_pm_r.out

	@ g++ quick_sort_pr_d.cpp quicksort_r.cpp utils.cpp -o quick_sort_pr_d.out 
	@ g++ quick_sort_pr_c.cpp quicksort_r.cpp utils.cpp -o quick_sort_pr_c.out 
	@ g++ quick_sort_pr_r.cpp quicksort_r.cpp utils.cpp -o quick_sort_pr_r.out

graphs:
	@ g++ graph_quick_sort_pm_d.cpp utils.cpp -o graph_quick_sort_pm_d.out -lpython3.9
	@ g++ graph_quick_sort_pm_c.cpp utils.cpp -o graph_quick_sort_pm_c.out -lpython3.9
	@ g++ graph_quick_sort_pm_r.cpp utils.cpp -o graph_quick_sort_pm_r.out -lpython3.9
	@ g++ graph_quick_sort_pr_d.cpp utils.cpp -o graph_quick_sort_pr_d.out -lpython3.9
	@ g++ graph_quick_sort_pr_c.cpp utils.cpp -o graph_quick_sort_pr_c.out -lpython3.9
	@ g++ graph_quick_sort_pr_r.cpp utils.cpp -o graph_quick_sort_pr_r.out -lpython3.9
	@ g++ graph_all_m.cpp utils.cpp -o graph_all_m.out -lpython3.9
	@ g++ graph_all_r.cpp utils.cpp -o graph_all_r.out -lpython3.9