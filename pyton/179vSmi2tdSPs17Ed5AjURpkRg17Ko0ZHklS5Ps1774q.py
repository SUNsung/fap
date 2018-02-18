
        
            if not os.path.exists(to_bytes(filename, errors='surrogate_or_strict')) or os.path.isdir(to_bytes(filename, errors='strict')):
        return None
    digest = hash_func()
    blocksize = 64 * 1024
    try:
        infile = open(to_bytes(filename, errors='surrogate_or_strict'), 'rb')
        block = infile.read(blocksize)
        while block:
            digest.update(block)
            block = infile.read(blocksize)
        infile.close()
    except IOError as e:
        raise AnsibleError('error while accessing the file %s, error was: %s' % (filename, e))
    return digest.hexdigest()
    
            if args.verbose or args.test:
            print(path)
    
            # load data path for resource usage
        this_dir, this_filename = os.path.split(__file__)
        type_path = 'container_enabled' if getattr(self.options, 'container_enabled', False) else 'default'
        self.DATA_PATH = os.path.join(this_dir, 'data', type_path)
    
        terminal_stdout_re = [
        re.compile(r'[\r\n]?<.+>(?:\s*)$'),
        re.compile(r'[\r\n]?\[.+\](?:\s*)$'),
    ]
    
        assert_almost_equal(unweighted_metric * weight, weighted_metric, decimal=decimal)
    
    print('Build model...')
    
    
def assert_args_presence(args, doc, member, name):
    args_not_in_doc = [arg not in doc for arg in args]
    if any(args_not_in_doc):
        raise ValueError(
            '{} {} arguments are not present in documentation '.format(name, list(
                compress(args, args_not_in_doc))), member.__module__)
    words = doc.replace('*', '').split()
    # Check arguments styling
    styles = [arg + ':' not in words for arg in args]
    if any(styles):
        raise ValueError(
            '{} {} are not style properly 'argument': documentation'.format(name, list(
                compress(args, styles))), member.__module__)
    
    
def get_example_array():
    np.random.seed(3537)
    example_array = np.random.random((100, 100)) * 100. - 50.
    example_array[0, 0] = 0.  # 0 could possibly cause trouble
    return example_array
    
                # check that container-level reset_states() works
            model.reset_states()
            out4 = model.predict(np.ones_like(inputs))
            assert_allclose(out3, out4, atol=1e-5)
    
            total_count = 0
        translated_count = 0
        with open(fn) as f:
            catalog = read_po(f)
            for msg in catalog:
                total_count += 1
                if is_translated(msg):
                    translated_count += 1
        pct = translated_count / float(total_count) * 100
        click.echo('% -7s % 2d%%' % (
            locale,
            pct,
        ), err=True)
        if pct >= MINIMUM and locale not in rv:
            rv.append(locale)
    with open(catalog_file, 'w') as f:
        json.dump({
            'supported_locales': sorted(rv)
        }, f, indent=2)
        f.write('\n')