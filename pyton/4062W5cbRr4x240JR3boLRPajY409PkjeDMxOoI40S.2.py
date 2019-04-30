
        
        def main():
    print('Making key files...')
    makeKeyFiles('rsa', 1024)
    print('Key files generation successful.')
    
    
class EditDistance:
    '''
    Use :
    solver              = EditDistance()
    editDistanceResult  = solver.solve(firstString, secondString)
    '''
    
    #Some examples
    
        return diff

    
    '''
* Wondering how this method works !
* It's pretty simple.
* Let's say you need to calculate a ^ b
* RULE 1 : a ^ b = (a*a) ^ (b/2) ---- example : 4 ^ 4 = (4*4) ^ (4/2) = 16 ^ 2
* RULE 2 : IF b is ODD, then ---- a ^ b = a * (a ^ (b - 1)) :: where (b - 1) is even.
* Once b is even, repeat the process to get a ^ b
* Repeat the process till b = 1 OR b = 0, because a^1 = a AND a^0 = 1
*
* As far as the modulo is concerned,
* the fact : (a*b) % c = ((a%c) * (b%c)) % c
* Now apply RULE 1 OR 2 whichever is required.
'''

    
    site = Bigthink()
download = site.download_by_url

    
    from ..common import *
    
                    moz_ec_name = search_dict(sym_to_name, 'mozEcName')
                push = search_dict(sym_to_name, 'push')
                patt = '{}\.{}\('(.+?)'\)'.format(moz_ec_name, push)
                ec_list = re.findall(patt, code)
                [magic_list.append(sym_to_name[ec]) for ec in ec_list]
        return magic_list
    
        url = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'<meta property='og:video:secure_url' content='(.*?)'>', html)
    ]))
    
        def update_url(self, received):
        args = self.common_args.copy()
        play_type = 'seek' if received else 'play'
        received = received if received else -1
        args['ls'] = play_type
        args['start'] = received + 1
        args['lt'] = self.get_date_str()
        if self.enc_mode:
            ssl_ts, sign = self.get_sign(self.media_url)
            extra_args = dict(h=sign, r=ssl_ts, p=self.__class__.ENCRYPT_MOD_VER)
            args.update(extra_args)
        return '{}?{}'.format(self.media_url, parse.urlencode(args))
    
    def ifeng_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
# old pattern /uuid.shtml
# now it could be #uuid
    id = r1(r'([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})', url)
    if id:
        return ifeng_download_by_id(id, None, output_dir = output_dir, merge = merge, info_only = info_only)
    
    site = Infoq()
download = site.download_by_url
download_playlist = site.download_by_url

    
            self._built = False
    
    
def highway_conv2d(x, kernel_size,
                   act_fn=relu,
                   strides=1,
                   padding='SAME',
                   carry_bias=-1.0,
                   name=None):
    '''用于 conv2d 的 highway
    Input shape:  [batch_size, in_h, in_w, in_channels]
    Output shape: [batch_size, in_h, in_w, in_channels]
    
        with tf.variable_scope(name or 'attention_flow', reuse=reuse):
        h_expand = tf.tile(tf.expand_dims(h, axis=2), [1, 1, J, 1])  # [N, T, J, d]
        u_expand = tf.tile(tf.expand_dims(u, axis=1), [1, T, 1, 1])  # [N, T, J, d]
        hu = tf.multiply(h_expand, u_expand)  # [N, T, J, d]
        h_u_hu = tf.concat([h_expand, u_expand, hu], axis=-1)  # [N, T, J, 3d]
        W_s = get_w([3 * d, 1])  # [3d, 1]
    
    word_unk = 'aam'
ngrams = compute_ngrams(word_unk, min_ngrams, max_ngrams)  # min_ngrams, max_ngrams = 2, 4
word_vec = np.zeros(model.vector_size, dtype=np.float32)
ngrams_found = 0
for ngram in ngrams:
    ngram_hash = ft_hash(ngram) % model.bucket
    if ngram_hash in model.wv.hash2index:
        word_vec += model.wv.vectors_ngrams[model.wv.hash2index[ngram_hash]]
        ngrams_found += 1
    
    
@gen.engine
def run_tests():
    url = options.url + '/getCaseCount'
    control_ws = yield websocket_connect(url, None)
    num_tests = int((yield control_ws.read_message()))
    logging.info('running %d cases', num_tests)
    msg = yield control_ws.read_message()
    assert msg is None
    
        def _curl_debug(self, debug_type: int, debug_msg: str) -> None:
        debug_types = ('I', '<', '>', '<', '>')
        if debug_type == 0:
            debug_msg = native_str(debug_msg)
            curl_log.debug('%s', debug_msg.strip())
        elif debug_type in (1, 2):
            debug_msg = native_str(debug_msg)
            for line in debug_msg.splitlines():
                curl_log.debug('%s %s', debug_types[debug_type], line)
        elif debug_type == 4:
            curl_log.debug('%s %r', debug_types[debug_type], debug_msg)
    
    ``{% whitespace *mode* %}``
    Sets the whitespace mode for the remainder of the current file
    (or until the next ``{% whitespace %}`` directive). See
    `filter_whitespace` for available options. New in Tornado 4.3.
'''