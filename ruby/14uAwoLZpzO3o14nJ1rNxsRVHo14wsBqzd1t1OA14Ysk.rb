
        
            # Create a new Collection.
    #
    # site - the site to which this collection belongs.
    # label - the name of the collection
    #
    # Returns nothing.
    def initialize(site, label)
      @site     = site
      @label    = sanitize_label(label)
      @metadata = extract_metadata
    end
    
            msg = ' Please append `--trace` to the `#{cmd.name}` command '
        dashes = '-' * msg.length
        Jekyll.logger.error '', dashes
        Jekyll.logger.error 'Jekyll #{Jekyll::VERSION} ', msg
        Jekyll.logger.error '', ' for any additional information or backtrace. '
        Jekyll.logger.abort_with '', dashes
      end
      # rubocop: enable RescueException
    end
  end
end

    
                Jekyll.logger.debug 'LiveReload:', 'Reloading #{p.url}'
            Jekyll.logger.debug '', json_message
            @websockets.each { |ws| ws.send(json_message) }
          end
        end
    
            # Add the ability to tap file.html the same way that Nginx does on our
        # Docker images (or on GitHub Pages.) The difference is that we might end
        # up with a different preference on which comes first.
    
              # If it's a directory they want to exclude, AKA
          # ends with a '/' then we will go on to check and
          # see if the entry falls within that path and
          # exclude it if that's the case.
    
        # The stdlib recorded in the install receipt is used during dependency
    # compatibility checks, so we only care about the stdlib that libraries
    # link against.
    keg.detect_cxx_stdlibs(:skip_executables => true)
  end
    
    module Homebrew
  def build_env_keys(env)
    %w[
      CC CXX LD OBJC OBJCXX
      HOMEBREW_CC HOMEBREW_CXX
      CFLAGS CXXFLAGS CPPFLAGS LDFLAGS SDKROOT MAKEFLAGS
      CMAKE_PREFIX_PATH CMAKE_INCLUDE_PATH CMAKE_LIBRARY_PATH CMAKE_FRAMEWORK_PATH
      MACOSX_DEPLOYMENT_TARGET PKG_CONFIG_PATH PKG_CONFIG_LIBDIR
      HOMEBREW_DEBUG HOMEBREW_MAKE_JOBS HOMEBREW_VERBOSE
      HOMEBREW_SVN HOMEBREW_GIT
      HOMEBREW_SDKROOT HOMEBREW_BUILD_FROM_SOURCE
      MAKE GIT CPP
      ACLOCAL_PATH PATH CPATH].select { |key| env.key?(key) }
  end
    
      def external_commands
    paths.reduce([]) do |cmds, path|
      Dir['#{path}/brew-*'].each do |file|
        next unless File.executable?(file)
        cmd = File.basename(file, '.rb')[5..-1]
        cmds << cmd unless cmd.include?('.')
      end
      cmds
    end.sort
  end
    
          if options[:type] == :array
        options[:roles] << :completable
        class_eval <<-EOF
          def complete_#{name}
            #{options[:values]}.map { |v| {text: v, id: v} }
          end
        EOF
      end
    
      def tumblr_consumer_key
    ENV['TUMBLR_OAUTH_KEY']
  end
    
        @user_credentials = current_user.user_credentials.reorder(table_sort).page(params[:page])
    
      describe 'DATA_PTR' do
    it 'returns the struct data' do
      a = @s.typed_wrap_struct(1024)
      @s.typed_get_struct_data_ptr(a).should == 1024
    end
  end
end

    
      before :all do
    begin
      leaked = Process.waitall
      puts 'leaked before wait specs: #{leaked}' unless leaked.empty?
      with_feature :mjit do
        # Ruby-space should not see PIDs used by mjit
        leaked.should be_empty
      end
    rescue NotImplementedError
    end
  end
    
        with_tmpchdir {|d|
      prog = '#{d}/notexist'
      e = assert_raise(Errno::ENOENT) {
        Process.wait Process.spawn({'FOO'=>'BAR'}, prog)
      }
      assert_equal(prog, e.message.sub(/.* - /, ''))
      e = assert_raise(Errno::ENOENT) {
        Process.wait Process.spawn({'FOO'=>'BAR'}, [prog, 'blar'])
      }
      assert_equal(prog, e.message.sub(/.* - /, ''))
    }
    h = {}
    cmd = [h, RUBY]
    (ENV.keys + MANDATORY_ENVS).each do |k|
      case k
      when /\APATH\z/i
      when *MANDATORY_ENVS
        cmd << '-e' << 'ENV.delete('#{k}')'
      else
        h[k] = nil
      end
    end
    cmd << '-e' << 'puts ENV.keys.map{|e|e.upcase}'
    IO.popen(cmd) {|io|
      assert_equal('PATH\n', io.read)
    }
    
        name, prefix = split_name(name)
    
        spec = util_spec 'some_gem' do |s|
      s.signing_key = SIGNING_KEY
      s.cert_chain = [CERT_FILE]
    end
    
        set2 = Set[Set[0], 1, 2, set1]
    assert_equal('#<Set: {#<Set: {0}>, 1, 2, #<Set: {1, 2}>}>', set2.to_s)
    
      it 'ignores NULL bytes between directives' do
    '333333\x07@ffffff\xf6?'.unpack(unpack_format('\000', 2)).should == [2.9, 1.4]
  end
    
        def scoped_accounts
      Account.unscoped.tap do |scope|
        scope.merge! with_usernames
        scope.merge! matching_username
        scope.merge! matching_domain
      end
    end
    
      def remote_url
    object.remote_url.presence
  end
    
      def name
    ':#{object.shortcode}:'
  end
end

    
      attr_reader :user
    
      def scope
    root_url
  end
    
          configure_sass
    end
    
    desc 'Clean out caches: .pygments-cache, .gist-cache, .sass-cache'
task :clean do
  rm_rf [Dir.glob('.pygments-cache/**'), Dir.glob('.gist-cache/**'), Dir.glob('.sass-cache/**'), 'source/stylesheets/screen.css']
end
    
      get(/.+/) do
    send_sinatra_file(request.path) {404}
  end
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
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
    
            if attachment.nil?
          attachment = Attachment.new(name, self, options)
          instance_variable_set(ivar, attachment)
        end
    
            def passes_validation_with_size(new_size)
          file = StringIO.new('.')
          override_method(file, :size){ new_size }
          override_method(file, :to_tempfile){ file }
    
            required = directories.map do |directory|
          pathname = File.expand_path(Rails.root.join(directory, filename))
          file_exists = File.exist?(pathname)
          require pathname if file_exists
          file_exists
        end
    
        module TableDefinition
      def attachment(*attachment_names)
        options = attachment_names.extract_options!
        attachment_names.each do |attachment_name|
          COLUMNS.each_pair do |column_name, column_type|
            column_options = options.merge(options[column_name.to_sym] || {})
            column('#{attachment_name}_#{column_name}', column_type, column_options)
          end
        end
      end