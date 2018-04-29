
        
              include ActionDispatch::Routing::PolymorphicRoutes
    
            def test_url_port
          spec = resolve 'abstract://foo:123?encoding=utf8'
          assert_equal({
            'adapter'  => 'abstract',
            'port'     => 123,
            'host'     => 'foo',
            'encoding' => 'utf8' }, spec)
        end
    
      def call_controller(klass, action)
    klass.action(action).call(@request.env)
  end
    
        test 'head :continue (100) does not return any content' do
      content = body(HeadController.action(:continue).call(Rack::MockRequest.env_for('/')))
      assert_empty content
    end
    
        def env_for(url)
      Rack::MockRequest.env_for(url)
    end
  end
    
      def resolve_thread(status)
    return unless status.reply? && status.thread.nil?
    ThreadResolveWorker.perform_async(status.id, in_reply_to_uri)
  end
    
                -- Return the time part and the sequence part. OR appears
            -- faster here than addition, but they're equivalent:
            -- time_part has no trailing two bytes, and tail is only
            -- the last two bytes.
            RETURN time_part | tail;
          END
        $$ LANGUAGE plpgsql VOLATILE;
      SQL
    end
    
        it 'does not create a domain block' do
      expect(DomainBlock.blocked?('evil.org')).to be false
    end
    
    RSpec.describe RuboCop::Cop::Style::StringMethods, :config do
  subject(:cop) { described_class.new(config) }