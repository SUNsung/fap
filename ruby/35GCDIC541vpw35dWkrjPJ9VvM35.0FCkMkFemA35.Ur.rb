
        
        module Docs
  class URL < URI::Generic
    PARSER = URI::Parser.new
    
            css('.home', '#page-toc-source', '.highlight', 'th h2').each do |node|
          node.before(node.children).remove
        end
    
            Docs::Sphinx::CleanHtmlFilter.new(doc, context, result).call
      end
    
        def test_object_ivar_set
      name = noninterned_name
      obj = Object.new
      assert_raise(NameError) {obj.instance_variable_set(name, true)}
      assert_not_interned(name)
      assert_raise(NameError) {obj.instance_variable_set(name.to_sym, true)}
      assert_not_pinneddown(name)
    end
    
    end

    
        @inflator.finish do |chunk|
      @chunks << chunk
    end
  end
    
    desc 'Watch the site and regenerate when it changes'
task :watch do
  raise '### You haven't set anything up yet. First run `rake install` to set up an Octopress theme.' unless File.directory?(source_dir)
  puts 'Starting to watch source with Jekyll and Compass.'
  system 'compass compile --css-dir #{source_dir}/stylesheets' unless File.exist?('#{source_dir}/stylesheets/screen.css')
  jekyllPid = Process.spawn({'OCTOPRESS_ENV'=>'preview'}, 'jekyll build --watch')
  compassPid = Process.spawn('compass watch')
    
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
    
        def initialize(tag_name, markup, tokens)
      attributes = ['class', 'src', 'width', 'height', 'title']
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end
    
        it 'should obey attributes[:excludes] for child directories' do
      Dir.mkdir(subject.staging_path('example'))
      Dir.mkdir(subject.staging_path('example/foo'))
      File.write(subject.staging_path('example/foo/delete_me'), 'Hello!')
      File.write(subject.staging_path('keeper'), 'Hello!')
      subject.attributes[:excludes] = ['example/foo']
      subject.instance_eval { exclude }
      insist { subject.files.sort } == ['example', 'keeper']
    end
  end
    
      # This class is raised when you try to output a package to a path
  # whose containing directory does not exist.
  class ParentDirectoryMissing < StandardError
    def to_s
      return 'Parent directory does not exist: #{File.dirname(super)} - cannot write to #{super}'
    end # def to_s
  end # class ParentDirectoryMissing
    
        # Follow similar rules to these used in ``to_s_fullversion`` method.
    # FIXME: maybe epoch should also be introduced somehow ('#{version},#{epoch})?
    #        should it go to pkgdata['version'] or to another place?
    # https://www.freebsd.org/doc/en/books/porters-handbook/makefile-naming.html
    pkg_version = (iteration and (iteration.to_i > 0)) ?  '#{version}-#{iteration}' : '#{version}'
    
        args = [ '-B', build_path('build-info'), '-c', build_path('comment'), '-d', build_path('description'), '-f', build_path('packlist'), '-I', '/opt/local', '-p', staging_path,  '-U', '#{cwd}/#{name}-#{self.version}-#{iteration}.tgz' ]
    safesystem('pkg_create', *args)
    
      require 'pleaserun/platform/systemd'
  require 'pleaserun/platform/upstart'
  require 'pleaserun/platform/launchd'
  require 'pleaserun/platform/sysv'
    
        # Copy 'files' from builddir to :output/files
    Find.find('files', 'manifests') do |path|
      logger.info('Copying path: #{path}')
      if File.directory?(path)
        ::Dir.mkdir(File.join(params[:output], path))
      else
        FileUtils.cp(path, File.join(params[:output], path))
      end
    end
  end # def build!
    
      # Download the given package if necessary. If version is given, that version
  # will be downloaded, otherwise the latest is fetched.
  def download_if_necessary(package, version=nil)
    # TODO(sissel): this should just be a 'download' method, the 'if_necessary'
    # part should go elsewhere.
    path = package
    # If it's a path, assume local build.
    if File.directory?(path) or (File.exist?(path) and File.basename(path) == 'setup.py')
      return path
    end
    
        # Generate the package 'Prototype' file
    File.open('#{build_path}/Prototype', 'w') do |prototype|
      prototype.puts('i pkginfo')
      prototype.puts('i preinstall') if self.scripts['pre-install']
      prototype.puts('i postinstall') if self.scripts['post-install']
    
      s.files         = Dir['lib/**/*', 'spec/**/*', 'bin/*', 'completion/*']
  s.executables   = s.files.grep(%r{^bin/}) { |f| File.basename(f) }
  s.test_files    = s.files.grep(%r{^(test|spec|features)/})
  s.require_paths = ['lib']
    
        def last?
      index == tab.panes.length - 1
    end
    
        def build_commands(_prefix, command_yml)
      if command_yml.is_a?(Array)
        command_yml.map do |command|
          '#{tmux_window_command_prefix} #{command.shellescape} C-m' if command
        end.compact
      elsif command_yml.is_a?(String) && !command_yml.empty?
        ['#{tmux_window_command_prefix} #{command_yml.shellescape} C-m']
      else
        []
      end
    end
    
        context 'attach is false in yaml' do
      before { project.yaml['attach'] = false }
      it 'returns false' do
        expect(project.attach?).to be_falsey
      end
    end
    
    FactoryBot.find_definitions
    
        context 'and there is no local project config' do
      context 'when no args are supplied' do
        it 'should call ::start' do
          expect(cli).to receive(:start).with([])
          subject
        end
      end
    
      describe '.shell?' do
    context '$SHELL is set' do
      before do
        allow(ENV).to receive(:[]).with('SHELL') { 'vim' }
      end
    
            it 'returns two panes in an Array' do
          expect(window.panes).to match [
            a_pane.with(index: 0).and_commands('vim'),
            a_pane.with(index: 1).and_commands(command1, command2)
          ]
        end
      end