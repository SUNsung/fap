
        
            for n_components in [i.astype(int) for i in
                         np.linspace(data.shape[1] // 10,
                                     data.shape[1], num=4)]:
        all_times = defaultdict(list)
        all_errors = defaultdict(list)
        pca = PCA(n_components=n_components)
        rpca = PCA(n_components=n_components, svd_solver='randomized',
                   random_state=1999)
        results_dict = {k: benchmark(est, data) for k, est in [('pca', pca),
                                                               ('rpca', rpca)]}
    
    
def compute_bench(samples_range, features_range):
    
        # start time
    t_start = datetime.now()
    clf.fit(X)
    delta = (datetime.now() - t_start)
    # stop time
    time_to_fit = compute_time(t_start, delta)
    
    # Gather data for each version directory, including symlinks
dirs = {}
symlinks = {}
root_listing = json_urlread(ROOT_URL)
for path_details in root_listing:
    name = path_details['name']
    if not (name[:1].isdigit() or name in NAMED_DIRS):
        continue
    if path_details['type'] == 'dir':
        html = urlopen(RAW_FMT % name).read().decode('utf8')
        version_num = VERSION_RE.search(html).group(1)
        pdf_size = get_pdf_size(name)
        dirs[name] = (version_num, pdf_size)
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (14 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
    # Grouping the document tree into Texinfo files. List of tuples
# (source start file, target name, title, author,
#  dir menu entry, description, category)
texinfo_documents = [
    (master_doc, 'certbot-apache', u'certbot-apache Documentation',
     author, 'certbot-apache', 'One line description of project.',
     'Miscellaneous'),
]