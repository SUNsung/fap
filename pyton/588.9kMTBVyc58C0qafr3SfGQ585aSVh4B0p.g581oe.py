
        
          return {'exact_match': exact_match, 'f1': f1}

    
          start = time.clock()
      for i in range(num_images):
        query_image_name = query_list[i]
        input_image_filename = os.path.join(cmd_args.images_dir,
                                            query_image_name + _IMAGE_EXTENSION)
        output_feature_filename = os.path.join(
            cmd_args.output_features_dir, query_image_name + _DELF_EXTENSION)
        if tf.gfile.Exists(output_feature_filename):
          tf.logging.info('Skipping %s', query_image_name)
          continue
    
          # Start input enqueue threads.
      coord = tf.train.Coordinator()
      threads = tf.train.start_queue_runners(sess=sess, coord=coord)
      start = time.clock()
      for i, image_path in enumerate(image_paths):
        # Write to log-info once in a while.
        if i == 0:
          tf.logging.info('Starting to detect objects in images...')
        elif i % _STATUS_CHECK_ITERATIONS == 0:
          elapsed = (time.clock() - start)
          tf.logging.info(
              'Processing image %d out of %d, last %d '
              'images took %f seconds', i, num_images, _STATUS_CHECK_ITERATIONS,
              elapsed)
          start = time.clock()
    
      Returns:
    resized_image: Uint8 array with resized image.
    scale_factor: Float with factor used for resizing (If upscaling, larger than
      1; if downscaling, smaller than 1).
    
        # Set up config.
    config = delf_config_pb2.DelfConfig(
        max_image_size=max_image_size, min_image_size=min_image_size)
    
    import argparse
import sys
    
      return public_solution, private_solution, ignored_ids
    
      Returns:
    solution: Dict mapping test image ID to list of ground-truth landmark IDs.
  '''
  return {
      '0123456789abcdef': [0, 12],
      '0223456789abcdef': [100, 200, 300],
      '0323456789abcdef': [1],
      '0423456789abcdef': [],
      '0523456789abcdef': [],
  }
    
        When translating a color image to black and white (mode 'L', 'I' or
    'F'), the library uses the ITU-R 601-2 luma transform::
    
        return lasso_results, lars_lasso_results
    
        plot_feature_times(all_times, batch_size, all_features, data)
    plot_feature_errors(all_errors, batch_size, all_features, data)
    
        for n_samples in sample_sizes:
        X = random_state.rand(n_samples, 300)
    
    plt.figure('scikit-learn Ward's method benchmark results')
plt.imshow(np.log(ratio), aspect='auto', origin='lower')
plt.colorbar()
plt.contour(ratio, levels=[1, ], colors='k')
plt.yticks(range(len(n_features)), n_features.astype(np.int))
plt.ylabel('N features')
plt.xticks(range(len(n_samples)), n_samples.astype(np.int))
plt.xlabel('N samples')
plt.title('Scikit's time, in units of scipy time (log)')
plt.show()

    
        fn = os.path.relpath(fn,
                         start=os.path.dirname(__import__(package).__file__))
    try:
        lineno = inspect.getsourcelines(obj)[1]
    except Exception:
        lineno = ''
    return url_fmt.format(revision=revision, package=package,
                          path=fn, lineno=lineno)
    
    import sys
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.svm import LinearSVC
from sklearn.pipeline import Pipeline
from sklearn.model_selection import GridSearchCV
from sklearn.datasets import load_files
from sklearn.model_selection import train_test_split
from sklearn import metrics
    
    # Define 'classifiers' to be used
classifiers = {
    'Empirical Covariance': EllipticEnvelope(support_fraction=1.,
                                             contamination=0.261),
    'Robust Covariance (Minimum Covariance Determinant)':
    EllipticEnvelope(contamination=0.261),
    'OCSVM': OneClassSVM(nu=0.261, gamma=0.05)}
colors = ['m', 'g', 'b']
legend1 = {}
legend2 = {}
    
    cases = [
    (KMeans, 'k-means++', {}),
    (KMeans, 'random', {}),
    (MiniBatchKMeans, 'k-means++', {'max_no_improvement': 3}),
    (MiniBatchKMeans, 'random', {'max_no_improvement': 3, 'init_size': 500}),
]
    
    # Transform data
# ~~~~~~~~~~~~~~
plsca = PLSCanonical(n_components=2)
plsca.fit(X_train, Y_train)
X_train_r, Y_train_r = plsca.transform(X_train, Y_train)
X_test_r, Y_test_r = plsca.transform(X_test, Y_test)
    
        # Display the results
    for top, right, bottom, left in face_locations:
        # Scale back up face locations since the frame we detected in was scaled to 1/4 size
        top *= 4
        right *= 4
        bottom *= 4
        left *= 4
    
    for i, face_distance in enumerate(face_distances):
    print('The test image has a distance of {:.2} from known image #{}'.format(face_distance, i))
    print('- With a normal cutoff of 0.6, would the test image match the known image? {}'.format(face_distance < 0.6))
    print('- With a very strict cutoff of 0.5, would the test image match the known image? {}'.format(face_distance < 0.5))
    print()

    
    # Find all the faces in the image using the default HOG-based model.
# This method is fairly accurate, but not as accurate as the CNN model and not GPU accelerated.
# See also: find_faces_in_picture_cnn.py
face_locations = face_recognition.face_locations(image)
    
    import face_recognition
from flask import Flask, jsonify, request, redirect
    
        # Every 128 frames (the default batch size), batch process the list of frames to find faces
    if len(frames) == 128:
        batch_of_face_locations = face_recognition.batch_face_locations(frames, number_of_times_to_upsample=0)
    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
        return np.linalg.norm(face_encodings - face_to_compare, axis=1)
    
        # 将每一个人脸与已知样本图片比对
    for face_encoding in face_encodings:
        # 看是否属于奥巴马或者拜登
        match = face_recognition.compare_faces([obama_face_encoding], face_encoding)
        name = '<Unknown Person>'
    
            #If training image contains none or more than faces, print an error message and exit
        if len(face_bounding_boxes) != 1:
            print(person + '/' + person_img + ' contains none or more than one faces and can't be used for training.')
            exit()
        else:
            face_enc = face_recognition.face_encodings(face)[0]
            # Add face encoding for current image with corresponding label (name) to the training data
            encodings.append(face_enc)
            names.append(person)
    
    PROJ_NAME = 'you-get'
PACKAGE_NAME = 'you_get'
    
    from ..common import *
from ..extractor import VideoExtractor
import xml.etree.ElementTree as ET
    
        @classmethod
    def get_cdninfo(cls, hashid):
        url = 'http://jobsfe.funshion.com/query/v1/mp4/{}.json'.format(hashid)
        meta = json.loads(get_content(url, decoded=False).decode('utf8'))
        return meta['playlist'][0]['urls']
    
    In Blackboard pattern several specialised sub-systems (knowledge sources)
assemble their knowledge to build a possibly partial or approximate solution.
In this way, the sub-systems work together to solve the problem,
where the solution is the sum of its parts.
    
        def check_range(self, request):
        start, end = self.get_interval_from_db()
        if start <= request < end:
            print('request {} handled in handler 2'.format(request))
            return True
    
        def __str__(self):
        return 'Cat'
    
    
def main():
    try:
        import queue
    except ImportError:  # python 2.x compatibility
        import Queue as queue
    
        def get_product_information(self, product):
        product_info = self.business_logic.product_information(product)
        if product_info:
            print('PRODUCT INFORMATION:')
            print(
                'Name: {0}, Price: {1:.2f}, Quantity: {2:}'.format(
                    product.title(), product_info.get('price', 0), product_info.get('quantity', 0)
                )
            )
        else:
            print('That product '{0}' does not exist in the records'.format(product))
    
    *Where is the pattern used practically?
The Grok framework uses decorators to add functionalities to methods,
like permissions or subscription to an event:
http://grok.zope.org/doc/current/reference/decorators.html