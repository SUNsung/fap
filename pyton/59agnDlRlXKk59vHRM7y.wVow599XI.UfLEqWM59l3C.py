
        
            :param url: URL for the new :class:`Request` object.
    :param data: (optional) Dictionary (will be form-encoded), bytes, or file-like object to send in the body of the :class:`Request`.
    :param json: (optional) json data to send in the body of the :class:`Request`.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
    
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
    
class InvalidProxyURL(InvalidURL):
    '''The proxy URL provided is invalid.'''
    
        By default this will get the strings from the blns.txt file
    
      with patch( 'ycm.client.event_notification.EventNotification.'
              'PostDataToHandlerAsync' ) as post_data_to_handler_async:
    with MockVimBuffers( [ current_buffer, modified_buffer, unmodified_buffer ],
                         current_buffer,
                         ( 1, 5 ) ):
      ycm.OnBufferVisit()
    
    
def SendShutdownRequest():
  request = ShutdownRequest()
  # This is a blocking call.
  request.Start()
