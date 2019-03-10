
        
        describe 'Kernel#system' do
  it 'is a private method' do
    Kernel.should have_private_instance_method(:system)
  end
    
      it 'returns true when passed ?R if the argument is readable by the real uid' do
    Kernel.test(?R, @file).should be_true
  end
    
    describe 'Kernel#trace_var' do
  before :each do
    $Kernel_trace_var_global = nil
  end
    
          def pack_uri(plugin_name)
        url = '#{elastic_pack_base_uri}/#{plugin_name}/#{plugin_name}-#{LOGSTASH_VERSION}.#{PACK_EXTENSION}'
        URI.parse(url)
      end
    
          def upload_dest
        @upload_dest
      end
    
          def previous_link
        label = '&laquo; Previous'
        if @page_num == 1
          %(<span class='disabled'>#{label}</span>)
        else
          link = url('/history/#{@page.name}?page=#{@page_num-1}')
          %(<a href='#{link}' hotkey='h'>#{label}</a>)
        end
      end
    
    context 'Precious::Views::Editing' do
  include Rack::Test::Methods
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    Precious::App.set(:gollum_path, @path)
    FileUtils.cp_r File.join(examples, 'revert.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
      test 'extract destination file name in case of path renaming' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'newname.md', view.extract_renamed_path_destination('oldname.md => newname.md')
    assert_equal 'newDirectoryName/fileName.md', view.extract_renamed_path_destination('{oldDirectoryName => newDirectoryName}/fileName.md')
  end
    
    end
    
    class ConfigTag < Liquid::Tag
  def initialize(tag_name, options, tokens)
    super
    options = options.split(' ').map {|i| i.strip }
    @key = options.slice!(0)
    @tag = nil
    @classname = nil
    options.each do |option|
      @tag = $1 if option =~ /tag:(\S+)/ 
      @classname = $1 if option =~ /classname:(\S+)/
    end
  end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end