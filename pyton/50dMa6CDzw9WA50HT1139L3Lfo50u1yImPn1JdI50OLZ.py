
        
            with io.open(infile, encoding='utf-8') as inf:
        issue_template_tmpl = inf.read()
    
    
def get_params(override=None):
    PARAMETERS_FILE = os.path.join(os.path.dirname(os.path.abspath(__file__)),
                                   'parameters.json')
    LOCAL_PARAMETERS_FILE = os.path.join(os.path.dirname(os.path.abspath(__file__)),
                                         'local_parameters.json')
    with io.open(PARAMETERS_FILE, encoding='utf-8') as pf:
        parameters = json.load(pf)
    if os.path.exists(LOCAL_PARAMETERS_FILE):
        with io.open(LOCAL_PARAMETERS_FILE, encoding='utf-8') as pf:
            parameters.update(json.load(pf))
    if override:
        parameters.update(override)
    return parameters
    
        def test_youporn(self):
        self._assert_restricted(
            'http://www.youporn.com/watch/505835/sex-ed-is-it-safe-to-masturbate-daily/',
            '505835.mp4', 2, old_age=25)
    
    
import errno
import io
import json
import re
import subprocess
    
    rootDir = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    
            if check_executable('mplayer', ['-h']):
            args = [
                'mplayer', '-really-quiet', '-vo', 'null', '-vc', 'dummy',
                '-dumpstream', '-dumpfile', tmpfilename, url]
        elif check_executable('mpv', ['-h']):
            args = [
                'mpv', '-really-quiet', '--vo=null', '--stream-dump=' + tmpfilename, url]
        else:
            self.report_error('MMS or RTSP download detected but neither 'mplayer' nor 'mpv' could be run. Please install any.')
            return False
    
    import re
    
    from .nuevo import NuevoBaseIE
    
            raw_payload = self._search_regex([
            r'class='amtv-embed'[^>]+id='([^']+)'',
            r'class=\\'amtv-embed\\'[^>]+id=\\'([^']+)\\'',
        ], webpage, 'raw payload')
        _, stage_mode, video_id, lang = raw_payload.split('-')
    
            webpage = self._download_webpage(url, video_id)