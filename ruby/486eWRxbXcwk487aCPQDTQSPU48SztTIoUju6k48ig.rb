
        
                  def tag_id(index = nil)
            # a little duplication to construct less strings
            case
            when @object_name.empty?
              sanitized_method_name.dup
            when index
              '#{sanitized_object_name}_#{index}_#{sanitized_method_name}'
            else
              '#{sanitized_object_name}_#{sanitized_method_name}'
            end
          end
    
              def checked?(value)
            case value
            when TrueClass, FalseClass
              value == !!@checked_value
            when NilClass
              false
            when String
              value == @checked_value
            else
              if value.respond_to?(:include?)
                value.include?(@checked_value)
              else
                value.to_i == @checked_value.to_i
              end
            end
          end
    
        You can read more about this change at:
      https://www.playframework.com/documentation/2.3.x/Migration23
      https://www.playframework.com/documentation/2.3.x/Highlights23
    EOS
  when 'haskell-platform' then <<-EOS.undent
    We no longer package haskell-platform. Consider installing ghc
    and cabal-install instead:
      brew install ghc cabal-install
    
      # True if a {Formula} is being built without a specific option.
  # <pre>args << '--no-spam-plz' if build.without? 'spam'
  def without?(val)
    !with?(val)
  end
    
      def search_tap(user, repo, rx)
    if (HOMEBREW_LIBRARY/'Taps/#{user.downcase}/homebrew-#{repo.downcase}').directory? && \
       user != 'Caskroom'
      return []
    end
    
            def initialize(badge)
          @entity = badge.entity
          @status = badge.status
        end
    
            def key_width
          62
        end
    
    Then(/^directories referenced in :linked_files are created in shared$/) do
  dirs = TestApp.linked_files.map { |path| TestApp.shared_path.join(path).dirname }
  dirs.each do |dir|
    run_vagrant_command(test_dir_exists(dir))
  end
end
    
      def symlinked?(symlink_path, target_path)
    '[ #{symlink_path} -ef #{target_path} ]'
  end
    
        [stdout, stderr, status]
  end
    
        def install_plugin(plugin, load_hooks: true, load_immediately: false)
      installer.install(plugin,
                        load_hooks: load_hooks,
                        load_immediately: load_immediately)
    end
    
          # Given a callable that provides a value, wrap the callable with another
      # object that responds to `call`. This new object will perform validation
      # and then return the original callable's value.
      #
      # If the callable is a `Question`, the object returned by this method will
      # also be a `Question` (a `ValidatedQuestion`, to be precise). This
      # ensures that `is_a?(Question)` remains true even after the validation
      # wrapper is applied. This is needed so that `Configuration#is_question?`
      # works as expected.
      #
      def assert_valid_later(key, callable)
        validation_callback = lambda do
          value = callable.call
          assert_valid_now(key, value)
          value
        end
    
    get '/stream', :provides => 'text/event-stream' do
  stream :keep_open do |out|
    connections << out
    out.callback { connections.delete(out) }
  end
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
    
    
    {    if (bt.className == 'condensed') {
      bt.className = 'expanded';
      toggler.innerHTML = '(condense)';
    } else {
      bt.className = 'condensed';
      toggler.innerHTML = '(expand)';
    }
  }
  //-->
  </script>
    
            DIRECTIVES.each do |d|
          if options.key?(d)
            directives << '#{d.to_s.sub(/_/, '-')} #{options[d]}'
          end
        end
    
          def call(env)
        request               = Request.new(env)
        status, headers, body = app.call(env)
    
    def attach_attachment(name, definition = nil)
  snippet = 'has_attached_file :#{name}'
  if definition
    snippet += ', \n'
    snippet += definition
  end
  snippet += '\ndo_not_validate_attachment_file_type :#{name}\n'
  cd('.') do
    transform_file('app/models/user.rb') do |content|
      content.sub(/end\Z/, '#{snippet}\nend')
    end
  end
end
    
    When /^(?:|I )attach the file '([^']*)' to '([^']*)'$/ do |path, field|
  attach_file(field, File.expand_path(path))
end
    
        def add_required_validations
      options = Paperclip::Attachment.default_options.deep_merge(@options)
      if options[:validate_media_type] != false
        name = @name
        @klass.validates_media_type_spoof_detection name,
          :if => ->(instance){ instance.send(name).dirty? }
      end
    end
    
        # Returns the pluralized form of the attachment name. e.g.
    # 'avatars' for an attachment of :avatar
    def attachment attachment, style_name
      plural_cache.pluralize_symbol(attachment.name)
    end