
        
            assert_dom_equal '<script>\n//<![CDATA[\nalert('hello')\n//]]>\n</script>',
      javascript_tag('alert('hello')')
    
          def initialize
        super
        self.class.controller_path = ''
        @request = ActionController::TestRequest.create(self.class)
        @response = ActionDispatch::TestResponse.new
    
      test 'token_and_options returns empty string with empty token' do
    token = ''.dup
    actual = ActionController::HttpAuthentication::Token.token_and_options(sample_request(token)).first
    expected = token
    assert_equal(expected, actual)
  end
    
      def test_parsing_json_doesnot_rescue_exception
    req = Class.new(ActionDispatch::Request) do
      def params_parsers
        { json: Proc.new { |data| raise Interrupt } }
      end
    
        class MessageDelivery < ActionMailer::MessageDelivery # :nodoc:
      def initialize(mailer_class, action, params, *args)
        super(mailer_class, action, *args)
        @params = params
      end
    
      class Callbacks
    def self.around_create(record)
      now = Time.now.utc
    
      yield
end
    
      def collection_presenter
    ActivityPub::CollectionPresenter.new(
      id: tag_url(@tag),
      type: :ordered,
      size: @tag.statuses.count,
      items: @statuses.map { |s| ActivityPub::TagManager.instance.uri_for(s) }
    )
  end
    
        # If {#limit_to_network} is disabled, this will always return `true`.
    # Otherwise, return `true` only if all of the given IPs are within the
    # project {#boundary boundaries}.
    
        end
    
    require 'rubygems'  # install rubygems
require 'hpricot'   # gem install hpricot
require 'uri'
require 'timeout'
    
      def get_result
    @src.get_result
  end
end
    
          # Override `Kernel#puts` to prepend four spaces to each line.
      def puts(string=nil)
        $stdout.puts(string.to_s.gsub(/^/, '    '))
      end
    
        def deploying?
      fetch(:deploying, false)
    end
  end
end

    
      desc 'Rollback to previous release.'
  task :rollback do
    %w{ starting started
        reverting reverted
        publishing published
        finishing_rollback finished }.each do |task|
      invoke 'deploy:#{task}'
    end
  end
end
    
      if File.exist?('Capfile')
    warn '[skip] Capfile already exists'
  else
    FileUtils.cp(capfile, 'Capfile')
    puts I18n.t(:written_file, scope: :capistrano, file: 'Capfile')
  end
    
      let(:help_output) do
    out, _err = capture_io do
      flags '--help', '-h'
    end
    out
  end