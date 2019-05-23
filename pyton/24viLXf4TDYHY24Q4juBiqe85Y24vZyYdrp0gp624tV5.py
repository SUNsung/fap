
        
        
class CreateExtension(Operation):
    reversible = True
    
            r = None
        try:
            r = Redirect.objects.get(site=current_site, old_path=full_path)
        except Redirect.DoesNotExist:
            pass
        if r is None and settings.APPEND_SLASH and not request.path.endswith('/'):
            try:
                r = Redirect.objects.get(
                    site=current_site,
                    old_path=request.get_full_path(force_append_slash=True),
                )
            except Redirect.DoesNotExist:
                pass
        if r is not None:
            if r.new_path == '':
                return self.response_gone_class()
            return self.response_redirect_class(r.new_path)
    
        def delete(self, session_key=None):
        super().delete(session_key)
        if session_key is None:
            if self.session_key is None:
                return
            session_key = self.session_key
        self._cache.delete(self.cache_key_prefix + session_key)
    
    
class BaseSessionManager(models.Manager):
    def encode(self, session_dict):
        '''
        Return the given session dictionary serialized and encoded as a string.
        '''
        session_store_class = self.model.get_session_store_class()
        return session_store_class().encode(session_dict)
    
    # [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
    
            if isinstance(self.input, TokenStream):
            return self.token.type
    
            if self.input is None:
            return None
        
        return self.input.substring(self.start, self.stop)
    
            # <<<<<< OUTPUT  OPTIONS >>>>>> #
        section = 'writer.gif'
        self.add_section(title=section,
                         info='Options for outputting converted frames to an animated gif.')
        self.add_item(
            section=section, title='fps', datatype=int, min_max=(1, 60),
            rounding=1, default=25,
            info='Frames per Second.')
        self.add_item(
            section=section, title='loop', datatype=int, min_max=(0, 100),
            rounding=1, default=0,
            info='The number of iterations. Set to 0 to loop indefinitely.')
        self.add_item(
            section=section, title='palettesize', datatype=str, default='256',
            choices=['2', '4', '8', '16', '32', '64', '128', '256'],
            info='The number of colors to quantize the image to. Is rounded to the nearest power '
                 'of two.')
        self.add_item(
            section=section, title='subrectangles', datatype=bool, default=False,
            info='If True, will try and optimize the GIF by storing only the rectangular parts of '
                 'each frame that change with respect to the previous.')
    
    from keras.initializers import RandomNormal
from keras.layers import add, Conv2D, Dense, Flatten, Input, Reshape
from keras.models import Model as KerasModel
    
        def progress_bar(self):
        ''' Place progress bar into bottom bar '''
        progressframe = ttk.Frame(self)
        progressframe.pack(side=tk.RIGHT, anchor=tk.E, fill=tk.X)