
        
            if ENV['FPMOPTS']
      logger.warn('Loading flags from FPMOPTS environment variable')
      rc_args.push(*Shellwords.shellsplit(ENV['FPMOPTS']))
    end
    
      def output(output_path)
    # See https://github.com/jordansissel/fpm/issues/1090
    # require xz later, because this triggers a load of liblzma.so.5 that is
    # unavailable on older CentOS/RH distros.
    require 'xz'
    output_check(output_path)
    
        File.write(build_path('description'), self.description + '\n')
    
      def output(output_path)
    self.scripts.each do |name, path|
      case name
        when 'pre-install'
          safesystem('cp', path, './preinstall')
          File.chmod(0755, './preinstall')
        when 'post-install'
          safesystem('cp', path, './postinstall')
          File.chmod(0755, './postinstall')
        when 'pre-uninstall'
          raise FPM::InvalidPackageConfiguration.new(
            'pre-uninstall is not supported by Solaris packages'
          )
        when 'post-uninstall'
          raise FPM::InvalidPackageConfiguration.new(
            'post-uninstall is not supported by Solaris packages'
          )
      end # case name
    end # self.scripts.each
    
      s.required_rubygems_version = '>= 1.8.23'
  s.required_ruby_version = '>= 2.4.6'
    
        def _send_keys(t, e)
      '#{project.tmux} send-keys -t #{t} #{e} C-m'
    end
  end
end

    
      describe '#root?' do
    context 'root are present' do
      it 'returns true' do
        expect(project.root?).to be_truthy
      end
    end
  end
    
        def blank?(object)
      (object.respond_to?(:empty?) && object.empty?) || !object
    end
    
        context 'environment variable $TMUXINATOR_CONFIG is nil' do
      it 'is an empty string' do
        allow(ENV).to receive(:[]).with('TMUXINATOR_CONFIG').
          and_return nil
        # allow(XDG).to receive(:[]).with('CONFIG').and_return nil
        allow(File).to receive(:directory?).and_return true
        expect(described_class.environment).to eq ''
      end
    end