
        
        
def side_effect(old_cmd, command):
    with tarfile.TarFile(_tar_file(old_cmd.script_parts)[0]) as archive:
        for file in archive.getnames():
            try:
                os.remove(file)
            except OSError:
                # does not try to remove directories as we cannot know if they
                # already existed before
                pass

    
    containers = (('thefuck/python3-tcsh',
               u'''FROM python:3
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'),
              ('thefuck/python2-tcsh',
               u'''FROM python:2
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'))
    
        close_server = threading.Event()
    server = Server(digest_response_handler, wait_to_close_event=close_server)
    
    # Check minimum required Python version
import sys
if sys.version_info < (2, 7):
    print('Scrapy %s requires Python 2.7' % __version__)
    sys.exit(1)
    
    
class Command(ScrapyCommand):
    
    
class TextTestResult(_TextTestResult):
    def printSummary(self, start, stop):
        write = self.stream.write
        writeln = self.stream.writeln
    
        def tested_methods_from_spidercls(self, spidercls):
        methods = []
        for key, value in vars(spidercls).items():
            if (callable(value) and value.__doc__ and
                    re.search(r'^\s*@', value.__doc__, re.MULTILINE)):
                methods.append(key)
    
        def __init__(self, timeout=180):
        self._timeout = timeout
    
        @classmethod
    def from_settings(cls, settings):
        debug = settings.getbool('DUPEFILTER_DEBUG')
        return cls(job_dir(settings), debug)