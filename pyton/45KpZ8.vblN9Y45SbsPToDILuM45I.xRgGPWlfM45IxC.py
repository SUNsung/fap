
        
        
from constants import *
from dfa import *
from exceptions import *
from recognizers import *
from streams import *
from tokens import *

    
        def setTokenSource(self, tokenSource):
        '''Reset this token stream by setting its token source.'''
        
        self.tokenSource = tokenSource
        self.tokens = []
        self.p = -1
        self.channel = DEFAULT_CHANNEL
    
        '''
    
    def __init__(self, type=None, channel=DEFAULT_CHANNEL, text=None,
                 input=None, start=None, stop=None, oldToken=None):
        Token.__init__(self)
        
        if oldToken is not None:
            self.type = oldToken.type
            self.line = oldToken.line
            self.charPositionInLine = oldToken.charPositionInLine
            self.channel = oldToken.channel
            self.index = oldToken.index
            self._text = oldToken._text
            if isinstance(oldToken, CommonToken):
                self.input = oldToken.input
                self.start = oldToken.start
                self.stop = oldToken.stop
            
        else:
            self.type = type
            self.input = input
            self.charPositionInLine = -1 # set to invalid position
            self.line = 0
            self.channel = channel
            
	    #What token number is this from 0..n-1 tokens; < 0 implies invalid index
            self.index = -1
            
            # We need to be able to change the text once in a while.  If
            # this is non-null, then getText should return this.  Note that
            # start/stop are not affected by changing this.
            self._text = text
    
    
class Migration(DataMigration):
    def forwards(self, orm):
        db.commit_transaction()
        try:
            self._forwards(orm)
        except Exception:
            # Explicitly resume the transaction because
            # South is going to try and roll it back, but when
            # it can't find one, it'll error itself, masking
            # the actual exception being raised
            #
            # See https://github.com/getsentry/sentry/issues/5035
            db.start_transaction()
            raise
        db.start_transaction()
    
            # Adding field 'ApiToken.scope_list'
        db.add_column(
            'sentry_apitoken',
            'scope_list',
            self.gf('sentry.db.models.fields.array.ArrayField')(
                of=('django.db.models.fields.TextField', [], {})
            ),
            keep_default=False
        )