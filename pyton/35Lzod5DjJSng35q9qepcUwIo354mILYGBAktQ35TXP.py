
        
            # Replacing the non-sorted libraries by the sorted ones and gathering all at the final_README file
    blocks[0] = inner_blocks
    final_README = table_of_contents + '- - -' + ''.join(blocks)
    
            ydl = FakeYDL({
            'proxy': '%s://127.0.0.1:%d' % (protocol, self.port),
        })
        return ydl.urlopen('http://yt-dl.org/ip').read().decode('utf-8')
    
    
class AudiMediaIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?audi-mediacenter\.com/(?:en|de)/audimediatv/(?P<id>[^/?#]+)'
    _TEST = {
        'url': 'https://www.audi-mediacenter.com/en/audimediatv/60-seconds-of-audi-sport-104-2015-wec-bahrain-rookie-test-1467',
        'md5': '79a8b71c46d49042609795ab59779b66',
        'info_dict': {
            'id': '1565',
            'ext': 'mp4',
            'title': '60 Seconds of Audi Sport 104/2015 - WEC Bahrain, Rookie Test',
            'description': 'md5:60e5d30a78ced725f7b8d34370762941',
            'upload_date': '20151124',
            'timestamp': 1448354940,
            'duration': 74022,
            'view_count': int,
        }
    }
    # extracted from https://audimedia.tv/assets/embed/embedded-player.js (dataSourceAuthToken)
    _AUTH_TOKEN = 'e25b42847dba18c6c8816d5d8ce94c326e06823ebf0859ed164b3ba169be97f2'
    
    
def jump(distance):
    press_time = distance * 1.35
    press_time = int(press_time)
    cmd = 'adb shell input swipe 320 410 320 410 ' + str(press_time)
    print(cmd)
    os.system(cmd)
    
    
def computing_k_b_v(target_distance):
    result = linear_model_main(distances, press_times, target_distance)
    b = result['intercept']
    k = result['coefficient']
    v = result['value']
    return k[0], b[0], v[0]