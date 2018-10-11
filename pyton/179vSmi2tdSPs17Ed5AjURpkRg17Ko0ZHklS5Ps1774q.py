
        
        from {0} import {1}
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'thefuck --alias > ~/.config/fish/config.fish')
    proc.sendline(u'fish')
    return proc
    
    
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    
        assert match(command)
    
    
def test_get_new_command():
    new_command = get_new_command(Command('apt list --upgradable', match_output))
    assert new_command == 'apt upgrade'
    
    
@pytest.mark.parametrize('before, after', [
    ('brew install sshfs',
     'brew cask install osxfuse && brew install sshfs')])
def test_get_new_command(before, after):
    command = Command(before, output)
    assert get_new_command(command) == after

    
    
@pytest.mark.parametrize('command, new_command', [
    (Command('cargo buid', no_such_subcommand_old), 'cargo build'),
    (Command('cargo buils', no_such_subcommand), 'cargo build')])
def test_get_new_command(command, new_command):
    assert get_new_command(command) == new_command

    
        print('Classifier Training')
    print('===================')
    accuracy, train_time, test_time = {}, {}, {}
    for name in sorted(args['estimators']):
        clf = ESTIMATORS[name]
        try:
            clf.set_params(random_state=0)
        except (TypeError, ValueError):
            pass
    
        timings = []
    for exponent in range(args.log_min_problem_size,
                          args.log_max_problem_size):
        n = 10 ** exponent
        Y = DATASET_GENERATORS[args.dataset](n)
        time_per_iteration = \
            [bench_isotonic_regression(Y) for i in range(args.iterations)]
        timing = (n, np.mean(time_per_iteration))
        timings.append(timing)
    
    random_state = 2  # to control the random selection of anomalies in SA
    
    faces = fetch_lfw_people(resize=.2, min_faces_per_person=5)
# limit dataset to 5000 people (don't care who they are!)
X = faces.data[:5000]
n_samples, h, w = faces.images.shape
n_features = X.shape[1]
    
    from sklearn.linear_model import lars_path, orthogonal_mp
from sklearn.datasets.samples_generator import make_sparse_coded_signal
    
    
if __name__ == '__main__':
    from mpl_toolkits.mplot3d import axes3d  # register the 3d projection
    import matplotlib.pyplot as plt
    
        fig = plt.figure('scikit-learn sample w/o replacement benchmark results')
    plt.title('n_population = %s, n_times = %s' %
              (opts.n_population, opts.n_times))
    ax = fig.add_subplot(111)
    for name in sampling_algorithm:
        ax.plot(ratio, time[name], label=name)
    
                std = X_train.std(axis=0)
            mean = X_train.mean(axis=0)
            X_train = (X_train - mean) / std
            X_test = (X_test - mean) / std
    
    
def benchmark_dense_predict():
    for _ in range(300):
        clf.predict(X_test)
    
                short_text_filename = os.path.join(short_text_lang_folder,
                                               '%s_%04d.txt' % (lang, j))
            print('Writing %s' % short_text_filename)
            open(short_text_filename, 'wb').write(
                small_content.encode('utf-8', 'ignore'))
            j += 1
            if j >= 1000:
                break
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (14 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())