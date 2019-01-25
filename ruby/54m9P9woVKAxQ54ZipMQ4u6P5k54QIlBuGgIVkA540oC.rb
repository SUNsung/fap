
        
                def render(&block)
          options = @options.stringify_keys
          tag_value = options.delete('value')
          name_and_id = options.dup
    
            def render
          options = @options.stringify_keys
          options['size'] = options['maxlength'] unless options.key?('size')
          options['type'] ||= field_type
          options['value'] = options.fetch('value') { value_before_type_cast } unless field_type == 'file'
          add_default_name_and_id(options)
          tag('input', options)
        end
    
            ActiveSupport::Notifications.instrument('render_#{name}.action_view', options) do |payload|
          yield payload
        end
      end
    
        # Some actions have special handling in fast_file.rb, that means we can't directly call the action
    # but we have to use the same logic that is in fast_file.rb instead.
    # That's where this switch statement comes into play
    def run_action_requiring_special_handling(command: nil, parameter_map: nil, action_return_type: nil)
      action_return = nil
      closure_argument_value = nil # only used if the action uses it
    
            expect(result).to eq('carthage bootstrap')
      end
    
          it 'Does not accept a :commits_count < 1' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            changelog_from_git_commits(commits_count: -1)
          end').runner.execute(:test)
        end.to raise_error(':commits_count must be >= 1')
      end
    
          it 'passes the deprecated pathspec parameter to path parameter' do
        with_verbose(true) do
          allow(Fastlane::Actions).to receive(:sh).with(anything, { log: true }).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(pathspec: 'myfile.txt')
          end').runner.execute(:test)
        end
      end
    
    def expect_command(*command, exitstatus: 0, output: '')
  mock_input = double(:input)
  mock_output = StringIO.new(output)
  mock_status = double(:status, exitstatus: exitstatus)
  mock_thread = double(:thread, value: mock_status)
    
        def to_s
      [@key, @description].join(': ')
    end
    
              expect(value).to eq(array.shelljoin)
        end
    
        def log_status(status)
      puts bold status
    end
    
      config.active_support.deprecation = :stderr
end

    
        def bubble_subject(root)
      root.children.each do |child|
        bubble_subject(child) if child.is_a?(Tree::RuleNode) || child.is_a?(Tree::DirectiveNode)
        next unless child.is_a?(Tree::RuleNode) && !child.children.empty?
        next unless child.children.all? do |c|
          next unless c.is_a?(Tree::RuleNode)
          first_simple_sel(c).is_a?(Sass::Selector::Parent) && first_sseq(c).subject?
        end
        first_sseq(child).subject = true
        child.children.each {|c| first_sseq(c).subject = false}
      end
    end
    
        # The import/mixin stack.
    #
    # @return [Sass::Stack]
    def stack
      @stack || global_env.stack
    end
  end
    
        # @return [String] The error message
    def to_s
      @message
    end
    
    # This is basically a copy of the original bundler 'bundle' shim
# with the addition of the loading of our Bundler patches that
# modify Bundler's caching behaviour.
    
    if $0 == __FILE__
  begin
    LogStash::PluginManager::Main.run('bin/logstash-plugin', ARGV)
  rescue LogStash::PluginManager::Error => e
    $stderr.puts(e.message)
    exit(1)
  end
end

    
              after(:each) { logstash.delete_file(gem_path_on_vagrant) }
    
        def messages
      return @messages
    end # def messages
    
        settings['registry'] = attributes[:npm_registry] if attributes[:npm_registry_given?]
    set_default_prefix unless attributes[:prefix_given?]
    
      def output(output_path)
    
    # Fixup the category to an acceptable solaris category
    case @category
    when nil, 'default'
      @category = 'Applications/System Utilities'
    end
    
      # Add a new source to this package.
  # The exact behavior depends on the kind of package being managed.
  #
  # For instance:
  #
  # * for FPM::Package::Dir, << expects a path to a directory or files.
  # * for FPM::Package::RPM, << expects a path to an rpm.
  #
  # The idea is that you can keep pumping in new things to a package
  # for later conversion or output.
  #
  # Implementations are expected to put files relevant to the 'input' in the
  # staging_path
  def input(pacman_pkg_path)
    control = {}
    # Unpack the control tarball
    safesystem(tar_cmd, '-C', staging_path, '-xf', pacman_pkg_path)
    pkginfo = staging_path('.PKGINFO')
    mtree = staging_path('.MTREE')
    install = staging_path('.INSTALL')
    
        platforms.each do |platform|
      logger.info('Generating service manifest.', :platform => platform.class.name)
      platform.program = command.first
      platform.name = attributes[:pleaserun_name]
      platform.args = command[1..-1]
      platform.description = if attributes[:description_given?]
        attributes[:description]
      else
        platform.name
      end
      pleaserun_attributes.each do |attribute_name|
        attribute = 'pleaserun_#{attribute_name}'.to_sym
        if attributes.has_key?(attribute) and not attributes[attribute].nil?
          platform.send('#{attribute_name}=', attributes[attribute])
        end
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