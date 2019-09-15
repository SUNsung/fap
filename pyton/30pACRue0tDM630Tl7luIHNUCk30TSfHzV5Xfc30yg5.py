
        
        
def check_alphabetical(lines):
    '''
    checks if all entries per section are in alphabetical order based in entry title
    '''
    sections = {}
    section_line_num = {}
    for line_num, line in enumerate(lines):
        if line.startswith(anchor):
            category = line.split(anchor)[1].strip()
            sections[category] = []
            section_line_num[category] = line_num
            continue
        if not line.startswith('|') or line.startswith('|---'):
            continue
        raw_title = [x.strip() for x in line.split('|')[1:-1]][0]
        title_re_match = link_re.match(raw_title)
        if title_re_match:
            sections[category].append(title_re_match.group(1).upper())
    
      @classmethod
  def flatten_recursive(cls, item):
    '''Flattens (potentially nested) a tuple/dictionary/list to a list.'''
    output = []
    if isinstance(item, list):
      output.extend(item)
    elif isinstance(item, tuple):
      output.extend(list(item))
    elif isinstance(item, dict):
      for (_, v) in six.iteritems(item):
        output.append(v)
    else:
      return [item]
    
    
MaskedLmInstance = collections.namedtuple('MaskedLmInstance',
                                          ['index', 'label'])
    
    flags.DEFINE_integer('num_warmup_steps', 10000, 'Number of warmup steps.')
    
      def _tokenize_chinese_chars(self, text):
    '''Adds whitespace around any CJK character.'''
    output = []
    for char in text:
      cp = ord(char)
      if self._is_chinese_char(cp):
        output.append(' ')
        output.append(char)
        output.append(' ')
      else:
        output.append(char)
    return ''.join(output)
    
    
with open(fname, 'r') as f:
    file_content = f.read()
    matches = re.findall(regex, file_content)
    for match in matches:
        if contribs.get(match[0]) and match[1] not in contribs[match[0]]:
            contribs[match[0]].append(match[1])
        else:
            contribs[match[0]] = [match[1]]