
        
          # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/favourite
  def favourite
    f = Favourite.last
    NotificationMailer.favourite(f.status.account, Notification.find_by(activity: f))
  end
    
    module Capistrano
  module TaskEnhancements
    def before(task, prerequisite, *args, &block)
      prerequisite = Rake::Task.define_task(prerequisite, *args, &block) if block_given?
      Rake::Task[task].enhance [prerequisite]
    end
    
      desc 'Finished'
  task :finished do
  end
    
            it 'roles defined using the `role` syntax are included' do
          as = dsl.roles(:app).map { |server| '#{server.user}@#{server.hostname}:#{server.port}' }
          expect(as.size).to eq(2)
          expect(as[0]).to eq('deployer@example1.com:1234')
          expect(as[1]).to eq('@example1.com:5678')
        end
      end
    end
    
      // writing
  $('form').on('submit',function(e) {
    $.post('/', {msg: '<%= user %>: ' + $('#msg').val()});
    $('#msg').val(''); $('#msg').focus();
    e.preventDefault();
  });
</script>
    
          def call(env)
        status, headers, body = super
        response = Rack::Response.new(body, status, headers)
        request = Rack::Request.new(env)
        remove_bad_cookies(request, response)
        response.finish
      end
    
        it 'accepts requests with a single session cookie' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=SESSION_TOKEN'
      expect(last_response).to be_ok
    end
    
        it 'leaves normal params untouched' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']]]
      end
      get '/', :foo => 'bar'
      expect(body).to eq('bar')
    end
    
        mock_app do
      use Rack::Head
      use(Rack::Config) { |e| e['rack.session'] ||= {}}
      use changer
      use klass
      use detector
      run DummyApp
    end
    
        def calculated_type_matches
      possible_types.select do |content_type|
        content_type == type_from_file_contents
      end
    end
    
            def failure_message_when_negated
          'Should not have an attachment named #{@attachment_name}'
        end
        alias negative_failure_message failure_message_when_negated
    
            def failure_message
          '#{expected_attachment}\n'.tap do |message|
            message << accepted_types_and_failures.to_s
            message << '\n\n' if @allowed_types.present? && @rejected_types.present?
            message << rejected_types_and_failures.to_s
          end
        end
    
        # You can add your own processor via the Paperclip configuration. Normally
    # Paperclip will load all processors from the
    # Rails.root/lib/paperclip_processors directory, but here you can add any
    # existing class using this mechanism.
    #
    #   Paperclip.configure do |c|
    #     c.register_processor :watermarker, WatermarkingProcessor.new
    #   end
    def register_processor(name, processor)
      @known_processors ||= {}
      @known_processors[name.to_s] = processor
    end
  end
end

    
        module ClassMethods
      # This method is a shortcut to validator classes that is in
      # 'Attachment...Validator' format. It is almost the same thing as the
      # +validates+ method that shipped with Rails, but this is customized to
      # be using with attachment validators. This is helpful when you're using
      # multiple attachment validators on a single attachment.
      #
      # Example of using the validator:
      #
      #   validates_attachment :avatar, :presence => true,
      #      :content_type => { :content_type => 'image/jpg' },
      #      :size => { :in => 0..10.kilobytes }
      #
      def validates_attachment(*attributes)
        options = attributes.extract_options!.dup