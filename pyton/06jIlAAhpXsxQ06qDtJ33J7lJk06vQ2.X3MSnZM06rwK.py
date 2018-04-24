
        
            Some py2/py3 compatibility support based on a stripped down
    version of six so we don't have to depend on a specific version
    of it.
    
        rv = app.test_client().get('/', errors_stream=out)
    assert rv.status_code == 500
    assert b'Internal Server Error' in rv.data
    assert not out.getvalue()

    
    
def side_effect(old_cmd, command):
    with tarfile.TarFile(_tar_file(old_cmd.script_parts)[0]) as archive:
        for file in archive.getnames():
            try:
                os.remove(file)
            except OSError:
                # does not try to remove directories as we cannot know if they
                # already existed before
                pass

    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'tcsh')
    proc.sendline(u'setenv PYTHONIOENCODING utf8')
    proc.sendline(u'eval `thefuck --alias`')
    return proc
    
    import tensorflow as tf
    
      for d, class_label in dirs:
    for filename in os.listdir(os.path.join(FLAGS.imdb_input_dir, d)):
      is_validation = check_is_validation(filename, class_label)
      if is_validation and not include_validation:
        continue
    
    # Dependency imports
    
    To initialize embedding and LSTM cell weights from a pretrained model, set
FLAGS.pretrained_model_dir to the pretrained model's checkpoint directory.
'''
from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
    py_library(
    name = 'rnn_cell',
    srcs = [
        'rnn_cell.py',
    ],
    srcs_version = 'PY2AND3',
    deps = [
        ':linear',
        '//tensorflow:tensorflow_py',
    ],
)
    
    if len(sys.argv) == 2 and sys.argv[1] == '--list':
    print(json.dumps(result))
elif len(sys.argv) == 3 and sys.argv[1] == '--host':
    print(json.dumps({}))
else:
    print('Need an argument, either --list or --host <host>')

    
        terminal_stderr_re = [
        re.compile(br'Error:'),
    ]
    
            print('Training %s ... ' % name, end='')
        t0 = time()
        clf.fit(X_train, y_train)
        train_time[name] = time() - t0
        t0 = time()
        y_pred = clf.predict(X_test)
        test_time[name] = time() - t0
        accuracy[name] = accuracy_score(y_test, y_pred)
        print('done')
    
                gc.collect()
            print('- benchmarking Lasso')
            clf = Lasso(alpha=alpha, fit_intercept=False,
                        precompute=precompute)
            tstart = time()
            clf.fit(X, Y)
            lasso_results.append(time() - tstart)
    
    faces = fetch_lfw_people(resize=.2, min_faces_per_person=5)
# limit dataset to 5000 people (don't care who they are!)
X = faces.data[:5000]
n_samples, h, w = faces.images.shape
n_features = X.shape[1]
    
    
def type_auto_or_float(val):
    if val == 'auto':
        return 'auto'
    else:
        return float(val)
    
        print('Decompressing %s' % ARCHIVE_NAME)
    with closing(tarfile.open(ARCHIVE_NAME, 'r:gz')) as archive:
        archive.extractall(path='.')
    os.remove(ARCHIVE_NAME)

    
    
# The training data folder must be passed as first argument
languages_data_folder = sys.argv[1]
dataset = load_files(languages_data_folder)
    
        output_file.close()

    
    # Plot calibration curve for Gaussian Naive Bayes
plot_calibration_curve(GaussianNB(), 'Naive Bayes', 1)
    
    import numpy as np
import matplotlib.pyplot as plt
    
        def extract_year_month(self, line):
        '''Return the year and month portions of the timestamp.'''
        pass
    
        def mapper(self, _, line):
        yield line, 1
    
        def _find_available_spot(self, vehicle):
        '''Find an available spot where vehicle can fit, or return None'''
        pass
    
        def __init__(self, from_user_id, to_user_id, request_status, timestamp):
        self.from_user_id = from_user_id
        self.to_user_id = to_user_id
        self.request_status = request_status
        self.timestamp = timestamp
    
                # skip frames not in requested module
            if codeMod.__name__ != module:
                continue
    
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