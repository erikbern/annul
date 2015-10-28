from setuptools import setup, Extension
import codecs
import os
import sys

setup(name='annul',
      version='0.0.',
      description='Successor to Annoy',
      packages=['annul'],
      ext_modules=[
          Extension(
              'annul.annullib', ['src/annulmodule.cc', 'src/lmdb/libraries/liblmdb/mdb.c'],
              depends=['src/annullib.h'],
              extra_compile_args=['-O3', '-march=native', '-ffast-math'],
          )
      ],
      author='Erik Bernhardsson',
      author_email='mail@erikbern.com',
      setup_requires=['nose>=1.0']
)
