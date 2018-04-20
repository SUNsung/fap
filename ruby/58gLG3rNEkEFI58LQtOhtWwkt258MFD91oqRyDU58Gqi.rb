
        
                def test_url_sub_key
          spec = resolve :production, 'production' => { 'url' => 'abstract://foo?encoding=utf8' }
          assert_equal({
            'adapter'  => 'abstract',
            'host'     => 'foo',
            'encoding' => 'utf8',
            'name'     => 'production' }, spec)
        end
    
        test 'head :switching_protocols (101) does not return a content-type header' do
      headers = HeadController.action(:switching_protocols).call(Rack::MockRequest.env_for('/')).second
      assert_nil headers['Content-Type']
      assert_nil headers['Content-Length']
    end
    
        def perform(mailer, mail_method, delivery_method, *args) #:nodoc:
      mailer.constantize.public_send(mail_method, *args).send(delivery_method)
    end
    
            def enqueue_delivery(delivery_method, options = {})
          if processed?
            super
          else
            args = @mailer_class.name, @action.to_s, delivery_method.to_s, @params, *@args
            ActionMailer::Parameterized::DeliveryJob.set(options).perform_later(*args)
          end
        end
    end
    
      test 'does not increment the deliveries collection on bogus deliveries' do
    old_raise_delivery_errors = DeliveryMailer.raise_delivery_errors
    begin
      DeliveryMailer.delivery_method = BogusDelivery
      DeliveryMailer.raise_delivery_errors = false
      DeliveryMailer.welcome.deliver_now
      assert_equal [], DeliveryMailer.deliveries
    ensure
      DeliveryMailer.raise_delivery_errors = old_raise_delivery_errors
    end
  end
end

    
          def initialize(*args, &block)
        @bypass_confirmation_postpone = false
        @skip_reconfirmation_in_callback = false
        @reconfirmation_required = false
        @skip_confirmation_notification = false
        @raw_confirmation_token = nil
        super
      end
    
      protected
    def after_resetting_password_path_for(resource)
      Devise.sign_in_after_reset_password ? after_sign_in_path_for(resource) : new_session_path(resource_name)
    end
    
        media_attachments
  end
    
        def source_base_url
      'https://github.com/tootsuite/mastodon'
    end
    
    input = ARGV.shift() || usage()
    
                  # Remove it form the session objects so freeup
              sessions.delete(s[:session])
    
    ip   = ARGV.shift() || exit
port = ARGV.shift() || 31337
    
    #Rjb::load('.', jvmargs=[])
Rjb::load('#{ENV['JAVA_HOME']}/lib/tools.jar:.',jvmargs=[])
    
    outputJar = 'output.jar'
    
          opts.on('--unix-newlines', 'Use Unix-style newlines in written files.',
                                 ('Always true on Unix.' unless Sass::Util.windows?)) do
        @options[:unix_newlines] = true if Sass::Util.windows?
      end
    end
    
          # Returns the time the given Sass file was last modified.
      #
      # If the given file has been deleted or the time can't be accessed
      # for some other reason, this should return nil.
      #
      # @param uri [String] The URI of the file to check.
      #   Comes from a `:filename` option set on an engine returned by this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [Time, nil]
      def mtime(uri, options)
        Sass::Util.abstract(self)
      end
    
      config = Merb::Plugins.config[:sass] || Merb::Plugins.config['sass'] || {}
    
        # Starts the read-eval-print loop.
    def run
      environment = Environment.new
      @line = 0
      loop do
        @line += 1
        unless (text = Readline.readline('>> '))
          puts
          return
        end
    
    class SinatraStaticServer < Sinatra::Base
    
    module Jekyll
    
        def sizes
      attrs = 'width='#{@sizes[0]}'' if @sizes[0]
      attrs += ' height='#{@sizes[1]}'' if @sizes[1]
      attrs
    end
  end
end
    
          instance.run_paperclip_callbacks(:post_process) do
        instance.run_paperclip_callbacks(:'#{name}_post_process') do
          if !@options[:check_validity_before_processing] || !instance.errors.any?
            post_process_styles(*style_args)
          end
        end
      end
    end
    
            def responds?
          methods = @subject.instance_methods.map(&:to_s)
          methods.include?('#{@attachment_name}') &&
            methods.include?('#{@attachment_name}=') &&
            methods.include?('#{@attachment_name}?')
        end
    
    module Paperclip
  # Provides helper methods that can be used in migrations.
  module Schema
    COLUMNS = {:file_name    => :string,
               :content_type => :string,
               :file_size    => :integer,
               :updated_at   => :datetime}
    
              add_offense(node)
        end
    
            def comparison?(node)
          simple_comparison?(node) || nested_comparison?(node)
        end
      end
    end
  end
end

    
              annotated_source.each_line do |source_line|
            if source_line =~ ANNOTATION_PATTERN
              annotations << [source.size, source_line]
            else
              source << source_line
            end
          end