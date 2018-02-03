
        
            This also works with nominal (non-numeric) data:
    
            class complex2(complex): pass
        self.assertAlmostEqual(complex(complex2(1+1j)), 1+1j)
        self.assertAlmostEqual(complex(real=17, imag=23), 17+23j)
        self.assertAlmostEqual(complex(real=17+23j), 17+23j)
        self.assertAlmostEqual(complex(real=17+23j, imag=23), 17+46j)
        self.assertAlmostEqual(complex(real=1+2j, imag=3+4j), -3+5j)