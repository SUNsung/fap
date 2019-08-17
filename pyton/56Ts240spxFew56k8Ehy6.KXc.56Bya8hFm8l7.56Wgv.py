
        
            logging.warning('Starting fetch with simple client')
    simple_client = SimpleAsyncHTTPClient()
    simple_client.fetch('http://localhost:%d/' % options.port,
                        callback=callback)
    IOLoop.current().start()
    
    tmpl = Template('''\
<!doctype html>
<html>
  <head>
    <title>{{ page_title }}</title>
  </head>
  <body>
    <div class='header'>
      <h1>{{ page_title }}</h1>
    </div>
    <ul class='navigation'>
    {% for href, caption in [ \
        ('index.html', 'Index'), \
        ('downloads.html', 'Downloads'), \
        ('products.html', 'Products') \
      ] %}
      <li><a href='{{ href }}'>{{ caption }}</a></li>
    {% end %}
    </ul>
    <div class='table'>
      <table>
      {% for row in table %}
        <tr>
        {% for cell in row %}
          <td>{{ cell }}</td>
        {% end %}
        </tr>
      {% end %}
      </table>
    </div>
  </body>
</html>\
''')
    
        def test_oauth10_request_parameters(self):
        response = self.fetch('/oauth10/client/request_params')
        response.rethrow()
        parsed = json_decode(response.body)
        self.assertEqual(parsed['oauth_consumer_key'], 'asdf')
        self.assertEqual(parsed['oauth_token'], 'uiop')
        self.assertTrue('oauth_nonce' in parsed)
        self.assertTrue('oauth_signature' in parsed)
    
    
def main():
    test = TestSelectionSort()
    selection_sort = SelectionSort()
    test.test_selection_sort(selection_sort.sort)
    try:
        test.test_selection_sort(selection_sort.sort_recursive)
        test.test_selection_sort(selection_sort.sor_iterative_alt)
    except NameError:
        # Alternate solutions are only defined
        # in the solutions file
        pass
    
        def __len__(self):
        return len(self.array)
    
    
class TrainingInstance(object):
  '''A single training instance (sentence pair).'''