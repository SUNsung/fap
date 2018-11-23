
        
            # ensure the instance folder exists
    try:
        os.makedirs(app.instance_path)
    except OSError:
        pass
    
    
@bp.route('/login', methods=('GET', 'POST'))
def login():
    '''Log in a registered user by adding the user id to the session.'''
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        db = get_db()
        error = None
        user = db.execute(
            'SELECT * FROM user WHERE username = ?', (username,)
        ).fetchone()
    
    
@click.command('init-db')
@with_appcontext
def init_db_command():
    '''Clear existing data and create new tables.'''
    init_db()
    click.echo('Initialized the database.')
    
    
@pytest.fixture
def runner(app):
    '''A test runner for the app's Click commands.'''
    return app.test_cli_runner()
    
    
def with_metaclass(meta, *bases):
    '''Create a base class with a metaclass.'''
    # This requires a bit of explanation: the basic idea is to make a
    # dummy metaclass for one level of class instantiation that replaces
    # itself with the actual metaclass.
    class metaclass(type):
        def __new__(cls, name, this_bases, d):
            return meta(name, bases, d)
    return type.__new__(metaclass, 'temporary_class', (), {})
    
        def route(self, rule, **options):
        '''Like :meth:`Flask.route` but for a blueprint.  The endpoint for the
        :func:`url_for` function is prefixed with the name of the blueprint.
        '''
        def decorator(f):
            endpoint = options.pop('endpoint', f.__name__)
            self.add_url_rule(rule, endpoint, f, **options)
            return f
        return decorator
    
                app.config['IMAGE_STORE_TYPE'] = 'fs'
            app.config['IMAGE_STORE_PATH'] = '/var/app/images'
            app.config['IMAGE_STORE_BASE_URL'] = 'http://img.website.com'
            image_store_config = app.config.get_namespace('IMAGE_STORE_')
    
        def __init__(self, request):
        exc = request.routing_exception
        buf = ['A request was sent to this URL (%s) but a redirect was '
               'issued automatically by the routing system to '%s'.'
               % (request.url, exc.new_url)]
    
    import os
import sys
import glob
import re
import markdown
import argparse
    
        '''
    prob = np.array(prob)
    outcome = np.array(outcome)
    
    
def load_data_and_labels():
    '''
    Loads MR polarity data from files, splits the data into words and generates labels.
    Returns split sentences and labels.
    '''
    # Load data from files
    positive_examples = list(open('./data/rt-polarity.pos', encoding='ISO-8859-1').readlines())
    positive_examples = [s.strip() for s in positive_examples]
    negative_examples = list(open('./data/rt-polarity.neg', encoding='ISO-8859-1').readlines())
    negative_examples = [s.strip() for s in negative_examples]
    # Split by words
    x_text = positive_examples + negative_examples
    x_text = [clean_str(sent) for sent in x_text]
    x_text = [s.split(' ') for s in x_text]
    # Generate labels
    positive_labels = [[0, 1] for _ in positive_examples]
    negative_labels = [[1, 0] for _ in negative_examples]
    y = np.concatenate([positive_labels, negative_labels], 0)
    return [x_text, y]
    
    
print 'Single GPU computation time: ' + str(t2_1-t1_1)
print 'Multi GPU computation time: ' + str(t2_2-t1_2)
    
    polynomial = components[-1]
calculate_polynomial = theano.function(inputs=[coefficients, x],
                                       outputs=polynomial,
                                       updates=updates)
    
    rng = T.shared_randomstreams.RandomStreams(1234)
    
        # Encode the intermediate records using repr() instead of JSON, so the
    # record doesn't get Unicode-encoded
    INTERNAL_PROTOCOL = ReprProtocol
    
        if supervised:
        patches += [Rectangle((0.3, 2.4), 1.5, 0.5, zorder=1, fc=box_bg),
                    Rectangle((0.5, 2.6), 1.5, 0.5, zorder=2, fc=box_bg),
                    Rectangle((0.7, 2.8), 1.5, 0.5, zorder=3, fc=box_bg),
                    FancyArrow(2.3, 2.9, 2.0, 0, fc=arrow1,
                               width=0.25, head_width=0.5, head_length=0.2),
                    Rectangle((7.3, 0.85), 1.5, 0.5, fc=box_bg)]
    else:
        patches += [Rectangle((7.3, 0.2), 1.5, 1.8, fc=box_bg)]
    
    for p in patches:
        ax.add_patch(p)
        
    pl.text(1.45, 4.9, 'Training\nText,\nDocuments,\nImages,\netc.',
            ha='center', va='center', fontsize=14)
    
    pl.text(3.6, 4.9, 'Feature\nVectors', 
            ha='left', va='center', fontsize=14)
    
    pl.text(5.5, 3.5, 'Machine\nLearning\nAlgorithm',
            ha='center', va='center', fontsize=14)
    
    pl.text(1.05, 1.1, 'New Text,\nDocument,\nImage,\netc.',
            ha='center', va='center', fontsize=14)
    
    pl.text(3.3, 1.7, 'Feature\nVector', 
            ha='left', va='center', fontsize=14)
    
    pl.text(5.5, 1.1, 'Predictive\nModel', 
            ha='center', va='center', fontsize=12)
    
        return (t, y, dy)
    
    
        args = docopt(doc_string, options_first=True)
    
    
@app.route('/lambda/<functionName>/code', methods=['POST'])
def get_lambda_code(functionName):
    ''' Get source code for Lambda function.
        ---
        operationId: 'getLambdaCode'
        parameters:
            - name: functionName
              in: path
            - name: request
              in: body
    '''
    data = get_payload(request)
    env = Environment.from_string(data.get('awsEnvironment'))
    result = infra.get_lambda_code(func_name=functionName, env=env)
    return jsonify(result)
    
        return MACHINE_ID
    
        setup(
        name='localstack',
        version=version,
        description='An easy-to-use test/mocking framework for developing Cloud applications',
        author='Waldemar Hummer (Atlassian)',
        author_email='waldemar.hummer@gmail.com',
        url='https://github.com/localstack/localstack',
        scripts=['bin/localstack'],
        packages=find_packages(exclude=('tests', 'tests.*')),
        package_data=package_data,
        install_requires=install_requires,
        dependency_links=dependency_links,
        test_suite='tests',
        license='Apache License 2.0',
        zip_safe=False,
        classifiers=[
            'Programming Language :: Python :: 2',
            'Programming Language :: Python :: 2.6',
            'Programming Language :: Python :: 2.7',
            'Programming Language :: Python :: 3',
            'Programming Language :: Python :: 3.3',
            'Programming Language :: Python :: 3.4',
            'Programming Language :: Python :: 3.6',
            'License :: OSI Approved :: Apache Software License',
            'Topic :: Software Development :: Testing',
        ]
    )

    
    
def delete_document(id):
    article_path = '{}/{}/employee/{}?pretty'.format(ES_URL, TEST_INDEX, id)
    resp = requests.delete(article_path, headers=COMMON_HEADERS)
    # Pause to allow the document to be indexed
    time.sleep(1)
    return resp
    
            key1, url1 = multipart_content.find_multipart_redirect_url(data1, headers)