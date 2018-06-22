    @app.route('/')
    def index():
        return flask.render_template('template_filter.html', value='abcd')
    
    
class MissingTokenException(MismatchedTokenException):
    '''
    We were expecting a token but it's not found.  The current token
    is actually what we wanted next.
    '''
    
                # is there a channel override for token type?
            try:
                overrideChannel = self.channelOverrideMap[t.type]
                
            except KeyError:
                # no override for this type
                pass
            
            else:
                if overrideChannel == self.channel:
                    t.channel = overrideChannel
                else:
                    discard = True
            
            if not discard:
                t.index = index
                self.tokens.append(t)
                index += 1