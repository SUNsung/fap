
        
              # Returns constant of subscription adapter specified in config/cable.yml.
      # If the adapter cannot be found, this will default to the Redis adapter.
      # Also makes sure proper dependencies are required.
      def pubsub_adapter
        adapter = (cable.fetch('adapter') { 'redis' })
    
                Thread.pass while @thread.alive?
          end
    
            def test_url_port
          spec = resolve 'abstract://foo:123?encoding=utf8'
          assert_equal({
            'adapter'  => 'abstract',
            'port'     => 123,
            'host'     => 'foo',
            'encoding' => 'utf8' }, spec)
        end
    
      class InheritedController < MyController
  end
    
        # Helpers for creating and wrapping delivery behavior, used by DeliveryMethods.
    module ClassMethods
      # Provides a list of emails that have been delivered by Mail::TestMailer
      delegate :deliveries, :deliveries=, to: Mail::TestMailer
    
        AssertSelectMailer.test('<div><p>foo</p><p>bar</p></div>').deliver_now
    assert_select_email do
      assert_select 'div:root' do
        assert_select 'p:first-child', 'foo'
        assert_select 'p:last-child', 'bar'
      end
    end
  end
    
      teardown do
    ActionMailer::Base.delivery_method = @old_delivery_method
    new = ActionMailer::Base.delivery_methods.dup
    new.delete(:custom)
    ActionMailer::Base.delivery_methods = new
  end
    
    class HelperMailer < ActionMailer::Base
  def use_mail_helper
    @text = 'But soft! What light through yonder window breaks? It is the east, ' \
            'and Juliet is the sun. Arise, fair sun, and kill the envious moon, ' \
            'which is sick and pale with grief that thou, her maid, art far more ' \
            'fair than she. Be not her maid, for she is envious! Her vestal ' \
            'livery is but sick and green, and none but fools do wear it. Cast ' \
            'it off!'
    
    def usage
  <<-EOS
Usage: list_login_items_for_app <path.app>
    
        def silence_log
      @silence = true
      yield
    ensure
      @silence = false
    end
  end
end

    
      find_files = ->(path) {
    Find.find(Pathname.new(path).relative_path_from(Pathname.new Dir.pwd).to_s).map do |path|
      path if File.file?(path)
    end.compact
  }
    
      private
    
        case list
    when Hash
      list
    when Array, String, :DATA
      { p1: list }
    else
      {}
    end.each_pair do |strip, urls|
      Array(urls).each do |url|
        case url
        when :DATA
          patch = DATAPatch.new(strip)
        else
          patch = LegacyPatch.new(strip, url)
        end
        patches << patch
      end
    end
    
          def fetch_public_key(o_auth_app, jwt)
        public_key = fetch_public_key_from_json(o_auth_app.jwks, jwt)
        if public_key.empty? && o_auth_app.jwks_uri
          response = Faraday.get(o_auth_app.jwks_uri)
          public_key = fetch_public_key_from_json(response.body, jwt)
        end
        raise Rack::OAuth2::Server::Authorize::BadRequest(:unauthorized_client) if public_key.empty?
        public_key
      end
    
          mid_string_or_interp = to_string_interpolation(interp.mid)