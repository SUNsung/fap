
        
        index_title = 0
index_desc = 1
index_auth = 2
index_https = 3
index_cors = 4
index_link = 5
num_segments = 5
    
    # One entry per manual page. List of tuples
# (source start file, name, description, authors, manual section).
man_pages = [
    ('index', 'face_recognition',
     u'Face Recognition Documentation',
     [u'Adam Geitgey'], 1)
]
    
    
def run_test(setup, test, iterations_per_test=5, tests_to_run=10):
    fastest_execution = min(timeit.Timer(test, setup=setup).repeat(tests_to_run, iterations_per_test))
    execution_time = fastest_execution / iterations_per_test
    fps = 1.0 / execution_time
    return execution_time, fps
    
    known_encodings = [
    obama_face_encoding,
    biden_face_encoding
]
    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
    while True:
    print('Capturing image.')
    # Grab a single frame of video from the RPi camera as a numpy array
    camera.capture(output, format='rgb')
    
    import face_recognition
import picamera
import numpy as np
    
    
    # Display the results
    for (top, right, bottom, left), name in zip(face_locations, face_names):
        # Scale back up face locations since the frame we detected in was scaled to 1/4 size
        top *= 4
        right *= 4
        bottom *= 4
        left *= 4
    
    # It false, will not define \strong, \code, 	itleref, \crossref ... but only
# \sphinxstrong, ..., \sphinxtitleref, ... To help avoid clash with user added
# packages.
#
# latex_keep_old_macro_names = True
    
    from homeassistant.core import HomeAssistant
from homeassistant.util.temperature import convert as convert_temperature
from homeassistant.const import PRECISION_HALVES, PRECISION_TENTHS
    
    
def __feet_to_meters(feet: float) -> float:
    '''Convert feet to meters.'''
    return feet * 0.3048
    
    from homeassistant import const
    
        changed = True  # 标记样本类别是否改变
    n_iter = 0  # 记录迭代次数
    while changed and n_iter < max_iter:
        changed = False
        n_iter += 1
    
            return self._call(x)
