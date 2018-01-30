
        
        from ..common import *
from ..extractor import VideoExtractor
    
        for i in range(10, 30):
        url = 'https://stream{i}.mixcloud.com/c/m4a/64{p}.m4a'.format(
            i = i,
            p = preview
        )
        try:
            mime, ext, size = url_info(url)
            break
        except: continue
    
    
def jump(distance):
    press_time = distance * time_coefficient
    press_time = press_time
    print('press_time = ',press_time)
    s.tap_hold(200, 200, press_time)