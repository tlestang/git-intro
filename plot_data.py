import numpy
import matplotlib.pyplot as plt

data = numpy.loadtxt("example_data.csv", delimiter=",")
plt.plot(data[:, 0], data[:, 1])
plt.title("A title")
