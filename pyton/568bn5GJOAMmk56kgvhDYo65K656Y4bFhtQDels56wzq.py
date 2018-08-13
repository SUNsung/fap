
        
            Snippets without code (only comments) or containing lines starting with ??? should not yeld files,
    but the counter for naming snippets should still increment.
    '''
    parser = argparse.ArgumentParser(description='Split md file into plain text and code blocks')
    parser.add_argument('sourcefile',
                        help='which file to read')
    parser.add_argument('targetfile',
                        help='where to put plain text')
    parser.add_argument('codedir',
                        help='where to put codeblocks')
    args = parser.parse_args()