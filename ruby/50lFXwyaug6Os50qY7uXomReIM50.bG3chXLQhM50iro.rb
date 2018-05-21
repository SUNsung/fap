
        
          def teardown
    ActiveSupport.escape_html_entities_in_json = @old_escape_html_entities_in_json
  end
    
    class RedirectTest < ActionController::TestCase
  tests RedirectController
    
          # Overwrite this factory method for Redis connections if you want to use a different Redis library than the redis gem.
      # This is needed, for example, when using Makara proxies for distributed Redis.
      cattr_accessor :redis_connector, default: ->(config) do
        ::Redis.new(config.slice(:url, :host, :port, :db, :password))
      end
    
            def test_url_sub_key_merges_correctly
          hash = { 'url' => 'abstract://foo?encoding=utf8&', 'adapter' => 'sqlite3', 'host' => 'bar', 'pool' => '3' }
          spec = resolve :production, 'production' => hash
          assert_equal({
            'adapter'  => 'abstract',
            'host'     => 'foo',
            'encoding' => 'utf8',
            'pool'     => '3',
            'name'     => 'production' }, spec)
        end
    
          def compute_attributes(keys)
        keys.collect { |key| [ key, public_send(key) ] }.to_h
      end
  end
end

    
        # Returns +text+ wrapped at +len+ columns and indented +indent+ spaces.
    # By default column length +len+ equals 72 characters and indent
    # +indent+ equal two spaces.
    #
    #   my_text = 'Here is a sample text with more than 40 characters'
    #
    #   format_paragraph(my_text, 25, 4)
    #   # => '    Here is a sample text with\n    more than 40 characters'
    def format_paragraph(text, len = 72, indent = 2)
      sentences = [[]]
    
    module ActionMailer
  class NonInferrableMailerError < ::StandardError
    def initialize(name)
      super 'Unable to determine the mailer to test from #{name}. ' \
        'You'll need to specify it using tests YourMailer in your ' \
        'test case definition'
    end
  end
    
      def use_message
    mail_with_defaults do |format|
      format.html { render(inline: '<%= message.subject %>') }
    end
  end
    
    module Metasploit
  module Framework
    class Application < Rails::Application
      include Metasploit::Framework::CommonEngine
    
    msfenv_real_pathname = Pathname.new(__FILE__).realpath
root = msfenv_real_pathname.parent.parent
    
                  s[:proto] = 'tcp'
              s[:name]  = 'pop3'
              s[:extra] = 'Successful Login. Banner: #{s[:banner]}'
              report_auth_info(s)
              print_status('Successful POP3 Login: #{s[:session]} >> #{s[:user]} / #{s[:pass]} (#{s[:banner].strip})')
    
    puts '* System info:'
    
    #certCN cannot contain commas
certCN 		= 'Metasploit Inc.'
#keytoolOpts 	= '-genkey -alias signFiles -keystore msfkeystore ' +
#		  '-storepass msfstorepass -dname \'cn=#{certCN}\' ' +
#		  '-keypass msfkeypass'
    
          def remove_bad_cookies(request, response)
        return if bad_cookies.empty?
        paths = cookie_paths(request.path)
        bad_cookies.each do |name|
          paths.each { |path| response.set_cookie name, empty_cookie(request.host, path) }
        end
      end
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
      it 'should not override the header if already set' do
    mock_app with_headers('X-Frame-Options' => 'allow')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('allow')
  end
end

    
      def as_boolean(string)
    return true   if string == true   || string =~ (/(true|t|yes|y|1)$/i)
    return false  if string == false  || string.blank? || string =~ (/(false|f|no|n|0)$/i)
    raise ArgumentError.new('invalid value for Boolean: \'#{string}\'')
  end
    
      def _nt_compare_expression
    start_index = index
    if node_cache[:compare_expression].has_key?(index)
      cached = node_cache[:compare_expression][index]
      if cached
        cached = SyntaxNode.new(input, index...(index + 1)) if cached == true
        @index = cached.interval.end
      end
      return cached
    end