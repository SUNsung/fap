
        
        
FILEPATH = os.path.join(
    os.path.abspath(os.path.dirname(os.path.dirname(__file__))), 'blns.txt')
'''Path to the file'''
    
    define('family', default='unspec',
       help='Address family to query: unspec, inet, or inet6')
    
        warning_message = '''
********************************************************************
WARNING: %s could not
be compiled. No C extensions are essential for Tornado to run,
although they do result in significant speed improvements for
websockets.
%s