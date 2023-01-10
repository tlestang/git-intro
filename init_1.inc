# -- mode: org; --

#+NAME: init
#+begin_src shell :exports none
  rm -rf .git && git init
  rm -f plot_data.py example_data.csv
  git am ../1-start/*.patch
#+end_src

#+NAME: save-patches
#+begin_src shell :exports none
  git format-patch -o ../undo_reset/ HEAD~3 > /dev/null
#+end_src

#+NAME: apply-patch
#+begin_src diff :exports none
  diff --git a/plot_data.py b/plot_data.py
  index 85bbb3b..549bd9a 100644
  --- a/plot_data.py
  +++ b/plot_data.py
  @@ -1,6 +1,7 @@
   import numpy
   import matplotlib.pyplot as plt
 
  -data = numpy.loadtxt("example_data.csv", delimiter=",")
  +filename = "example_data.csv"
  +data = numpy.loadtxt(filename, delimiter=",")
   plt.plot(data[:, 0], data[:, 1])
   plt.title("A title")
#+end_src
