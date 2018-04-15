
        
          # Removes any empty directories in the formula's prefix subtree
  # Keeps any empty directions projected by skip_clean
  # Removes any unresolved symlinks
  def prune
    dirs = []
    symlinks = []
    @f.prefix.find do |path|
      if path == @f.libexec || @f.skip_clean?(path)
        Find.prune
      elsif path.symlink?
        symlinks << path
      elsif path.directory?
        dirs << path
      end
    end
    
      def internal_commands
    find_internal_commands HOMEBREW_LIBRARY_PATH/'cmd'
  end
    
          out = checks.send(method)
      unless out.nil? || out.empty?
        if first_warning
          $stderr.puts <<-EOS.undent
            #{Tty.white}Please note that these warnings are just used to help the Homebrew maintainers
            with debugging if you file an issue. If everything you use Homebrew for is
            working fine: please don't worry and just ignore them. Thanks!#{Tty.reset}
          EOS
        end
    
      def self.factory(name)
    Formulary.factory(name)
  end
    
      # Use this method to generate standard caveats.
  def standard_instructions(home_name, home_value = libexec)
    <<-EOS.undent
      Before you can use these tools you must export some variables to your $SHELL.
    
    links.each do |link|
  href = link.attribute('href').to_s
  uri = URI.join(BASE_URI, href)
  if map[uri]
    dups <<  href
  end
  map[uri] = href
end
    
        attr_reader :filters
    
        def root?
      path == 'index'
    end
    
      describe 'environment' do
    it 'adds the fuse directories to the appropriate paths' do
      expect(ENV).to receive(:append_path).with('PKG_CONFIG_PATH', any_args)
      expect(ENV).to receive(:append_path).with('HOMEBREW_LIBRARY_PATHS', any_args)
      expect(ENV).to receive(:append_path).with('HOMEBREW_INCLUDE_PATHS', any_args)
      subject.modify_build_environment
    end
  end
end
    
          attr_accessor(*VALID_KEYS)
      attr_accessor :pairs
    
          class << self
        alias escape_url escape
        public :escape_html
      end
    
        it 'copes with nested arrays' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']['bar']]]
      end
      get '/', :foo => {:bar => '<bar>'}
      expect(body).to eq('&lt;bar&gt;')
    end
    
          locations = Array.new
      while (data.code.to_i == 301 || data.code.to_i == 302)
        data = handle_gist_redirecting(data)
        break if locations.include? data.header['Location']
        locations << data.header['Location']
      end
    
      # Escapes CDATA sections in post content
  def cdata_escape(input)
    input.gsub(/<!\[CDATA\[/, '&lt;![CDATA[').gsub(/\]\]>/, ']]&gt;')
  end