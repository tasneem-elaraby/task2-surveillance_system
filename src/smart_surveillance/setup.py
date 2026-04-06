from setuptools import setup, find_packages

package_name = 'smart_surveillance'

setup(
    name=package_name,
    version='1.0.0',
    packages=find_packages(exclude=['test']),
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='team',
    maintainer_email='team@example.com',
    description='Distributed Smart Security Surveillance System',
    license='MIT',
    entry_points={
        'console_scripts': [
            'camera_stream      = smart_surveillance.camera_stream:main',
            'object_detector    = smart_surveillance.object_detector:main',
            'depth_estimator    = smart_surveillance.depth_estimator:main',
            'scene_analyzer     = smart_surveillance.scene_analyzer:main',
            'event_manager      = smart_surveillance.event_manager:main',
            'security_response  = smart_surveillance.security_response:main',
            'event_logger       = smart_surveillance.event_logger:main',
            'system_monitor     = smart_surveillance.system_monitor:main',
        ],
    },
)
