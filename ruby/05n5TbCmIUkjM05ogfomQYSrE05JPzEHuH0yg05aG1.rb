
        
              alias_method :include?, :key?
      alias_method :has_key?, :key?
      alias_method :member?, :key?
    
            while true
          begin
            if Platform.windows?
              # Windows doesn't support non-blocking reads on
              # file descriptors or pipes so we have to get
              # a bit more creative.
    
              opts = OptionParser.new do |o|
            o.banner = 'Usage: vagrant box remove <name>'
            o.separator ''
            o.separator 'Options:'
            o.separator ''
    
            # Parse the options
        argv = parse_options(opts)
        return if !argv
        if argv.length < 2
          raise Vagrant::Errors::CLIInvalidUsage,
            help: opts.help.chomp
        end
    
      attributes :id, :type, :name, :updated
    
    require_relative 'converter/fonts_conversion'
require_relative 'converter/less_conversion'
require_relative 'converter/js_conversion'
require_relative 'converter/logger'
require_relative 'converter/network'
    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
      # Disable request forgery protection in test environment.
  config.action_controller.allow_forgery_protection = false
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
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
    
    module Hardware
  describe CPU do
    describe '::type' do
      it 'returns the current CPU's type as a symbol, or :dunno if it cannot be detected' do
        expect(
          [
            :intel,
            :ppc,
            :dunno,
          ],
        ).to include(described_class.type)
      end
    end
    
      def participation_count
    poll_answers.sum('vote_count')
  end
end
