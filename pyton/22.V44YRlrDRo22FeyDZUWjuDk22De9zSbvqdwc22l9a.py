
        
            test_suite = 'tests',
    
                    log.println('    platform: {}'.format(platform.platform()))
                log.println('    python:   {}'.format(sys.version.split('\n')[0]))
    
    def baomihua_download_by_id(id, title=None, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html('http://play.baomihua.com/getvideourl.aspx?flvid=%s&devicetype=phone_app' % id)
    host = r1(r'host=([^&]*)', html)
    assert host
    type = r1(r'videofiletype=([^&]*)', html)
    assert type
    vid = r1(r'&stream_name=([^&]*)', html)
    assert vid
    dir_str = r1(r'&dir=([^&]*)', html).strip()
    url = 'http://%s/%s/%s.%s' % (host, dir_str, vid, type)
    _, ext, size = url_info(url)
    print_info(site_info, title, type, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge = merge)
    
        for quality in ['1080','720','480','380','240','144','auto']:
        try:
            real_url = info[quality][1]['url']
            if real_url:
                break
        except KeyError:
            pass
    
    # image size suffixes used in inline json 'key' field
# listed in descending order
size_suffixes = ['o', 'k', 'h', 'l', 'c', 'z', 'm', 'n', 's', 't', 'q', 'sq']
    
    References:
    tensorlayer.layers.Conv2dLayer
'''
import tensorflow as tf
    
    
def multi_dense(x, n_unit_ls, act_fn=relu, name=None):
    '''多层全连接
    Input shape:  [batch_size, n_input]
    Output shape: [batch_size, n_unit_list[-1]]
    
    word_unk = 'aam'
ngrams = compute_ngrams(word_unk, min_ngrams, max_ngrams)  # min_ngrams, max_ngrams = 2, 4
word_vec = np.zeros(model.vector_size, dtype=np.float32)
ngrams_found = 0
for ngram in ngrams:
    ngram_hash = ft_hash(ngram) % model.bucket
    if ngram_hash in model.wv.hash2index:
        word_vec += model.wv.vectors_ngrams[model.wv.hash2index[ngram_hash]]
        ngrams_found += 1
    
            print('Success: test_merge_sort')
    
            print('Test: Pop on a stack to destroy it')
        assert_equal(stacks.pop(), 'a')