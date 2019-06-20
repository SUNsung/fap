
        
        # Test https://github.com/jekyll/jekyll/pull/6735#discussion_r165499868
# ------------------------------------------------------------------------
def check_with_regex(content)
  !content.to_s.match?(%r!{[{%]!)
end
    }
    }
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
    Mercenary.program(:jekyll) do |p|
  p.version Jekyll::VERSION
  p.description 'Jekyll is a blog-aware, static site generator in Ruby'
  p.syntax 'jekyll <subcommand> [options]'
    
          def step_name(_keyword, _step_match, status, _source_indent, _background, _file_colon_line)
        @io.print CHARS[status]
        @io.print ' '
      end
      # rubocop:enable Metrics/ParameterLists
    
          def jekyll
        JekyllDrop.global
      end
    
        private
    
    class Api::OEmbedController < Api::BaseController
  respond_to :json
    
      def hub_callback
    params['hub.callback']
  end
    
        head 200
  end
    
          if @user.persisted?
        sign_in_and_redirect @user, event: :authentication
        set_flash_message(:notice, :success, kind: provider_id.capitalize) if is_navigational_format?
      else
        session['devise.#{provider}_data'] = request.env['omniauth.auth']
        redirect_to new_user_registration_url
      end
    end
  end
    
      private
    
      private
    
          # Returns the else branch of the `case` statement, if any.
      #
      # @return [Node] the else branch node of the `case` statement
      # @return [nil] if the case statement does not have an else branch.
      def else_branch
        node_parts[-1]
      end
    
            private
    
          private
    
        logger.log('Created package', :path => package_file)
    return 0
  rescue FPM::Util::ExecutableNotFound => e
    logger.error('Need executable '#{e}' to convert #{input_type} to #{output_type}')
    return 1
  rescue FPM::InvalidPackageConfiguration => e
    logger.error('Invalid package configuration: #{e}')
    return 1
  rescue FPM::Util::ProcessFailed => e
    logger.error('Process failed: #{e}')
    return 1
  ensure
    if debug_workspace?
      # only emit them if they have files
      [input, output].each do |plugin|
        next if plugin.nil?
        [:staging_path, :build_path].each do |pathtype|
          path = plugin.send(pathtype)
          next unless Dir.open(path).to_a.size > 2
          logger.log('plugin directory', :plugin => plugin.type, :pathtype => pathtype, :path => path)
        end
      end
    else
      input.cleanup unless input.nil?
      output.cleanup unless output.nil?
    end
  end # def execute
    
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
    
        logger.info('Installing pear package', :package => input_package,
                  :directory => staging_path)
    ::Dir.chdir(staging_path) do
      safesystem('pear', '-c', config, 'install', '-n', '-f', input_package)
    end
    
        # name prefixing is optional, if enabled, a name 'foo' will become
    # 'python-foo' (depending on what the python_package_name_prefix is)
    if attributes[:python_fix_name?]
      self.name = fix_name(metadata['name'])
    else
      self.name = metadata['name']
    end
    
      option '--user', 'USER',
    'Set the user to USER in the prototype files.',
    :default => 'root'
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for tar.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end
    
      def initialize(package_name, opts = {}, &block)
    @options = OpenStruct.new(:name => package_name.to_s)
    @source, @target = opts.values_at(:source, :target).map(&:to_s)
    @directory = File.expand_path(opts[:directory].to_s)
    
      # Run a command safely in a way that captures output and status.
  def safesystemout(*args)
    if args.size == 1
      args = [ ENV['SHELL'], '-c', args[0] ]
    end
    program = args[0]