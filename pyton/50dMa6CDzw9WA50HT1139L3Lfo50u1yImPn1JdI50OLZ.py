
        
        
class Unaccent(Transform):
    bilateral = True
    lookup_name = 'unaccent'
    function = 'UNACCENT'
    
        def exists(self, session_key):
        '''
        Return True if the given session_key already exists.
        '''
        raise NotImplementedError('subclasses of SessionBase must provide an exists() method')
    
        def flush(self):
        '''
        Remove the current session data from the database and regenerate the
        key.
        '''
        self.clear()
        self.delete(self.session_key)
        self._session_key = None

    
    
def _get_sitemap_full_url(sitemap_url):
    if not django_apps.is_installed('django.contrib.sites'):
        raise ImproperlyConfigured('ping_google requires django.contrib.sites, which isn't installed.')
    
    
class Antirectifier(layers.Layer):
    '''This is the combination of a sample-wise
    L2 normalization with the concatenation of the
    positive part of the input with the negative part
    of the input. The result is a tensor of samples that are
    twice as large as the input samples.
    
    
def top_k_categorical_accuracy(y_true, y_pred, k=5):
    return K.mean(K.in_top_k(y_pred, K.argmax(y_true, axis=-1), k), axis=-1)
    
    
def get(identifier):
    if identifier is None:
        return None
    if isinstance(identifier, dict):
        return deserialize(identifier)
    elif isinstance(identifier, six.string_types):
        config = {'class_name': str(identifier), 'config': {}}
        return deserialize(config)
    elif callable(identifier):
        return identifier
    else:
        raise ValueError('Could not interpret regularizer identifier: ' +
                         str(identifier))

    
            return False
    
    def message_html(title, banner, detail=''):
    MESSAGE_TEMPLATE = '''
    <html><head>
    <meta http-equiv='content-type' content='text/html;charset=utf-8'>
    <title>$title</title>
    <style><!--
    body {font-family: arial,sans-serif}
    div.nav {margin-top: 1ex}
    div.nav A {font-size: 10pt; font-family: arial,sans-serif}
    span.nav {font-size: 10pt; font-family: arial,sans-serif; font-weight: bold}
    div.nav A,span.big {font-size: 12pt; color: #0000cc}
    div.nav A {font-size: 10pt; color: black}
    A.l:link {color: #6f6f6f}
    A.u:link {color: green}
    //--></style>
    </head>
    <body text=#000000 bgcolor=#ffffff>
    <table border=0 cellpadding=2 cellspacing=0 width=100%>
    <tr><td bgcolor=#3366cc><font face=arial,sans-serif color=#ffffff><b>Message</b></td></tr>
    <tr><td> </td></tr></table>
    <blockquote>
    <H1>$banner</H1>
    $detail
    <p>
    </blockquote>
    <table width=100% cellpadding=0 cellspacing=0><tr><td bgcolor=#3366cc><img alt='' width=1 height=4></td></tr></table>
    </body></html>
    '''
    return string.Template(MESSAGE_TEMPLATE).substitute(title=title, banner=banner, detail=detail)
    
    
    def getText(self):
        '''
        Return the text matched so far for the current token or any
        text override.
        '''
        if self._state.text is not None:
            return self._state.text
        
        return self.input.substring(
            self._state.tokenStartCharIndex,
            self.getCharIndex()-1
            )
    
        def test_iter_meta(self):
        result = False
        for k in self.dir.meta:
            if k == 'terms_of_service':
                result = self.dir.meta[k] == 'https://example.com/acme/terms'
        self.assertTrue(result)
    
        Takes in Augeas path and returns the file name
    
                # If equal and set is not empty... assume same server
            if self.name is not None or self.aliases:
                return True
        # If we're looking for a generic vhost,
        # don't return one with a ServerName
        elif self.name:
            return False
    
        @certbot_util.patch_get_utility()
    def test_multiple_names(self, mock_util):
        mock_util().menu.return_value = (display_util.OK, 5)
    
        _multiprocess_can_split_ = True
    
            self.assertTrue(self.addr_default.conflicts(self.addr))
        self.assertTrue(self.addr_default.conflicts(self.addr1))
        self.assertTrue(self.addr_default.conflicts(self.addr_defined))