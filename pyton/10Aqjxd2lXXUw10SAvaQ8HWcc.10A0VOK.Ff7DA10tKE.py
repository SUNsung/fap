
        
        
# Certain versions of pypy have a bug where clearing the exception stack
# breaks the __exit__ function in a very peculiar way.  The second level of
# exception blocks is necessary because pypy seems to forget to check if an
# exception happened until the next bytecode instruction?
#
# Relevant PyPy bugfix commit:
# https://bitbucket.org/pypy/pypy/commits/77ecf91c635a287e88e60d8ddb0f4e9df4003301
# According to ronan on #pypy IRC, it is released in PyPy2 2.3 and later
# versions.
#
# Ubuntu 14.04 has PyPy 2.2.1, which does exhibit this bug.
BROKEN_PYPY_CTXMGR_EXIT = False
if hasattr(sys, 'pypy_version_info'):
    
        #: When data is changed, this is set to ``True``. Only the session
    #: dictionary itself is tracked; if the session contains mutable
    #: data (for example a nested dict) then this must be set to
    #: ``True`` manually when modifying that data. The session cookie
    #: will only be written to the response if this is ``True``.
    modified = False
    
    
def unicode_is_ascii(u_string):
    '''Determine if unicode string only contains ASCII characters.
    
        def lower_items(self):
        '''Like iteritems(), but with all lowercase keys.'''
        return (
            (lowerkey, keyval[1])
            for (lowerkey, keyval)
            in self._store.items()
        )
    
        return {
        'platform': platform_info,
        'implementation': implementation_info,
        'system_ssl': system_ssl_info,
        'using_pyopenssl': pyopenssl is not None,
        'pyOpenSSL': pyopenssl_info,
        'urllib3': urllib3_info,
        'chardet': chardet_info,
        'cryptography': cryptography_info,
        'idna': idna_info,
        'requests': {
            'version': requests_version,
        },
    }
    
            # Verify we haven't overwritten the location with our previous fragment.
        assert r.history[1].request.url == 'http://{}:{}/get#relevant-section'.format(host, port)
        # Verify previous fragment is used and not the original.
        assert r.url == 'http://{}:{}/final-url/#relevant-section'.format(host, port)
    
        @pytest.mark.parametrize(
        ('encoding', 'expected'), (
            ('utf-16-be', 'utf-16'),
            ('utf-16-le', 'utf-16'),
            ('utf-32-be', 'utf-32'),
            ('utf-32-le', 'utf-32')
        ))
    def test_guess_by_bom(self, encoding, expected):
        data = u'\ufeff{}'.encode(encoding)
        assert guess_json_utf(data) == expected
    
        def test_copy(self):
        cid = CaseInsensitiveDict({
            'Accept': 'application/json',
            'user-Agent': 'requests',
        })
        cid_copy = cid.copy()
        assert cid == cid_copy
        cid['changed'] = True
        assert cid != cid_copy
    
        def delete_face_at_index(self, frame, idx):
        ''' Delete the face alignment for given frame at given index '''
        logger.debug('Deleting face %s for frame '%s'', idx, frame)
        idx = int(idx)
        if idx + 1 > self.count_faces_in_frame(frame):
            logger.debug('No face to delete: (frame: '%s', idx %s)', frame, idx)
            return False
        del self.data[frame][idx]
        logger.debug('Deleted face: (frame: '%s', idx %s)', frame, idx)
        return True
    
            if self.config.get('mask_type', None):
            var_y = input_
            var_y = self.blocks.upscale(var_y, decoder_complexity)
            var_y = self.blocks.upscale(var_y, decoder_complexity)
            var_y = self.blocks.upscale(var_y, decoder_complexity // 2)
            var_y = self.blocks.upscale(var_y, decoder_complexity // 4)
            var_y = Conv2D(1, kernel_size=5, padding='same', activation='sigmoid')(var_y)
            outputs.append(var_y)
        return KerasModel(input_, outputs=outputs)
    
        def store_history(self, side, loss):
        ''' Store the history of this step '''
        logger.trace('Updating loss history: '%s'', side)
        self.model.history[side].append(loss[0])  # Either only loss or total loss
        logger.trace('Updated loss history: '%s'', side)
    
    import locale
import logging
import os
import sys
import tkinter as tk
    
            lbltitle = ttk.Label(statusframe, text='Status:', width=6, anchor=tk.W)
        lbltitle.pack(side=tk.LEFT, expand=False)
    
        def compute_output_shape(self, input_shape):
        ''' If you are using 'channels_last' configuration'''
        input_shape = self.input_spec[0].shape
        in_width, in_height = input_shape[2], input_shape[1]
        kernel_width, kernel_height  = self.kernel_size, self.kernel_size