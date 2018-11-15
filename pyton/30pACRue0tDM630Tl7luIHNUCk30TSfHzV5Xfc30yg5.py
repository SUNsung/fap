
        
            time_ridge = np.empty(n_iter)
    time_ols = np.empty(n_iter)
    time_lasso = np.empty(n_iter)
    
        if args.plot is not None:
        max_val = getattr(args, args.plot)
        if args.plot in ('classes', 'samples'):
            min_val = 2
        else:
            min_val = 0
        steps = np.linspace(min_val, max_val, num=args.n_steps + 1)[1:]
        if args.plot in ('classes', 'samples'):
            steps = np.unique(np.round(steps).astype(int))
        setattr(args, args.plot, steps)
    
        for i, NN in enumerate(Nrange):
        print('N = %i (%i out of %i)' % (NN, i + 1, len(Nrange)))
        X = get_data(NN, D, dataset)
        for algorithm in algorithms:
            nbrs = neighbors.NearestNeighbors(n_neighbors=min(NN, k),
                                              algorithm=algorithm,
                                              leaf_size=leaf_size)
            t0 = time()
            nbrs.fit(X)
            t1 = time()
            nbrs.kneighbors(X)
            t2 = time()
    
        plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
        ###########################################################################
    # Set custom reservoir based method
    sampling_algorithm['custom-reservoir-sampling'] = \
        lambda n_population, n_samples, random_state=None: \
            sample_without_replacement(n_population,
                                       n_samples,
                                       method='reservoir_sampling',
                                       random_state=random_state)
    
        mem_usage = memory_usage(run_vectorizer(Vectorizer, text, **params))
    
            text_filename = os.path.join(text_lang_folder,
                                     '%s_%04d.txt' % (lang, i))
        print('Writing %s' % text_filename)
        open(text_filename, 'wb').write(content.encode('utf-8', 'ignore'))
        i += 1
    
    
class AppidManager(object):
    lock = threading.Lock()
    
    
def is_ok(ip=None):
    if not ip:
        return IPv4.is_ok() or IPv6.is_ok()
    elif '.' in ip:
        return IPv4.is_ok()
    else:
        return IPv6.is_ok()
    
            
############################################################################
#
# character streams for use in lexers
#   CharStream
#   \- ANTLRStringStream
#
############################################################################
    
            raise NotImplementedError
    
    def setType(self, ttype):
        '''@brief Get the type of the token.
    
        code_block_index = 0
    last_header = ''
    linenum = 0
    with io.open(args.sourcefile, 'r') as read_filehandle:
        with io.open(args.targetfile, 'w') as text_filehandle:
            for line in read_filehandle:
                linenum += 1
                indent_depth = is_code(line)
                if indent_depth:
                    (line, linenum) = process_code(read_filehandle,
                                                    text_filehandle,
                                                    line, linenum,
                                                    args.sourcefile, args.codedir,
                                                    last_header, code_block_index,
                                                    indent_depth)
                    code_block_index += 1
                # reach here either line was not code, or was code
                # and we dealt with n code lines
                if indent_depth < 4 or not is_code(line, indent_depth):
                    # store header id for codeblock
                    section_id = get_marker(line)
                    if section_id is not None:
                        code_block_index = 0
                        last_header = section_id
                    sline = stripped(line)
                    text_filehandle.write(sline)