
        
          private
    
    require 'omniauth'
require 'openssl'
require 'jwt'
    
      describe '#can_remove?' do
    context 'when user can destroy_group_member' do
      before do
        allow(presenter).to receive(:can?).with(user, :destroy_group_member, presenter).and_return(true)
      end
    
      describe '#can_update?' do
    context 'when user can update_project_member' do
      before do
        allow(presenter).to receive(:can?).with(user, :update_project_member, presenter).and_return(true)
      end
    
            def write_cache
          # No-op
        end
    
          File.open('bower.json', 'w') do |f|
        f.puts JSON.pretty_generate(spec)
      end
    end
  end
end

    
        def byte_to_str_pos(pos)
      @s.string.byteslice(0, pos).length
    end
    
      def test_font_helper_with_suffix_sharp
    assert_match %r(url\(['']?/assets/.*svg#.+['']?\)), @css
  end
    
    @@ layout
<html>
  <head>
    <title>Super Simple Chat with Sinatra</title>
    <meta charset='utf-8' />
    <script src='http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js'></script>
  </head>
  <body><%= yield %></body>
</html>
    
            # See if it's actually a masked token or not. We should be able
        # to handle any unmasked tokens that we've issued without error.
    
    if $0 == __FILE__
  begin
    LogStash::PluginManager::Main.run('bin/logstash-plugin', ARGV)
  rescue LogStash::PluginManager::Error => e
    $stderr.puts(e.message)
    exit(1)
  end
end

    
        platforms.types.each do |type|
      desc 'Run acceptance test in #{type} machines'
      task type do
        ENV['LS_TEST_PLATFORM']=type
        exit(RSpec::Core::Runner.run([Rake::FileList['acceptance/spec/lib/*_spec.rb']]))
      end
    end
    
        # the File::Spec module comes from the PathTools CPAN distribution
    insist { subject.name } == 'perl-PathTools'
  end
    
    # Determine default value of a given easy_install's option
def easy_install_default(python_bin, option)
  result = nil
  execmd({:PYTHONPATH=>'#{example_dir}'}, python_bin, :stderr=>false) do |stdin,stdout|
    stdin.write('from easy_install_default import default_options\n' \
                'print default_options.#{option}\n')
    stdin.close
    result = stdout.read.chomp
  end
  return result
end
    
      describe '#maintainer' do
    require 'socket'
    default_maintainer = '<#{ENV['USER']}@#{Socket.gethostname}>'
    it_behaves_like :Default, description.gsub(/^#/, '').to_sym, default_maintainer
    it_behaves_like :Mutator, description.gsub(/^#/, '').to_sym
  end
    
      def to_s_fullversion()
    # iteration (PORTREVISION on FreeBSD) shall be appended only(?) if non-zero.
    # https://www.freebsd.org/doc/en/books/porters-handbook/makefile-naming.html
    (iteration and (iteration.to_i > 0)) ?  '#{version}_#{iteration}' : '#{version}'
  end
    
      def self.default_prefix
    npm_prefix = safesystemout('npm', 'prefix', '-g').chomp
    if npm_prefix.count('\n') > 0
      raise FPM::InvalidPackageConfiguration, '`npm prefix -g` returned unexpected output.'
    elsif !File.directory?(npm_prefix)
      raise FPM::InvalidPackageConfiguration, '`npm prefix -g` returned a non-existent directory'
    end
    logger.info('Setting default npm install prefix', :prefix => npm_prefix)
    npm_prefix
  end
    
      def data_tar_flags
    data_tar_flags = []
    if attributes[:pacman_use_file_permissions?].nil?
      if !attributes[:pacman_user].nil?
        if attributes[:pacman_user] == 'root'
          data_tar_flags += [ '--numeric-owner', '--owner', '0' ]
        else
          data_tar_flags += [ '--owner', attributes[:deb_user] ]
        end
      end
    
            prototype.puts([type, klass, path, mode, attributes[:solaris_user], attributes[:solaris_group]].join(' '))
      end # popen 'pkgproto ...'
    end # File prototype