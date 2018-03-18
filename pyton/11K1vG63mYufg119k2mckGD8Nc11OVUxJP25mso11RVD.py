
        
        
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
    
    
class Command(ScrapyCommand):
    
            e.g.:
        @returns request
        @returns request 2
        @returns request 2 10
        @returns request 0 10
    '''
    
                f = _base.Future()
            w = _WorkItem(f, fn, args, kwargs)
    
    try:
    import queue
except ImportError:
    import Queue as queue
    
    
  def Response( self ):
    if self._cached_response:
      return self._cached_response