
        
              # Forcing colored to be included on String before Term::ANSIColor, so that Inch will work correctly.
      require 'colored2'
      ENV['GENERATE_COVERAGE'] = 'true'
      puts '\033[0;32mUsing #{`ruby --version`}\033[0m'
    
          def actual_path
        $PROGRAM_NAME
      end
    end
  end
end

    
        module ActionMailer
      def sidekiq_delay(options={})
        Proxy.new(DelayedMailer, self, options)
      end
      def sidekiq_delay_for(interval, options={})
        Proxy.new(DelayedMailer, self, options.merge('at' => Time.now.to_f + interval.to_f))
      end
      def sidekiq_delay_until(timestamp, options={})
        Proxy.new(DelayedMailer, self, options.merge('at' => timestamp.to_f))
      end
      alias_method :delay, :sidekiq_delay
      alias_method :delay_for, :sidekiq_delay_for
      alias_method :delay_until, :sidekiq_delay_until
    end
    
        # Publish the package.
    repo_path = build_path('#{name}_repo')
    safesystem('pkgrepo', 'create', repo_path)
    safesystem('pkgrepo', 'set', '-s', repo_path, 'publisher/prefix=#{attributes[:p5p_publisher]}')
    safesystem('pkgsend', '-s', repo_path,
      'publish', '-d', '#{staging_path}', '#{build_path}/#{name}.p5m')
    safesystem('pkgrecv', '-s', repo_path, '-a',
      '-d', build_path('#{name}.p5p'), name)
    
      def compression_option
    case self.attributes[:pacman_compression]
      when nil, 'xz'
        return '--xz'
      when 'none'
        return ''
      when 'gz'
        return '-z'
      when 'bzip2'
        return '-j'
      else
        return '--xz'
      end
  end
    
        args = [ '-B', build_path('build-info'), '-c', build_path('comment'), '-d', build_path('description'), '-f', build_path('packlist'), '-I', '/opt/local', '-p', staging_path,  '-U', '#{cwd}/#{name}-#{self.version}-#{iteration}.tgz' ]
    safesystem('pkg_create', *args)
    
          def self.has_issues_with_add_symlink?
        return !::Gem::Package::TarWriter.public_instance_methods.include?(:add_symlink)
      end
    end # module TarWriter
  end # module Issues
end # module FPM
    
    desc 'Clean up files.'
task :clean do |t|
  FileUtils.rm_rf 'doc'
  FileUtils.rm_rf 'tmp'
  FileUtils.rm_rf 'pkg'
  FileUtils.rm_rf 'public'
  FileUtils.rm 'test/debug.log' rescue nil
  FileUtils.rm 'test/paperclip.db' rescue nil
  Dir.glob('paperclip-*.gem').each{|f| FileUtils.rm f }
end

    
    When /^I reset Bundler environment variable$/ do
  BUNDLE_ENV_VARS.each do |key|
    ENV[key] = nil
  end
end
    
        def geometry_string
      begin
        orientation = Paperclip.options[:use_exif_orientation] ?
          '%[exif:orientation]' : '1'
        Paperclip.run(
          Paperclip.options[:is_windows] ? 'magick identify' : 'identify',
          '-format '%wx%h,#{orientation}' :file', {
            :file => '#{path}[0]'
          }, {
            :swallow_stderr => true
          }
        )
      rescue Terrapin::ExitStatusError
        ''
      rescue Terrapin::CommandNotFoundError => e
        raise_because_imagemagick_missing
      end
    end
    
      describe '#hook_on_project_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_start' }
    end
  end
  describe '#hook_on_project_first_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_first_start' }
    end
  end
  describe '#hook_on_project_restart' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_restart' }
    end
  end
  describe '#hook_on_project_exit' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_exit' }
    end
  end
  describe '#hook_on_project_stop' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_stop' }
    end
  end
end

    
    describe Tmuxinator::Pane do
  let(:klass) { described_class }
  let(:instance) { klass.new(index, project, window, *commands) }
  # let(:index) { 'vim' }
  # let(:project) { 0 }
  # let(:tab) { nil }
  # let(:commands) { nil }
  let(:index) { 0 }
  let(:project) { double }
  let(:window) { double }
  let(:commands) { ['vim', 'bash'] }
    
          # Pathname of given project searching only global directories
      def global_project(name)
        project_in(environment, name) ||
          project_in(xdg, name) ||
          project_in(home, name)
      end
    
        context 'command is empty' do
      before do
        yaml['editor'] = ''
      end
    
      context 'called with arguments (2, $value: 4em 6em)' do
    it 'outputs sextuple the second value from the default scale' do
      expect('.two-double-value').to have_rule('font-size: 3.125em')
    end
  end
end

    
      def new
    @broadcast = Broadcast.new
  end