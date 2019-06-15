
        
            with tf.gfile.Open(filename) as f:
      idx = 0
      for line in f:
        word_name = line.strip()
        if word_name == '<S>':
          self._bos = idx
        elif word_name == '</S>':
          self._eos = idx
        elif word_name == '<UNK>':
          self._unk = idx
        if word_name == '!!!MAXTERMID':
          continue
    
      Args:
    logits:  tf.float32 Tensor of the logits of shape [batch_size,
      sequence_length, vocab_size].
    targets:  tf.int32 Tensor of the sequence target of shape [batch_size,
      sequence_length].
    present:  tf.bool Tensor indicating the presence or absence of the token
      of shape [batch_size, sequence_length].
    
        def delete(self, session_key=None):
        if session_key is None:
            if self.session_key is None:
                return
            session_key = self.session_key
        self._cache.delete(self.cache_key_prefix + session_key)
    
        @classmethod
    def get_model_class(cls):
        # Avoids a circular import and allows importing SessionStore when
        # django.contrib.sessions is not in INSTALLED_APPS.
        from django.contrib.sessions.models import Session
        return Session
    
      for group in itervalues( group_name_to_group ):
    parent_names = GetParentNames( group )
    
        # For pickling to work, the __module__ variable needs to be set to the frame
    # where the named tuple is created.  Bypass this step in enviroments where
    # sys._getframe is not defined (Jython for example).
    if hasattr(_sys, '_getframe'):
        result.__module__ = _sys._getframe(1).f_globals.get('__name__', '__main__')
    
    def _python_exit():
    global _shutdown
    _shutdown = True
    items = list(_threads_queues.items())
    for t, q in items:
        q.put(None)
    for t, q in items:
        t.join()