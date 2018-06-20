
        
              # Returns constant of subscription adapter specified in config/cable.yml.
      # If the adapter cannot be found, this will default to the Redis adapter.
      # Also makes sure proper dependencies are required.
      def pubsub_adapter
        adapter = (cable.fetch('adapter') { 'redis' })
    
        topic.reload
    error = assert_raise(ActiveRecord::SerializationTypeMismatch) do
      topic.content
    end
    expected = 'can't load `content`: was supposed to be a Array, but was a Hash. -- {:zomg=>true}'
    assert_equal expected, error.to_s
  end
    
      def test_update_all_on_association_accessed_before_save_with_explicit_foreign_key
    firm = Firm.new(name: 'Firm', id: 100)
    firm.clients << Client.first
    firm.save!
    assert_equal firm.clients.count, firm.clients.update_all(description: 'Great!')
  end
    
      test 'timer start and stop' do
    mock = Minitest::Mock.new
    3.times { mock.expect(:shutdown, nil) }
    
    class ActionCable::Channel::RejectionTest < ActionCable::TestCase
  class SecretChannel < ActionCable::Channel::Base
    def subscribed
      reject if params[:id] > 0
    end
    
          concurrently(clients) do |c|
        assert_equal({ 'type' => 'welcome' }, c.read_message)  # pop the first welcome message off the stack
        c.send_message command: 'subscribe', identifier: JSON.generate(channel: 'ClientTest::EchoChannel')
        assert_equal({ 'identifier' => '{'channel':'ClientTest::EchoChannel'}', 'type' => 'confirm_subscription' }, c.read_message)
        c.send_message command: 'message', identifier: JSON.generate(channel: 'ClientTest::EchoChannel'), data: JSON.generate(action: 'ding', message: 'hello')
        assert_equal({ 'identifier' => '{'channel':'ClientTest::EchoChannel'}', 'message' => { 'dong' => 'hello' } }, c.read_message)
      end
    
    end

    
      def self.fragment_cache
    @cache ||= DistributedCache.new('am_serializer_fragment_cache')
  end
    
      def reemit
    @event.reemit!
    respond_to do |format|
      format.html { redirect_back event_path(@event), notice: 'Event re-emitted.' }
    end
  end
    
      def destroy
    @services = current_user.services.find(params[:id])
    @services.destroy
    
      # Clean a top-level (bin, sbin, lib) directory, recursively, by fixing file
  # permissions and removing .la files, unless the files (or parent
  # directories) are protected by skip_clean.
  #
  # bin and sbin should not have any subdirectories; if either do that is
  # caught as an audit warning
  #
  # lib may have a large directory tree (see Erlang for instance), and
  # clean_dir applies cleaning rules to the entire tree
  def clean_dir(d)
    d.find do |path|
      path.extend(ObserverPathnameExtension)
    
      def brief_build_info(f)
    build_time_str = f.logs.ctime.strftime('%Y-%m-%d %H:%M:%S')
    s = <<~EOS
      Homebrew build logs for #{f.full_name} on #{OS_VERSION}
    EOS
    if ARGV.include?('--with-hostname')
      hostname = Socket.gethostname
      s << 'Host: #{hostname}\n'
    end
    s << 'Build date: #{build_time_str}\n'
    s
  end
    
        private
    
            p environment.var(name)
      else
        p Script::Parser.parse(text, @line, 0).perform(environment)
      end
    rescue Sass::SyntaxError => e
      puts 'SyntaxError: #{e.message}'
      if @options[:trace]
        e.backtrace.each do |line|
          puts '\tfrom #{line}'
        end
      end
    end
  end
end

    
        # Returns the three components of the interpolation, `before`, `mid`, and `after`.
    #
    # @return [Array<Node>]
    # @see #initialize
    # @see Node#children
    def children
      [@before, @mid, @after].compact
    end
    
          def call(env)
        status, headers, body = super
        response = Rack::Response.new(body, status, headers)
        request = Rack::Request.new(env)
        remove_bad_cookies(request, response)
        response.finish
      end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   XSS
    # Supported browsers:: all
    # More infos::         http://en.wikipedia.org/wiki/Cross-site_scripting
    #
    # Automatically escapes Rack::Request#params so they can be embedded in HTML
    # or JavaScript without any further issues. Calls +html_safe+ on the escaped
    # strings if defined, to avoid double-escaping in Rails.
    #
    # Options:
    # escape:: What escaping modes to use, should be Symbol or Array of Symbols.
    #          Available: :html (default), :javascript, :url
    class EscapedParams < Base
      extend Rack::Utils
    
      describe '#referrer' do
    it 'Reads referrer from Referer header' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/valid'}
      expect(subject.referrer(env)).to eq('bar.com')
    end
    
        it 'denies requests with sneaky encoded session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.%73ession=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
      context 'escaping' do
    it 'escapes html entities' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']]]
      end
      get '/', :foo => '<bar>'
      expect(body).to eq('&lt;bar&gt;')
    end
    
      it 'should allow changing the protection mode' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::XSSHeader, :xss_mode => :foo
      run DummyApp
    end
    
        def clear
      @attachments = Hash.new { |h,k| h[k] = {} }
    end
    
            protected
    
          class ValidateAttachmentPresenceMatcher
        def initialize attachment_name
          @attachment_name = attachment_name
        end
    
          def self.helper_method_name
        :validates_attachment_content_type
      end