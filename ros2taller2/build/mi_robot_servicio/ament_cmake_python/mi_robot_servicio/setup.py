from setuptools import find_packages
from setuptools import setup

setup(
    name='mi_robot_servicio',
    version='0.0.0',
    packages=find_packages(
        include=('mi_robot_servicio', 'mi_robot_servicio.*')),
)
