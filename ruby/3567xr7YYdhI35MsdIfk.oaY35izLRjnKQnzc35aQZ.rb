        def test_url_port
          spec = resolve 'abstract://foo:123?encoding=utf8'
          assert_equal({
            'adapter'  => 'abstract',
            'port'     => 123,
            'host'     => 'foo',
            'encoding' => 'utf8' }, spec)
        end
    
    require 'test_helper'
require 'stubs/test_server'
    
      test 'on connection close' do
    run_in_eventmachine do
      connection = open_connection
      connection.process
    
        def close_connection
      @connection.send :handle_close
    end
end

    
        def connect
      @connected = true
    end
    
        def setup_connection
      env = Rack::MockRequest.env_for '/test', 'HTTP_HOST' => 'localhost', 'HTTP_CONNECTION' => 'upgrade', 'HTTP_UPGRADE' => 'websocket'
      @connection = Connection.new(@server, env)
    
      def connect(config)
    ActionCable::SubscriptionAdapter::Redis.redis_connector.call(config)
  end
end

    
      if final_pid = Process.fork
    # middle process
    open(pidfile, 'w') { |f| f.puts final_pid }
    exit
  end
    
      def validate_evernote_options
    unless evernote_consumer_key.present? &&
      evernote_consumer_secret.present? &&
      evernote_oauth_token.present?
      errors.add(:base, 'Evernote ENV variables and a Service are required')
    end
  end
    
      def load_event
    @event = current_user.events.find(params[:id])
  end
end

    
        respond_to do |format|
      format.html { redirect_to services_path }
      format.json { head :no_content }
    end
  end
    
    require_relative '../../../spec_helper'
    
      it 'does copy the message' do
    @obj.dup.message.should == @obj.message
  end
    
    module NoMethodErrorSpecs
  class NoMethodErrorA; end
    
      with_feature :encoding do
    before :each do
      @external = Encoding.default_external
      @internal = Encoding.default_internal
    
        it 'dumps a Range exclusive of end (with indeterminant order)' do
      dump = Marshal.dump(1...2)
      load = Marshal.load(dump)
      load.should == (1...2)
    end
    
      it 'raises a #{frozen_error_class} when self is frozen' do
    lambda { 'HeLlo'.freeze.downcase! }.should raise_error(frozen_error_class)
    lambda { 'hello'.freeze.downcase! }.should raise_error(frozen_error_class)
  end
    
        it 'does not allow invalid options' do
      lambda { 'abc'.swapcase(:invalid_option) }.should raise_error(ArgumentError)
    end
  end
    
          def update_if_necessary!
        if @update && config.verbose?
          UI.section('\nUpdating Spec Repositories\n'.yellow) do
            Repo.new(ARGV.new(['update'])).run
          end
        end
      end
    
    end
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
    Liquid::Template.register_tag('gist', Jekyll::GistTag)
Liquid::Template.register_tag('gistnocache', Jekyll::GistTagNoCache)

    
          if File.symlink?(code_path)
        return 'Code directory '#{code_path}' cannot be a symlink'
      end