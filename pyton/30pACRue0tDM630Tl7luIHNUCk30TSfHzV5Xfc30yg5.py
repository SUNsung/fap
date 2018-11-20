
        
        
def FindNextMultiLineCommentEnd(lines, lineix):
  '''We are inside a comment, find the end marker.'''
  while lineix < len(lines):
    if lines[lineix].strip().endswith('*/'):
      return lineix
    lineix += 1
  return len(lines)
    
        filenames = []
    for (dirpath, dnames, fnames) in os.walk(path):
        for fname in fnames:
            if fname.endswith('.md'):
                filenames.append(os.sep.join([dirpath, fname]))