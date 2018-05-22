
        
            attr_accessor :name, :type, :path
    
      it 'does not decode a float when fewer bytes than a float remain and the '*' modifier is passed' do
    [ ['\xff', []],
      ['\xff\x00', []],
      ['\xff\x00\xff', []]
    ].should be_computed_by(:unpack, unpack_format('*'))
  end
    
      it 'decodes past whitespace bytes when passed the '*' modifier' do
    [ ['a b c',    ['a b c']],
      ['a\fb c',   ['a\fb c']],
      ['a\nb c',   ['a\nb c']],
      ['a\rb c',   ['a\rb c']],
      ['a\tb c',   ['a\tb c']],
      ['a\vb c',   ['a\vb c']],
    ].should be_computed_by(:unpack, unpack_format('*'))
  end
end
    
    describe :string_unpack_unicode, shared: true do
  it 'decodes Unicode codepoints as ASCII values' do
    [ ['\x00',      [0]],
      ['\x01',      [1]],
      ['\x08',      [8]],
      ['\x0f',      [15]],
      ['\x18',      [24]],
      ['\x1f',      [31]],
      ['\x7f',      [127]],
      ['\xc2\x80',  [128]],
      ['\xc2\x81',  [129]],
      ['\xc3\xbf',  [255]]
    ].should be_computed_by(:unpack, 'U')
  end
    
      # This spec is a mess. It fails randomly, it hangs on MRI, it needs to be removed
  quarantine! do
  it 'killing dying running does nothing' do
    in_ensure_clause = false
    exit_loop = true
    t = ThreadSpecs.dying_thread_ensures do
      in_ensure_clause = true
      loop { if exit_loop then break end }
      ScratchPad.record :after_stop
    end
    
        ScratchPad.recorded.should == nil
  end
end

    
        t.status.should == false
    t.join
  end
    
      class RateLimitExceededError < Error
    def initialize(reset, error)
      super <<~EOS
        GitHub API Error: #{error}
        Try again in #{pretty_ratelimit_reset(reset)}, or create a personal access token:
          #{ALL_SCOPES_URL}
        and then set the token as: export HOMEBREW_GITHUB_API_TOKEN='your_new_token'
      EOS
    end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
        def render(context)
      code_dir = (context.registers[:site].config['code_dir'].sub(/^\//,'') || 'downloads/code')
      code_path = (Pathname.new(context.registers[:site].source) + code_dir).expand_path
      file = code_path + @file
    
    Liquid::Template.register_tag('video', Jekyll::VideoTag)