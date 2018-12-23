
        
            i = 0
    for c, (label, timings) in zip('br',
                                   sorted(six.iteritems(results_2))):
        i += 1
        ax = fig.add_subplot(2, 2, i + 2)
        y = np.asarray(timings)
        ax.plot(chunks, y, color=c, alpha=0.8)
        ax.set_xlabel('Chunks')
        ax.set_ylabel(label)
    
                gc.collect()
            print('benchmarking orthogonal_mp (without Gram):', end='')
            sys.stdout.flush()
            tstart = time()
            orthogonal_mp(X, y, precompute=False,
                          n_nonzero_coefs=n_informative)
            delta = time() - tstart
            print('%0.3fs' % delta)
            omp[i_f, i_s] = delta
    
        ###########################################################################
    # Numpy permutation based
    sampling_algorithm['numpy-permutation'] = \
        lambda n_population, n_sample: \
            np.random.permutation(n_population)[:n_sample]
    
        revision is a git commit reference (hash or name)
    
    And tree.TreeParser finally fetches its input from a tree.TreeNodeStream:
    
    
class RecognitionException(Exception):
    '''@brief The root of the ANTLR exception hierarchy.
    
                rules.append(code.co_name)
    
            for i in self.tree.iterfind('video/quality'):
            quality = i.attrib ['value']
            url = i[0].attrib['playurl']
            self.stream_types.append({'id': quality,
                                      'video_profile': i.attrib ['desp']})
            self.streams[quality] = {'url': url,
                                     'video_profile': i.attrib ['desp']}
            self.streams_sorted = [dict([('id', stream_type['id'])] + list(self.streams[stream_type['id']].items())) for stream_type in self.__class__.stream_types if stream_type['id'] in self.streams]
    
    from ..common import *
    
    
def fix_coub_video_file(file_path):
    with open(file_path, 'r+b') as file:
        file.seek(0)
        file.write(bytes(2))
    
    #----------------------------------------------------------------------
def dilidili_download(url, output_dir = '.', merge = False, info_only = False, **kwargs):
    global headers
    re_str = r'http://www.dilidili.com/watch\S+'
    if re.match(r'http://www.dilidili.wang', url):
        re_str = r'http://www.dilidili.wang/watch\S+'
        headers['Referer'] = 'http://www.dilidili.wang/'
    elif re.match(r'http://www.dilidili.mobi', url):
        re_str = r'http://www.dilidili.mobi/watch\S+'
        headers['Referer'] = 'http://www.dilidili.mobi/'
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls(url, title, ext, size, output_dir, merge=False)