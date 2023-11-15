import numpy as np
import matplotlib.pyplot as plt
from scipy.constants import h,k,c

data = np.loadtxt('cmb_data.txt')
frequency=data[:,0]
cmb_flux=data[:,1]

T_cmb = 2.725  # Temperature of the CMB in Kelvin


def black_body_spec(freq,temp):
    return  (2 * h *c* freq**3 ) * (1 / (np.exp((h *c* freq*100) / (k * temp)) - 1))*10**26
bb_spectrum=black_body_spec(frequency,T_cmb)

# Find the wavelength at which the black body spectrum peaks
peak_wavelength_index = np.argmax(bb_spectrum)
peak_wavelength = 1/ frequency[peak_wavelength_index]
print(f"The wavelength at which the black body spectrum peaks is approximately {peak_wavelength} cm.")

# Superimpose the CMB flux
plt.plot(frequency,cmb_flux,label='CMB Flux',linestyle="--")

# Plot the black body spectrum
plt.plot(frequency,bb_spectrum, label='Black Body Spectrum (T=2.725 K)',linestyle="dotted")
plt.legend()
plt.xlabel('Frequency (Hz)')
plt.ylabel('Spectral Radiance')

plt.savefig('cmb_spectrum_plot.pdf')

plt.show()
