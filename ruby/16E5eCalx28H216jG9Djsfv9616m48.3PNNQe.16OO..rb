
        
                if ARGV.git?
          puts 'This directory is now a git repo. Make your changes and then use:'
          puts '  git diff | pbcopy'
          puts 'to copy the diff to the clipboard.'
        end
    
      # Clean a top-level (bin, sbin, lib) directory, recursively, by fixing file
  # permissions and removing .la files, unless the files (or parent
  # directories) are protected by skip_clean.
  #
  # bin and sbin should not have any subdirectories; if either do that is
  # caught as an audit warning
  #
  # lib may have a large directory tree (see Erlang for instance), and
  # clean_dir applies cleaning rules to the entire tree
  def clean_dir(d)
    d.find do |path|
      path.extend(ObserverPathnameExtension)
    
        cd HOMEBREW_PREFIX
    exec 'find', *args
  end
    
    # See browser for an example
class GithubGistFormula < ScriptFileFormula
  def self.url(val)
    super
    version File.basename(File.dirname(val))[0, 6]
  end
end
    
    # grab name/url pairings from README.md
contents = File.read INPUT_FILENAME
matches = contents.scan(/\* (.*) (http.*)/)
# All blogs that do not respond
unavailable = []
temp_ignores = [
  'AdRoll',
  'Buzzfeed',
  'SourceClear',
  'TaskRabbit',
  'theScore',
  'Trivago',
  'Xmartlabs',
  'WyeWorks',
  'Zoosk',
  'Rudolf Olah'
]
    
    require_relative 'converter/fonts_conversion'
require_relative 'converter/less_conversion'
require_relative 'converter/js_conversion'
require_relative 'converter/logger'
require_relative 'converter/network'
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
      # GET /books/new
  def new
    @book = Book.new
  end
    
            private
    
              add_offense(node)
        end
    
      context 'called with three styles' do
    it 'applies second style to left and right' do
      rule = 'border-style: dashed double solid'
    
          expect('.margin-all').to have_rule(rule)
    end
  end
    
      context 'called with arguments (2, $value: 4em 6em)' do
    it 'outputs sextuple the second value from the default scale' do
      expect('.two-double-value').to have_rule('font-size: 3.125em')
    end
  end
end

    
      context 'called with auto' do
    it 'applies to auto to height' do
      rule = 'height: auto; width: 100px;'