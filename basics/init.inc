# -- mode: org; --

#+NAME: init
#+begin_src shell :exports none
  rm -rf .git
  cp -f ../0-start/plot_data.py .
  cp -f ../0-start/example_data.csv .
#+end_src

#+NAME: format-patches
#+begin_src shell :exports none
  git format-patch --root --output-directory ../1-start
#+end_src
