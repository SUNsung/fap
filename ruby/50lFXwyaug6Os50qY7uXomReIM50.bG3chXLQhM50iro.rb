
        
              # Returns an HTML block tag of type +name+ surrounding the +content+. Add
      # HTML attributes by passing an attributes hash to +options+.
      # Instead of passing the content as an argument, you can also use a block
      # in which case, you pass your +options+ as the second parameter.
      # Set escape to false to disable attribute value escaping.
      # Note: this is legacy syntax, see +tag+ method description for details.
      #
      # ==== Options
      # The +options+ hash can be used with attributes with no value like (<tt>disabled</tt> and
      # <tt>readonly</tt>), which you can give a value of true in the +options+ hash. You can use
      # symbols or strings for the attribute names.
      #
      # ==== Examples
      #   content_tag(:p, 'Hello world!')
      #    # => <p>Hello world!</p>
      #   content_tag(:div, content_tag(:p, 'Hello world!'), class: 'strong')
      #    # => <div class='strong'><p>Hello world!</p></div>
      #   content_tag(:div, 'Hello world!', class: ['strong', 'highlight'])
      #    # => <div class='strong highlight'>Hello world!</div>
      #   content_tag('select', options, multiple: true)
      #    # => <select multiple='multiple'>...options...</select>
      #
      #   <%= content_tag :div, class: 'strong' do -%>
      #     Hello world!
      #   <% end -%>
      #    # => <div class='strong'>Hello world!</div>
      def content_tag(name, content_or_options_with_block = nil, options = nil, escape = true, &block)
        if block_given?
          options = content_or_options_with_block if content_or_options_with_block.is_a?(Hash)
          tag_builder.content_tag_string(name, capture(&block), options, escape)
        else
          tag_builder.content_tag_string(name, content_or_options_with_block, options, escape)
        end
      end
    
                @when_connected = []
    
            def test_url_from_environment
          spec = resolve :production, 'production' => 'abstract://foo?encoding=utf8'
          assert_equal({
            'adapter'  =>  'abstract',
            'host'     =>  'foo',
            'encoding' => 'utf8',
            'name'     => 'production' }, spec)
        end
    
          test 'when :only is specified with an array, a before action is not triggered on other actions' do
        @controller.process(:sekrit_data)
        assert_equal 'true', @controller.response_body
      end
    
          def handle_exception_with_mailer_class(exception)
        if klass = mailer_class
          klass.handle_exception exception
        else
          raise exception
        end
      end
  end
end

    
        # An email was generated.
    def process(event)
      debug do
        mailer = event.payload[:mailer]
        action = event.payload[:action]
        '#{mailer}##{action}: processed outbound mail in #{event.duration.round(1)}ms'
      end
    end
    
            def initialize_test_deliveries
          set_delivery_method :test
          @old_perform_deliveries = ActionMailer::Base.perform_deliveries
          ActionMailer::Base.perform_deliveries = true
          ActionMailer::Base.deliveries.clear
        end
    
          key = Spaceship::Portal::Key.create(name: 'New Key', apns: true, device_check: true, music_id: 'some-music-id')
      expect(key).to be_instance_of(Spaceship::Portal::Key)
      expect(key.id).to eq('a-new-key-id')
    end
  end
    
    Note that you will likely need to have opened the app at least
once for any login items to be present.
    
    describe OsxfuseRequirement do
  subject { described_class.new([]) }
    
          output = @options[:output] = @args.shift
      raise 'Error: --from required when using --recursive.' unless @options[:from]
      raise 'Error: --to required when using --recursive.' unless @options[:to]
      unless File.directory?(@options[:input])
        raise 'Error: '#{@options[:input]}' is not a directory'
      end
      if @options[:output] && File.exist?(@options[:output]) &&
        !File.directory?(@options[:output])
        raise 'Error: '#{@options[:output]}' is not a directory'
      end
      @options[:output] ||= @options[:input]
    
      # Uninstalls this logger from \{Sass.logger\}. This should only be called if
  # the logger was installed using \{#install!}
  def uninstall!
    if Sass.logger != self
      throw Exception.new('Can't uninstall a logger that's not currently installed.')
    end
    
          def call
        title('Gems')
        table(all_gem_names) do |gem, row|
          row.yellow if update_available?(gem)
          row << gem
          row << installed_gem_version(gem)
          row << '(update available)' if update_available?(gem)
        end
      end
    
          # Override `Kernel#puts` to prepend four spaces to each line.
      def puts(string=nil)
        $stdout.puts(string.to_s.gsub(/^/, '    '))
      end
    
          private
    
      entries.each do |entry|
    if File.exist?(entry[:file])
      warn '[skip] #{entry[:file]} already exists'
    else
      File.open(entry[:file], 'w+') do |f|
        f.write(ERB.new(File.read(entry[:template])).result(binding))
        puts I18n.t(:written_file, scope: :capistrano, file: entry[:file])
      end
    end
  end
    
            it 'roles defined using the `role` syntax are included' do
          as = dsl.roles(:app).map { |server| '#{server.user}@#{server.hostname}:#{server.port}' }
          expect(as.size).to eq(2)
          expect(as[0]).to eq('deployer@example1.com:1234')
          expect(as[1]).to eq('@example1.com:5678')
        end
      end
    end