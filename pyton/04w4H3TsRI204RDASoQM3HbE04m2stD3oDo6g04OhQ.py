
        
        
@pytest.mark.functional
def test_refuse_with_confirmation(proc, TIMEOUT):
    refuse_with_confirmation(proc, TIMEOUT)
    
    
class Contract(object):
    ''' Abstract class for contracts '''
    
    
class CookiesMiddleware(object):
    '''This middleware enables working with sites that need cookies'''
    
            for fmt, func in six.iteritems(self._formats):
            new_response = func(response)
            if new_response:
                logger.debug('Decompressed response with format: %(responsefmt)s',
                             {'responsefmt': fmt}, extra={'spider': spider})
                return new_response
        return response

    
        def process_request(self, request, spider):
        if self._timeout:
            request.meta.setdefault('download_timeout', self._timeout)

    
                    if self.accept[s] >= 1:
                    #print 'accept state for alt %d' % self.accept[s]
                    return self.accept[s]
    
            # If you are parsing a tree node stream, you will encounter som
        # imaginary nodes w/o line/col info.  We now search backwards looking
        # for most recent token with line/col info, but notify getErrorHeader()
        # that info is approximate.
        self.approximateLineInfo = False
    
    from sqlalchemy import create_engine
from sqlalchemy.orm import scoped_session, sessionmaker