
        
            return '{}/blob/{}/{}{}'.format(GITHUB_URL, code_branch, fn, linespec)
    
        # If the temperature is not a number this can cause issues
    # with Polymer components, so bail early there.
    if not isinstance(temperature, Number):
        raise TypeError(
            'Temperature is not a number: {}'.format(temperature))
    
    
def convert(value: float, unit_1: str, unit_2: str) -> float:
    '''Convert one unit of measurement to another.'''
    if unit_1 not in VALID_UNITS:
        raise ValueError(
            UNIT_NOT_RECOGNIZED_TEMPLATE.format(unit_1, LENGTH))
    if unit_2 not in VALID_UNITS:
        raise ValueError(
            UNIT_NOT_RECOGNIZED_TEMPLATE.format(unit_2, LENGTH))
    
        temp = Version('0')
    temp._version = version._version._replace(**to_change)
    return Version(str(temp))
    
        # assert automation.is_on(hass, 'automation.hello')
    # assert len(calls) == 1

    
      def whack(self, n=1):
    '''Prints 'whack!' n times.'''
    return ' '.join('whack!' for _ in range(n))
    
    
class WidgetTest(testutils.BaseTestCase):
    
      def testFire(self):
    with mock.patch.object(sys, 'argv', ['commandname']):
      fire.Fire()
    
      def testAddInstantiatedClass(self):
    t = trace.FireTrace('initial object')
    args = ('example', 'args')
    t.AddCalledComponent(
        'Classname', 'classname', args, 'sample.py', 12, False,
        action=trace.INSTANTIATED_CLASS)
    target = '''1. Initial component
2. Instantiated class 'classname' (sample.py:12)'''
    self.assertEqual(str(t), target)
    
    import difflib
import os
import time
    
    
def _AvailableString(variables, verbose=False):
  '''Returns a string describing what objects are available in the Python REPL.
    
      # stdin handle is -10
  # stdout handle is -11
  # stderr handle is -12
    
      # Try UTF-8 because the other encodings could be extended ASCII. It would
  # be exceptional if a valid extended ascii encoding with extended chars
  # were also a valid UITF-8 encoding.
  try:
    return string.decode('utf8')
  except UnicodeError:
    # Not a UTF-8 encoding.
    pass