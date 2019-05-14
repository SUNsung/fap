
        
                def preload_stages_warnings
          # This preloads the number of warnings for every stage, ensuring
          # that Ci::Stage#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.stages.each { |stage| stage.number_of_warnings }
        end
      end
    end
  end
end

    
            def id_for_already_imported_cache(note)
          note.id
        end
      end
    end
  end
end

    
              sidekiq_worker_class
            .perform_async(project.id, repr.to_hash, waiter.key)
    
      gem.required_ruby_version = '>= 2.0'
  gem.add_dependency 'airbrussh', '>= 1.0.0'
  gem.add_dependency 'i18n'
  gem.add_dependency 'rake', '>= 10.0.0'
  gem.add_dependency 'sshkit', '>= 1.9.0'
    
      def safely_remove_file(_path)
    run_vagrant_command('rm #{test_file}')
  rescue
    VagrantHelpers::VagrantSSHCommandError
  end
end
    
        extend Forwardable
    attr_reader :variables
    def_delegators :variables,
                   :set, :fetch, :fetch_for, :delete, :keys, :validate
    
          sh <<-SH
        git commit --allow-empty -a -m '#{source_version} release'  &&
        git tag -s v#{source_version} -m '#{source_version} release'  &&
        git push && (git push origin || true) &&
        git push --tags && (git push origin --tags || true)
      SH
    end
    
        if run? && ARGV.any?
      require 'optparse'
      OptionParser.new { |op|
        op.on('-p port',   'set the port (default is 4567)')                { |val| set :port, Integer(val) }
        op.on('-o addr',   'set the host (default is #{bind})')             { |val| set :bind, val }
        op.on('-e env',    'set the environment (default is development)')  { |val| set :environment, val.to_sym }
        op.on('-s server', 'specify rack server/handler (default is thin)') { |val| set :server, val }
        op.on('-q',        'turn on quiet mode (default is off)')           {       set :quiet, true }
        op.on('-x',        'turn on the mutex lock (default is off)')       {       set :lock, true }
      }.parse!(ARGV.dup)
    end
  end
    
                <li class='frame-info <%= frame_class(frame) %>'>
              <code><%=h frame.filename %></code> in
                <code><strong><%=h frame.function %></strong></code>
            </li>
    
          def redirect(env)
        request = Request.new(env)
        warn env, 'attack prevented by #{self.class}'
        [302, {'Content-Type' => 'text/html', 'Location' => request.path}, []]
      end
    
      # Print deprecation notices to the Rails logger.
  config.active_support.deprecation = :log
    
            # If the instance variable @{attr} is defined, then
        # it means the flag was given on the command line.
        flag_given = instance_variable_defined?('@#{attr}')
        input.attributes['#{attr}_given?'.to_sym] = flag_given
        attr = '#{attr}?' if !respond_to?(attr) # handle boolean :flag cases
        input.attributes[attr.to_sym] = send(attr) if respond_to?(attr)
        logger.debug('Setting attribute', attr.to_sym => send(attr))
      end
    end
    
        wordsize = case @architecture
    when nil, 'native'
      %x{getconf LONG_BIT}.chomp # 'native' is current arch
    when 'amd64'
      '64'
    when 'i386'
      '32'
    else
      %x{getconf LONG_BIT}.chomp # default to native, the current arch
    end
    
      option '--data-dir', 'DATA_DIR',
    'Specify php dir relative to prefix if differs from pear default (pear/data)'
    
        libs = [ 'install.sh', 'install-path.sh', 'generate-cleanup.sh' ]
    libs.each do |file|
      base = staging_path(File.join(attributes[:prefix]))
      File.write(File.join(base, file), template(File.join('pleaserun', file)).result(binding))
      File.chmod(0755, File.join(base, file))
    end
    
        if File.exists?(params[:output])
      # TODO(sissel): Allow folks to choose output?
      logger.error('Puppet module directory '#{params[:output]}' already ' \
                    'exists. Delete it or choose another output (-p flag)')
    end
    
      # Where we keep metadata and post install scripts and such
  def fpm_meta_path
    @fpm_meta_path ||= begin
                         path = File.join(staging_path, '.fpm')
                         FileUtils.mkdir_p(path)
                         path
                       end
  end
end

    
    
    # Convert the 'package directory' built above to a real solaris package.
    safesystem('pkgtrans', '-s', build_path, output_path, name)
    safesystem('cp', '#{build_path}/#{output_path}', output_path)
  end # def output
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for tar.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end
    
      # Get an array containing the recommended 'ar' command for this platform
  # and the recommended options to quickly create/append to an archive
  # without timestamps or uids (if possible).
  def ar_cmd
    return @@ar_cmd if defined? @@ar_cmd
    
        attr_reader :commands, :index, :name, :project
    
    FactoryBot.define do
  factory :project, class: Tmuxinator::Project do
    transient do
      file { yaml_load('spec/fixtures/sample.yml') }
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
    
        result
  end
    
      describe '#tmux' do
    it { expect(instance.tmux).to eq 'wemux' }
  end
end
