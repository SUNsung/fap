
        
          def initialize(info = {})
    super(merge_info(info,
      'Name'          => 'Unix Command Shell, Reverse TCP (/dev/tcp)',
      'Description'   => %q{
        Creates an interactive shell via bash's builtin /dev/tcp.
    }
    
    
module MetasploitModule
    
            # PBKDF2 stored in <iterations, salt, entropy> format
        decoded_hash = '$ml$#{iterations}$#{salt}$#{entropy}'
        report_hash('SHA-512 PBKDF2', decoded_hash, user)
      elsif lion? # 10.7
        # pull the shadow from dscl
        shadow_bytes = grab_shadow_blob(user)
        next if shadow_bytes.blank?
    
        register_options(
        [
            OptString.new('TARGETURI', [true, 'URI to test', '/']),
        ], Exploit::Remote::HttpClient
    )
    
      var obuf = new Uint32Array(2);
  obuf[0] = 0x41414141;
  obuf[1] = 0xffff0000;
    
    unless ENV['BUNDLE_GEMFILE']
  require 'pathname'
    
      #
  # Invoke the kerberos ticket listing functionality on the target machine.
  #
  def cmd_kerberos_ticket_list(*args)
    if args.include?('-h')
      kerberos_ticket_list_usage
      return
    end
    
      bins.each do |from, to|
    next if (from != 'metsvc.exe' and remove)
    to ||= from
    print_status(' >> Uploading #{from}...')
    fd = client.fs.file.new(tempdir + '\\' + to, 'wb')
    path = (from == 'metsrv.x86.dll') ? MetasploitPayloads.meterpreter_path('metsrv','x86.dll') : File.join(based, from)
    fd.write(::File.read(path, ::File.size(path)))
    fd.close
  end
    
          # Creates and links an import file for the given pod target and into the given native target.
      #
      # @param  [Project] project
      #         the Xcodeproj to generate the target into.
      #
      # @param  [PBXNativeTarget] target
      #         the native target to link the generated import file into.
      #
      # @param  [PodTarget] pod_target
      #         the pod target to use for when generating the contents of the import file.
      #
      # @param  [Symbol] platform
      #         the platform of the target. Can be `:ios` or `:osx`, etc.
      #
      # @param  [String] name
      #         The name to use for the target, defaults to 'App'.
      #
      # @return [Array<PBXBuildFile>] the created build file references.
      #
      def self.add_app_project_import(project, target, pod_target, platform, name = 'App')
        source_file = AppTargetHelper.create_app_import_source_file(project, pod_target, platform, name)
        group = project[name] || project.new_group(name, name)
        source_file_ref = group.new_file(source_file)
        target.add_file_references([source_file_ref])
      end
    
            it 'does not remove existing embed frameworks build phases from integrated framework targets' do
          @pod_bundle.stubs(:build_type => Target::BuildType.dynamic_framework)
          @target_integrator.integrate!
          @pod_bundle.stubs(:requires_frameworks? => false)
          target = @target_integrator.send(:native_targets).first
          @target_integrator.integrate!
          phase = target.shell_script_build_phases.find { |bp| bp.name == @embed_framework_phase_name }
          phase.should.not.be.nil
        end
    
              # Prints a warning informing the user that a build configuration of
          # the integrated target is overriding the CocoaPods build settings.
          #
          # @param  [Target::AggregateTarget] pod_bundle
          #         The Pods bundle.
          #
          # @param  [XcodeProj::PBXNativeTarget] target
          #         The native target.
          #
          # @param  [Xcodeproj::XCBuildConfiguration] config
          #         The build configuration.
          #
          # @param  [String] key
          #         The key of the overridden build setting.
          #
          def self.print_override_warning(pod_bundle, target, config, key)
            actions = [
              'Use the `$(inherited)` flag, or',
              'Remove the build settings from the target.',
            ]
            message = 'The `#{target.name} [#{config.name}]` ' \
              'target overrides the `#{key}` build setting defined in ' \
              '`#{pod_bundle.pod_bundle.xcconfig_relative_path(config.name)}'. ' \
              'This can lead to problems with the CocoaPods installation'
            UI.warn(message, actions)
          end
    
                project 'path/to/XcodeProject.xcodeproj'
    
            def self.options
          [
            ['--template-url=URL', 'The URL of the git repo containing a ' \
                                  'compatible template'],
          ].concat(super)
        end
    
          def print_issue_full(issue)
        safe_url = URI.escape issue.html_url
        UI.puts ' - #{issue.title}'
        UI.puts '   #{safe_url} [#{issue.state}] [#{issue.comments} comment#{issue.comments == 1 ? '' : 's'}]'
        UI.puts '   #{pretty_date(issue.updated_at)}'
        UI.puts ''
      end
    
        class Mgr
      attr_reader :latest_error
      attr_reader :mutex
      attr_reader :cond
      def initialize
        @mutex = ::Mutex.new
        @cond = ::ConditionVariable.new
      end
      def processor_died(inst, err)
        @latest_error = err
        @mutex.synchronize do
          @cond.signal
        end
      end
      def processor_stopped(inst)
        @mutex.synchronize do
          @cond.signal
        end
      end
      def options
        { :concurrency => 3, :queues => ['default'] }
      end
    end
    
        it 'can fetch by score' do
      same_time = Time.now.to_f
      add_retry('bob1', same_time)
      add_retry('bob2', same_time)
      r = Sidekiq::RetrySet.new
      assert_equal 2, r.fetch(same_time).size
    end
    
            Sidekiq.redis do |conn|
          %w(queue:queue_1 queue:queue_2 queue:queue_4 queue:queue_5).each do |queue_name|
            assert_equal 1, conn.llen(queue_name)
            job = Sidekiq.load_json(conn.lrange(queue_name, 0, -1)[0])
            assert_equal enqueued_time.to_f, job['enqueued_at']
            assert_equal created_time.to_f,  job['created_at']
          end
        end
    
          assert SomeScheduledWorker.perform_in(5.days.from_now, 'mike')
      assert_equal 3, ss.size
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
      class IncludeCodeTag < Liquid::Tag
    def initialize(tag_name, markup, tokens)
      @title = nil
      @file = nil
      if markup.strip =~ /\s*lang:(\S+)/i
        @filetype = $1
        markup = markup.strip.sub(/lang:\S+/i,'')
      end
      if markup.strip =~ /(.*)?(\s+|^)(\/*\S+)/i
        @title = $1 || nil
        @file = $3
      end
      super
    end
    
          context 'and :python_package_name_prefix is set' do
        it 'should prefix the package name appropriately' do
          prefix = 'whoa'
          subject.attributes[:python_package_name_prefix] = prefix
          subject.input(example_dir)
          insist { subject.name } == '#{prefix}-example'
        end
      end
    end
    
          it 'should have the custom version' do
        pending('Ruby 1.x and 2.0.x are unsupported for Snap because it lacks Psych::safe_load') if is_old_ruby
        insist { input.version } == 'custom-version'
      end
    
        # No version yet, nil.
    return nil
  end # def version
    
        # %u %s=%s\n
    # len name=hash
    
        # Arch has no notion of vendor, so...
    #self.vendor =
    
        pear_cmd = 'pear -c #{config} remote-info #{input_package}'
    logger.info('Fetching package information', :package => input_package, :command => pear_cmd)
    name = %x{#{pear_cmd} | sed -ne '/^Package\s*/s/^Package\s*//p'}.chomp
    self.name = '#{attributes[:pear_package_name_prefix]}-#{name}'
    self.version = %x{#{pear_cmd} | sed -ne '/^Installed\s*/s/^Installed\s*//p'}.chomp
    self.description  = %x{#{pear_cmd} | sed -ne '/^Summary\s*/s/^Summary\s*//p'}.chomp
    logger.debug('Package info', :name => self.name, :version => self.version,
                  :description => self.description)
    
        args = [ '-B', build_path('build-info'), '-c', build_path('comment'), '-d', build_path('description'), '-f', build_path('packlist'), '-I', '/opt/local', '-p', staging_path,  '-U', '#{cwd}/#{name}-#{self.version}-#{iteration}.tgz' ]
    safesystem('pkg_create', *args)
    
          if !attributes[:python_install_bin].nil?
        flags += [ '--install-scripts', File.join(prefix, attributes[:python_install_bin]) ]
      elsif !attributes[:prefix].nil?
        # prefix given, but not python_install_bin, assume PREFIX/bin
        flags += [ '--install-scripts', File.join(prefix, 'bin') ]
      end
    
        # Generate the package 'Prototype' file
    File.open('#{build_path}/Prototype', 'w') do |prototype|
      prototype.puts('i pkginfo')
      prototype.puts('i preinstall') if self.scripts['pre-install']
      prototype.puts('i postinstall') if self.scripts['post-install']